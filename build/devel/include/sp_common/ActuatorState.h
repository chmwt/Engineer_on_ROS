// Generated by gencpp from file sp_common/ActuatorState.msg
// DO NOT EDIT!


#ifndef SP_COMMON_MESSAGE_ACTUATORSTATE_H
#define SP_COMMON_MESSAGE_ACTUATORSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sp_common
{
template <class ContainerAllocator>
struct ActuatorState_
{
  typedef ActuatorState_<ContainerAllocator> Type;

  ActuatorState_()
    : stamp()
    , name()
    , type()
    , bus()
    , id()
    , halted()
    , position_raw()
    , velocity_raw()
    , circle()
    , last_position_raw()
    , position()
    , velocity()
    , effort()
    , cmd_effort()
    , exe_effort()  {
    }
  ActuatorState_(const ContainerAllocator& _alloc)
    : stamp(_alloc)
    , name(_alloc)
    , type(_alloc)
    , bus(_alloc)
    , id(_alloc)
    , halted(_alloc)
    , position_raw(_alloc)
    , velocity_raw(_alloc)
    , circle(_alloc)
    , last_position_raw(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , effort(_alloc)
    , cmd_effort(_alloc)
    , exe_effort(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<ros::Time, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros::Time>> _stamp_type;
  _stamp_type stamp;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _name_type;
  _name_type name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _bus_type;
  _bus_type bus;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _id_type;
  _id_type id;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _halted_type;
  _halted_type halted;

   typedef std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> _position_raw_type;
  _position_raw_type position_raw;

   typedef std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> _velocity_raw_type;
  _velocity_raw_type velocity_raw;

   typedef std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> _circle_type;
  _circle_type circle;

   typedef std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> _last_position_raw_type;
  _last_position_raw_type last_position_raw;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _position_type;
  _position_type position;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _effort_type;
  _effort_type effort;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _cmd_effort_type;
  _cmd_effort_type cmd_effort;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _exe_effort_type;
  _exe_effort_type exe_effort;





  typedef boost::shared_ptr< ::sp_common::ActuatorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sp_common::ActuatorState_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorState_

typedef ::sp_common::ActuatorState_<std::allocator<void> > ActuatorState;

typedef boost::shared_ptr< ::sp_common::ActuatorState > ActuatorStatePtr;
typedef boost::shared_ptr< ::sp_common::ActuatorState const> ActuatorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sp_common::ActuatorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sp_common::ActuatorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sp_common::ActuatorState_<ContainerAllocator1> & lhs, const ::sp_common::ActuatorState_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.name == rhs.name &&
    lhs.type == rhs.type &&
    lhs.bus == rhs.bus &&
    lhs.id == rhs.id &&
    lhs.halted == rhs.halted &&
    lhs.position_raw == rhs.position_raw &&
    lhs.velocity_raw == rhs.velocity_raw &&
    lhs.circle == rhs.circle &&
    lhs.last_position_raw == rhs.last_position_raw &&
    lhs.position == rhs.position &&
    lhs.velocity == rhs.velocity &&
    lhs.effort == rhs.effort &&
    lhs.cmd_effort == rhs.cmd_effort &&
    lhs.exe_effort == rhs.exe_effort;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sp_common::ActuatorState_<ContainerAllocator1> & lhs, const ::sp_common::ActuatorState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sp_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sp_common::ActuatorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sp_common::ActuatorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sp_common::ActuatorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sp_common::ActuatorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sp_common::ActuatorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sp_common::ActuatorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sp_common::ActuatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "40a5a2d346a26f8d3a3f5c992d8174b2";
  }

  static const char* value(const ::sp_common::ActuatorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x40a5a2d346a26f8dULL;
  static const uint64_t static_value2 = 0x3a3f5c992d8174b2ULL;
};

template<class ContainerAllocator>
struct DataType< ::sp_common::ActuatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sp_common/ActuatorState";
  }

  static const char* value(const ::sp_common::ActuatorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sp_common::ActuatorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is for visualizing the ActuatorState\n"
"# The data from real Actuator will be parsed by sp_hw\n"
"# notice that this is a vector of ActuatorState\n"
"\n"
"time[] stamp\n"
"string[] name\n"
"string[] type\n"
"string[] bus\n"
"int32[] id\n"
"bool[] halted\n"
"\n"
"# the direct feedback from rotor's encoder\n"
"uint16[] position_raw\n"
"int16[] velocity_raw\n"
"int64[] circle\n"
"uint16[] last_position_raw\n"
"\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"\n"
"float64[] cmd_effort \n"
"float64[] exe_effort\n"
;
  }

  static const char* value(const ::sp_common::ActuatorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sp_common::ActuatorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.bus);
      stream.next(m.id);
      stream.next(m.halted);
      stream.next(m.position_raw);
      stream.next(m.velocity_raw);
      stream.next(m.circle);
      stream.next(m.last_position_raw);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.effort);
      stream.next(m.cmd_effort);
      stream.next(m.exe_effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sp_common::ActuatorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sp_common::ActuatorState_<ContainerAllocator>& v)
  {
    s << indent << "stamp[]" << std::endl;
    for (size_t i = 0; i < v.stamp.size(); ++i)
    {
      s << indent << "  stamp[" << i << "]: ";
      Printer<ros::Time>::stream(s, indent + "  ", v.stamp[i]);
    }
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "type[]" << std::endl;
    for (size_t i = 0; i < v.type.size(); ++i)
    {
      s << indent << "  type[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type[i]);
    }
    s << indent << "bus[]" << std::endl;
    for (size_t i = 0; i < v.bus.size(); ++i)
    {
      s << indent << "  bus[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.bus[i]);
    }
    s << indent << "id[]" << std::endl;
    for (size_t i = 0; i < v.id.size(); ++i)
    {
      s << indent << "  id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.id[i]);
    }
    s << indent << "halted[]" << std::endl;
    for (size_t i = 0; i < v.halted.size(); ++i)
    {
      s << indent << "  halted[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.halted[i]);
    }
    s << indent << "position_raw[]" << std::endl;
    for (size_t i = 0; i < v.position_raw.size(); ++i)
    {
      s << indent << "  position_raw[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.position_raw[i]);
    }
    s << indent << "velocity_raw[]" << std::endl;
    for (size_t i = 0; i < v.velocity_raw.size(); ++i)
    {
      s << indent << "  velocity_raw[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.velocity_raw[i]);
    }
    s << indent << "circle[]" << std::endl;
    for (size_t i = 0; i < v.circle.size(); ++i)
    {
      s << indent << "  circle[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.circle[i]);
    }
    s << indent << "last_position_raw[]" << std::endl;
    for (size_t i = 0; i < v.last_position_raw.size(); ++i)
    {
      s << indent << "  last_position_raw[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.last_position_raw[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "effort[]" << std::endl;
    for (size_t i = 0; i < v.effort.size(); ++i)
    {
      s << indent << "  effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.effort[i]);
    }
    s << indent << "cmd_effort[]" << std::endl;
    for (size_t i = 0; i < v.cmd_effort.size(); ++i)
    {
      s << indent << "  cmd_effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cmd_effort[i]);
    }
    s << indent << "exe_effort[]" << std::endl;
    for (size_t i = 0; i < v.exe_effort.size(); ++i)
    {
      s << indent << "  exe_effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.exe_effort[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SP_COMMON_MESSAGE_ACTUATORSTATE_H
