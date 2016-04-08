// Generated by gencpp from file rfid/rfid_info.msg
// DO NOT EDIT!


#ifndef RFID_MESSAGE_RFID_INFO_H
#define RFID_MESSAGE_RFID_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rfid
{
template <class ContainerAllocator>
struct rfid_info_
{
  typedef rfid_info_<ContainerAllocator> Type;

  rfid_info_()
    : count()
    , ID()
    , num(0)  {
    }
  rfid_info_(const ContainerAllocator& _alloc)
    : count(_alloc)
    , ID(_alloc)
    , num(0)  {
    }



   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _count_type;
  _count_type count;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _ID_type;
  _ID_type ID;

   typedef int16_t _num_type;
  _num_type num;




  typedef boost::shared_ptr< ::rfid::rfid_info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rfid::rfid_info_<ContainerAllocator> const> ConstPtr;

}; // struct rfid_info_

typedef ::rfid::rfid_info_<std::allocator<void> > rfid_info;

typedef boost::shared_ptr< ::rfid::rfid_info > rfid_infoPtr;
typedef boost::shared_ptr< ::rfid::rfid_info const> rfid_infoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rfid::rfid_info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rfid::rfid_info_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rfid

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'rfid': ['/home/turtlebot/xu_slam/src/rfid/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rfid::rfid_info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rfid::rfid_info_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rfid::rfid_info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rfid::rfid_info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rfid::rfid_info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rfid::rfid_info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rfid::rfid_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b199d3773e1c40cbc71ad015148b4c3";
  }

  static const char* value(const ::rfid::rfid_info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b199d3773e1c40cULL;
  static const uint64_t static_value2 = 0xbc71ad015148b4c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rfid::rfid_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rfid/rfid_info";
  }

  static const char* value(const ::rfid::rfid_info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rfid::rfid_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16[] count\n\
string[] ID\n\
int16 num\n\
";
  }

  static const char* value(const ::rfid::rfid_info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rfid::rfid_info_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
      stream.next(m.ID);
      stream.next(m.num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct rfid_info_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rfid::rfid_info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rfid::rfid_info_<ContainerAllocator>& v)
  {
    s << indent << "count[]" << std::endl;
    for (size_t i = 0; i < v.count.size(); ++i)
    {
      s << indent << "  count[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.count[i]);
    }
    s << indent << "ID[]" << std::endl;
    for (size_t i = 0; i < v.ID.size(); ++i)
    {
      s << indent << "  ID[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ID[i]);
    }
    s << indent << "num: ";
    Printer<int16_t>::stream(s, indent + "  ", v.num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RFID_MESSAGE_RFID_INFO_H
