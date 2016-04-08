// Generated by gencpp from file tf_nodes/TeleportRelativeResponse.msg
// DO NOT EDIT!


#ifndef TF_NODES_MESSAGE_TELEPORTRELATIVERESPONSE_H
#define TF_NODES_MESSAGE_TELEPORTRELATIVERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf_nodes
{
template <class ContainerAllocator>
struct TeleportRelativeResponse_
{
  typedef TeleportRelativeResponse_<ContainerAllocator> Type;

  TeleportRelativeResponse_()
    {
    }
  TeleportRelativeResponse_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TeleportRelativeResponse_

typedef ::tf_nodes::TeleportRelativeResponse_<std::allocator<void> > TeleportRelativeResponse;

typedef boost::shared_ptr< ::tf_nodes::TeleportRelativeResponse > TeleportRelativeResponsePtr;
typedef boost::shared_ptr< ::tf_nodes::TeleportRelativeResponse const> TeleportRelativeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf_nodes

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'tf_nodes': ['/home/turtlebot/xu_slam/src/tf_nodes/msg'], 'tf': ['/opt/ros/indigo/share/tf/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf_nodes/TeleportRelativeResponse";
  }

  static const char* value(const ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TeleportRelativeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::tf_nodes::TeleportRelativeResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TF_NODES_MESSAGE_TELEPORTRELATIVERESPONSE_H
