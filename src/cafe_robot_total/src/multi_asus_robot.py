#!/usr/bin/env python
#coding=utf-8
"""
fake robot total program

Copyright (c) 2015 Xu Zhihao (Howe).  All rights reserved.
This program is free software; you can redistribute it and/or modify
This programm is tested on kuboki base turtlebot. 
"""
import rospy,os,subprocess
from rosgraph_msgs.msg import Log

class multi_asus_robot():
 def define(self):
  self.bringup_info=''
  self.rosout_msg=''
  self.rosout_name=''
  
  self.amcl_ready=False

  self.bringup_ready=False
  
  self.finish=False
  self.map_ready=False
  

 #启动机器
 def asus_robot_bringup(self):
  subprocess.Popen('roslaunch multi_machine turtlebot_bringup_asus.launch  odom_frame:=first_robot/odom base_frame:=first_robot/base_footprint',shell=True)

 #加载map
 def map_server(self):
  subprocess.Popen('roslaunch multi_machine map_server.launch',shell=True)
  
 
 #启动amcl
 def asus_amcl(self):
  subprocess.Popen('roslaunch multi_machine asus_robot_amcl.launch odom_frame_id:=first_robot/odom base_frame_id:=first_robot/base_footprint global_frame_id:=first_robot/map',shell=True)
 
  
 def if_bringup_ready(self):
  if 'Device' in self.rosout_msg and 'found' in self.rosout_msg:
   self.bringup_ready=True

 def if_map_ready(self):
  if 'Read' in self.rosout_msg and 'map' in self.rosout_msg and 'm/cell'in self.rosout_msg:
   self.map_ready=True

 def if_amcl_ready(self):
  if 'odom received' in self.rosout_msg:
   self.amcl_ready=True
   
 # rosout    
 def rosout_callback(self,data):
   
  self.rosout_msg=data.msg
  self.rosout_name=data.name
  
  self.if_bringup_ready()
  if self.bringup_ready:
   self.bringup_ready=False
   #self.map_server()
   rospy.loginfo('请运行roslaunch multi_machine map_server.launch')

  self.if_map_ready()
  if self.map_ready:
   self.map_ready=False
   self.asus_amcl()
  
  self.if_amcl_ready()
  if self.amcl_ready:
   self.amcl_ready=False
   rospy.sleep(2)
   self.finish=True

  if self.finish:
   self.finish=False
   rospy.loginfo('请运行roslaunch multi_machine 3D_multi_RVIZ.launch')
   #self.multi_RVIZ()
  
 def __init__(self):
  self.define()
  rospy.init_node('multi_asus_robot')
  if self.bringup_info=='':
   self.asus_robot_bringup()
  rospy.Subscriber('/rosout',Log, self.rosout_callback)

  rospy.spin()

if __name__=='__main__':
 try:
  rospy.loginfo ("initialization system")
  multi_asus_robot()
  rospy.loginfo ("process done and quit")
 except rospy.ROSInterruptException:
  rospy.loginfo("robot twist node terminated.")
