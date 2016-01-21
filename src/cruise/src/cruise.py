#!/usr/bin/env python
#coding=utf-8
""" 2015/12/17
地图上选几个点进行巡航

Copyright (c) 2015 Xu Zhihao (Howe).  All rights reserved.

This program is free software; you can redistribute it and/or modify

This programm is tested on kuboki base turtlebot. 

"""
import rospy,getpass
from actions_reference import *

class cruise_modle():
 def __init__(self):
  rospy.init_node('cruise_modle')
  module=raw_input('请问您是希望自定义机器人的将要到达的位置（1），还是希望运行机器人到达默认的位置(任意键)（2 positions by default）： ')
  if module=='1':
   rospy.loginfo('您选择了自定义任务')
   pose_number=int(raw_input('请输入您希望机器人一次任务需要到达多少个地点: '))
   cruise(pose_number)
  else:
   rospy.loginfo('您选择了默认任务')
   count=getpass.getuser()
   try:
    rospy.loginfo('检测到预注册的位置')
    pose_list=pre_load()
   except:
    rospy.loginfo('未检测到预注册的位置')
    pose_list=pre_regist()

if __name__ == '__main__':
 try:
  rospy.loginfo( "initialization system")
  cruise_modle()
  rospy.loginfo( "process done and quit")
 except rospy.ROSInterruptException:
  rospy.loginfo("follower node terminated.")

