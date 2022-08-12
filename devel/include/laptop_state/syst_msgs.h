// Generated by gencpp from file laptop_state/syst_msgs.msg
// DO NOT EDIT!


#ifndef LAPTOP_STATE_MESSAGE_SYST_MSGS_H
#define LAPTOP_STATE_MESSAGE_SYST_MSGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace laptop_state
{
template <class ContainerAllocator>
struct syst_msgs_
{
  typedef syst_msgs_<ContainerAllocator> Type;

  syst_msgs_()
    : header()
    , device_name()
    , partitions()
    , system_size()
    , cpu_processor(0)
    , free_space()
    , ram_size(0.0)
    , used_ram(0.0)
    , available_ram(0.0)
    , frequency()
    , cpu_temp(0.0)
    , core_temp()
    , cpu_model_name()
    , user_name()
    , linux_version()  {
    }
  syst_msgs_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , device_name(_alloc)
    , partitions(_alloc)
    , system_size(_alloc)
    , cpu_processor(0)
    , free_space(_alloc)
    , ram_size(0.0)
    , used_ram(0.0)
    , available_ram(0.0)
    , frequency(_alloc)
    , cpu_temp(0.0)
    , core_temp(_alloc)
    , cpu_model_name(_alloc)
    , user_name(_alloc)
    , linux_version(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _device_name_type;
  _device_name_type device_name;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _partitions_type;
  _partitions_type partitions;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _system_size_type;
  _system_size_type system_size;

   typedef uint32_t _cpu_processor_type;
  _cpu_processor_type cpu_processor;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _free_space_type;
  _free_space_type free_space;

   typedef double _ram_size_type;
  _ram_size_type ram_size;

   typedef double _used_ram_type;
  _used_ram_type used_ram;

   typedef double _available_ram_type;
  _available_ram_type available_ram;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _frequency_type;
  _frequency_type frequency;

   typedef double _cpu_temp_type;
  _cpu_temp_type cpu_temp;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _core_temp_type;
  _core_temp_type core_temp;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cpu_model_name_type;
  _cpu_model_name_type cpu_model_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _user_name_type;
  _user_name_type user_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _linux_version_type;
  _linux_version_type linux_version;





  typedef boost::shared_ptr< ::laptop_state::syst_msgs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laptop_state::syst_msgs_<ContainerAllocator> const> ConstPtr;

}; // struct syst_msgs_

typedef ::laptop_state::syst_msgs_<std::allocator<void> > syst_msgs;

typedef boost::shared_ptr< ::laptop_state::syst_msgs > syst_msgsPtr;
typedef boost::shared_ptr< ::laptop_state::syst_msgs const> syst_msgsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laptop_state::syst_msgs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laptop_state::syst_msgs_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::laptop_state::syst_msgs_<ContainerAllocator1> & lhs, const ::laptop_state::syst_msgs_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.device_name == rhs.device_name &&
    lhs.partitions == rhs.partitions &&
    lhs.system_size == rhs.system_size &&
    lhs.cpu_processor == rhs.cpu_processor &&
    lhs.free_space == rhs.free_space &&
    lhs.ram_size == rhs.ram_size &&
    lhs.used_ram == rhs.used_ram &&
    lhs.available_ram == rhs.available_ram &&
    lhs.frequency == rhs.frequency &&
    lhs.cpu_temp == rhs.cpu_temp &&
    lhs.core_temp == rhs.core_temp &&
    lhs.cpu_model_name == rhs.cpu_model_name &&
    lhs.user_name == rhs.user_name &&
    lhs.linux_version == rhs.linux_version;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::laptop_state::syst_msgs_<ContainerAllocator1> & lhs, const ::laptop_state::syst_msgs_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace laptop_state

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::laptop_state::syst_msgs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laptop_state::syst_msgs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laptop_state::syst_msgs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laptop_state::syst_msgs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laptop_state::syst_msgs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laptop_state::syst_msgs_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laptop_state::syst_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1fb59ff803a9d3de0eb752fb88926c23";
  }

  static const char* value(const ::laptop_state::syst_msgs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1fb59ff803a9d3deULL;
  static const uint64_t static_value2 = 0x0eb752fb88926c23ULL;
};

template<class ContainerAllocator>
struct DataType< ::laptop_state::syst_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laptop_state/syst_msgs";
  }

  static const char* value(const ::laptop_state::syst_msgs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laptop_state::syst_msgs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string device_name\n"
"float32[] partitions\n"
"float32[] system_size\n"
"uint32 cpu_processor\n"
"float32[] free_space\n"
"float64 ram_size\n"
"float64 used_ram\n"
"float64 available_ram\n"
"float32[] frequency\n"
"float64 cpu_temp\n"
"float32[] core_temp\n"
"string cpu_model_name\n"
"string user_name\n"
"string linux_version\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::laptop_state::syst_msgs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laptop_state::syst_msgs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.device_name);
      stream.next(m.partitions);
      stream.next(m.system_size);
      stream.next(m.cpu_processor);
      stream.next(m.free_space);
      stream.next(m.ram_size);
      stream.next(m.used_ram);
      stream.next(m.available_ram);
      stream.next(m.frequency);
      stream.next(m.cpu_temp);
      stream.next(m.core_temp);
      stream.next(m.cpu_model_name);
      stream.next(m.user_name);
      stream.next(m.linux_version);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct syst_msgs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laptop_state::syst_msgs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laptop_state::syst_msgs_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "device_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.device_name);
    s << indent << "partitions[]" << std::endl;
    for (size_t i = 0; i < v.partitions.size(); ++i)
    {
      s << indent << "  partitions[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.partitions[i]);
    }
    s << indent << "system_size[]" << std::endl;
    for (size_t i = 0; i < v.system_size.size(); ++i)
    {
      s << indent << "  system_size[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.system_size[i]);
    }
    s << indent << "cpu_processor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cpu_processor);
    s << indent << "free_space[]" << std::endl;
    for (size_t i = 0; i < v.free_space.size(); ++i)
    {
      s << indent << "  free_space[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.free_space[i]);
    }
    s << indent << "ram_size: ";
    Printer<double>::stream(s, indent + "  ", v.ram_size);
    s << indent << "used_ram: ";
    Printer<double>::stream(s, indent + "  ", v.used_ram);
    s << indent << "available_ram: ";
    Printer<double>::stream(s, indent + "  ", v.available_ram);
    s << indent << "frequency[]" << std::endl;
    for (size_t i = 0; i < v.frequency.size(); ++i)
    {
      s << indent << "  frequency[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.frequency[i]);
    }
    s << indent << "cpu_temp: ";
    Printer<double>::stream(s, indent + "  ", v.cpu_temp);
    s << indent << "core_temp[]" << std::endl;
    for (size_t i = 0; i < v.core_temp.size(); ++i)
    {
      s << indent << "  core_temp[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.core_temp[i]);
    }
    s << indent << "cpu_model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cpu_model_name);
    s << indent << "user_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.user_name);
    s << indent << "linux_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.linux_version);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAPTOP_STATE_MESSAGE_SYST_MSGS_H
