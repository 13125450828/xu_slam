// Generated by gencpp from file rplidar_python/rplidar_point.msg
// DO NOT EDIT!


#ifndef RPLIDAR_PYTHON_MESSAGE_RPLIDAR_POINT_H
#define RPLIDAR_PYTHON_MESSAGE_RPLIDAR_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rplidar_python
{
template <class ContainerAllocator>
struct rplidar_point_
{
  typedef rplidar_point_<ContainerAllocator> Type;

  rplidar_point_()
    : point()
    , frame(0)  {
    }
  rplidar_point_(const ContainerAllocator& _alloc)
    : point(_alloc)
    , frame(0)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _point_type;
  _point_type point;

   typedef uint64_t _frame_type;
  _frame_type frame;




  typedef boost::shared_ptr< ::rplidar_python::rplidar_point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rplidar_python::rplidar_point_<ContainerAllocator> const> ConstPtr;

}; // struct rplidar_point_

typedef ::rplidar_python::rplidar_point_<std::allocator<void> > rplidar_point;

typedef boost::shared_ptr< ::rplidar_python::rplidar_point > rplidar_pointPtr;
typedef boost::shared_ptr< ::rplidar_python::rplidar_point const> rplidar_pointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rplidar_python::rplidar_point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rplidar_python::rplidar_point_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rplidar_python

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'rplidar_python': ['/home/turtlebot2/xu_slam/src/rplidar_python/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rplidar_python::rplidar_point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rplidar_python::rplidar_point_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rplidar_python::rplidar_point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rplidar_python::rplidar_point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rplidar_python::rplidar_point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rplidar_python::rplidar_point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rplidar_python::rplidar_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa899acdbb1820f1c69580996b2593eb";
  }

  static const char* value(const ::rplidar_python::rplidar_point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa899acdbb1820f1ULL;
  static const uint64_t static_value2 = 0xc69580996b2593ebULL;
};

template<class ContainerAllocator>
struct DataType< ::rplidar_python::rplidar_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rplidar_python/rplidar_point";
  }

  static const char* value(const ::rplidar_python::rplidar_point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rplidar_python::rplidar_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string point\n\
uint64 frame\n\
";
  }

  static const char* value(const ::rplidar_python::rplidar_point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rplidar_python::rplidar_point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
      stream.next(m.frame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct rplidar_point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rplidar_python::rplidar_point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rplidar_python::rplidar_point_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.point);
    s << indent << "frame: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.frame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RPLIDAR_PYTHON_MESSAGE_RPLIDAR_POINT_H