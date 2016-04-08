// Generated by gencpp from file robot_status/map_odom.msg
// DO NOT EDIT!


#ifndef ROBOT_STATUS_MESSAGE_MAP_ODOM_H
#define ROBOT_STATUS_MESSAGE_MAP_ODOM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace robot_status
{
template <class ContainerAllocator>
struct map_odom_
{
  typedef map_odom_<ContainerAllocator> Type;

  map_odom_()
    : data()
    , pose()  {
    }
  map_odom_(const ContainerAllocator& _alloc)
    : data(_alloc)
    , pose(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;




  typedef boost::shared_ptr< ::robot_status::map_odom_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_status::map_odom_<ContainerAllocator> const> ConstPtr;

}; // struct map_odom_

typedef ::robot_status::map_odom_<std::allocator<void> > map_odom;

typedef boost::shared_ptr< ::robot_status::map_odom > map_odomPtr;
typedef boost::shared_ptr< ::robot_status::map_odom const> map_odomConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_status::map_odom_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_status::map_odom_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_status

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'robot_status': ['/home/turtlebot/xu_slam/src/robot_status/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_status::map_odom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_status::map_odom_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_status::map_odom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_status::map_odom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_status::map_odom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_status::map_odom_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_status::map_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77e2ff6a5052345f4a4bd7f9d49276c8";
  }

  static const char* value(const ::robot_status::map_odom_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77e2ff6a5052345fULL;
  static const uint64_t static_value2 = 0x4a4bd7f9d49276c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_status::map_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_status/map_odom";
  }

  static const char* value(const ::robot_status::map_odom_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_status::map_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n\
geometry_msgs/Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::robot_status::map_odom_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_status::map_odom_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct map_odom_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_status::map_odom_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_status::map_odom_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_STATUS_MESSAGE_MAP_ODOM_H
