// Generated by gencpp from file rfid/rfid_odom.msg
// DO NOT EDIT!


#ifndef RFID_MESSAGE_RFID_ODOM_H
#define RFID_MESSAGE_RFID_ODOM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace rfid
{
template <class ContainerAllocator>
struct rfid_odom_
{
  typedef rfid_odom_<ContainerAllocator> Type;

  rfid_odom_()
    : pose()
    , id()  {
    }
  rfid_odom_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , id(_alloc)  {
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;




  typedef boost::shared_ptr< ::rfid::rfid_odom_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rfid::rfid_odom_<ContainerAllocator> const> ConstPtr;

}; // struct rfid_odom_

typedef ::rfid::rfid_odom_<std::allocator<void> > rfid_odom;

typedef boost::shared_ptr< ::rfid::rfid_odom > rfid_odomPtr;
typedef boost::shared_ptr< ::rfid::rfid_odom const> rfid_odomConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rfid::rfid_odom_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rfid::rfid_odom_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rfid

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'rfid': ['/home/turtlebot2/xu_slam/src/rfid/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rfid::rfid_odom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rfid::rfid_odom_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rfid::rfid_odom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rfid::rfid_odom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rfid::rfid_odom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rfid::rfid_odom_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rfid::rfid_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64492c0a6f5f2df870b5c1ef882b6e99";
  }

  static const char* value(const ::rfid::rfid_odom_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64492c0a6f5f2df8ULL;
  static const uint64_t static_value2 = 0x70b5c1ef882b6e99ULL;
};

template<class ContainerAllocator>
struct DataType< ::rfid::rfid_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rfid/rfid_odom";
  }

  static const char* value(const ::rfid::rfid_odom_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rfid::rfid_odom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose\n\
string id\n\
\n\
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

  static const char* value(const ::rfid::rfid_odom_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rfid::rfid_odom_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct rfid_odom_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rfid::rfid_odom_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rfid::rfid_odom_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RFID_MESSAGE_RFID_ODOM_H
