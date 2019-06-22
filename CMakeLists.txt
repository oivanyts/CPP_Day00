cmake_minimum_required(VERSION 3.14)
project(CPP_Day00)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

add_executable(CPP_Day00 MVC/main.cpp ex02/account.cpp ex02/account.hpp)
add_executable(ex00 ex00/megaphone.cpp)
add_executable(ex01
        ex01/src/main.cpp
        ex01/src/PhoneBook.cpp
        ex01/includes/PhoneBook.hpp
        ex01/includes/main.hpp
        ex01/src/Contact.cpp
        ex01/includes/Contact.hpp)
add_executable(demoMVC
        MVC/main.cpp
        MVC/view.cpp
        MVC/model.cpp
        MVC/view.hpp
        MVC/model.hpp
        MVC/controller.cpp
        MVC/controller.hpp)