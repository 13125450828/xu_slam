// Generated by gencpp from file tf_nodes/SpawnResponse.msg
// DO NOT EDIT!


#ifndef TF_NODES_MESSAGE_SPAWNRESPONSE_H
#define TF_NODES_MESSAGE_SPAWNRESPONSE_H


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
struct SpawnResponse_
{
  typedef SpawnResponse_<ContainerAllocator> Type;

  SpawnResponse_()
    : name()  {
    }
  SpawnResponse_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;




  typedef boost::shared_ptr< ::tf_nodes::SpawnResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf_nodes::SpawnResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SpawnResponse_

typedef ::tf_nodes::SpawnResponse_<std::allocator<void> > SpawnResponse;

typedef boost::shared_ptr< ::tf_nodes::SpawnResponse > SpawnResponsePtr;
typedef boost::shared_ptr< ::tf_nodes::SpawnResponse const> SpawnResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf_nodes::SpawnResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf_nodes::SpawnResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf_nodes

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'tf_nodes': ['/home/turtlebot/xu_slam/src/tf_nodes/msg'], 'tf': ['/opt/ros/indigo/share/tf/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf_nodes::SpawnResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf_nodes::SpawnResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf_nodes::SpawnResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::tf_nodes::SpawnResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf_nodes/SpawnResponse";
  }

  static const char* value(const ::tf_nodes::SpawnResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
";
  }

  static const char* value(const ::tf_nodes::SpawnResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SpawnResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf_nodes::SpawnResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tf_nodes::SpawnResponse_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TF_NODES_MESSAGE_SPAWNRESPONSE_H
