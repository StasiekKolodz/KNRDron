// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__msg__Detection __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->bounding_box.begin(), this->bounding_box.end(), 0l);
      this->color_name = "";
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->gps_position.begin(), this->gps_position.end(), 0l);
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounding_box(_alloc),
    color_name(_alloc),
    gps_position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->bounding_box.begin(), this->bounding_box.end(), 0l);
      this->color_name = "";
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->gps_position.begin(), this->gps_position.end(), 0l);
    }
  }

  // field types and members
  using _bounding_box_type =
    std::array<int32_t, 3>;
  _bounding_box_type bounding_box;
  using _color_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_name_type color_name;
  using _gps_position_type =
    std::array<int32_t, 2>;
  _gps_position_type gps_position;

  // setters for named parameter idiom
  Type & set__bounding_box(
    const std::array<int32_t, 3> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__color_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color_name = _arg;
    return *this;
  }
  Type & set__gps_position(
    const std::array<int32_t, 2> & _arg)
  {
    this->gps_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__msg__Detection
    std::shared_ptr<drone_interfaces::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__msg__Detection
    std::shared_ptr<drone_interfaces::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->color_name != other.color_name) {
      return false;
    }
    if (this->gps_position != other.gps_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  drone_interfaces::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
