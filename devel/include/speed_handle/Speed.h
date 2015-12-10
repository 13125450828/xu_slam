// Generated by gencpp from file speed_handle/Speed.msg
// DO NOT EDIT!


#ifndef SPEED_HANDLE_MESSAGE_SPEED_H
#define SPEED_HANDLE_MESSAGE_SPEED_H

#include <ros/service_traits.h>


#include <speed_handle/SpeedRequest.h>
#include <speed_handle/SpeedResponse.h>


namespace speed_handle
{

struct Speed
{

typedef SpeedRequest Request;
typedef SpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Speed
} // namespace speed_handle


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::speed_handle::Speed > {
  static const char* value()
  {
    return "c61d132b79de8e81697fdcc375c6df44";
  }

  static const char* value(const ::speed_handle::Speed&) { return value(); }
};

template<>
struct DataType< ::speed_handle::Speed > {
  static const char* value()
  {
    return "speed_handle/Speed";
  }

  static const char* value(const ::speed_handle::Speed&) { return value(); }
};


// service_traits::MD5Sum< ::speed_handle::SpeedRequest> should match 
// service_traits::MD5Sum< ::speed_handle::Speed > 
template<>
struct MD5Sum< ::speed_handle::SpeedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::speed_handle::Speed >::value();
  }
  static const char* value(const ::speed_handle::SpeedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::speed_handle::SpeedRequest> should match 
// service_traits::DataType< ::speed_handle::Speed > 
template<>
struct DataType< ::speed_handle::SpeedRequest>
{
  static const char* value()
  {
    return DataType< ::speed_handle::Speed >::value();
  }
  static const char* value(const ::speed_handle::SpeedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::speed_handle::SpeedResponse> should match 
// service_traits::MD5Sum< ::speed_handle::Speed > 
template<>
struct MD5Sum< ::speed_handle::SpeedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::speed_handle::Speed >::value();
  }
  static const char* value(const ::speed_handle::SpeedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::speed_handle::SpeedResponse> should match 
// service_traits::DataType< ::speed_handle::Speed > 
template<>
struct DataType< ::speed_handle::SpeedResponse>
{
  static const char* value()
  {
    return DataType< ::speed_handle::Speed >::value();
  }
  static const char* value(const ::speed_handle::SpeedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SPEED_HANDLE_MESSAGE_SPEED_H
