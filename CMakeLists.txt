cmake_minimum_required(VERSION 3.14)
project(CPP_Day00)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

#add_executable(CPP_Day00 MVC/main.cpp Day00/ex02/Account.class.cpp)
add_executable(ex00
        Day00/ex00/megaphone.cpp)
add_executable(ex01
        Day00/ex01/src/main.cpp
        Day00/ex01/src/PhoneBook.cpp
        Day00/ex01/includes/PhoneBook.hpp
        Day00/ex01/includes/main.hpp
        Day00/ex01/src/Contact.cpp
        Day00/ex01/includes/Contact.hpp)
add_executable(demoMVC
        MVC/main.cpp
        MVC/view.cpp
        MVC/model.cpp
        MVC/view.hpp
        MVC/model.hpp
        MVC/controller.cpp
        MVC/controller.hpp Day01/ex00/pony.cpp Day01/ex00/pony.hpp Day01/ex00/main.cpp)
add_executable(ex02
        Day00/ex02/Account.class.cpp
        Day00/ex02/Account.class.hpp
        Day00/ex02/tests.cpp)
add_executable(ex00_01
        Day01/ex00/pony.hpp
        Day01/ex00/pony.cpp
        Day01/ex00/main.cpp)