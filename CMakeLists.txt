cmake_minimum_required(VERSION 3.14)
project(CPP_Day00)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

#add_executable(CPP_Day00 MVC/main.cpp Day00/ex02/Account.class.cpp)
add_executable(d00e00
        Day00/ex00/megaphone.cpp)
add_executable(d00e01
        Day00/ex01/src/main.cpp
        Day00/ex01/src/PhoneBook.cpp
        Day00/ex01/includes/PhoneBook.hpp
        Day00/ex01/includes/main.hpp
        Day00/ex01/src/Contact.cpp
        Day00/ex01/includes/Contact.hpp)
add_executable(d00e02
        Day00/ex02/Account.class.cpp
        Day00/ex02/Account.class.hpp
        Day00/ex02/tests.cpp)
add_executable(d01e00
        Day01/ex00/pony.hpp
        Day01/ex00/pony.cpp
        Day01/ex00/main.cpp)
add_executable(d01e01
        Day01/ex01/ex01.cpp
        Day01/ex01/main.cpp)
add_executable(d01e02
        Day01/ex02/Zombie.cpp
        Day01/ex02/Zombie.hpp
        Day01/ex02/ZombieEvent.cpp
        Day01/ex02/ZombieEvent.hpp
        Day01/ex02/main.cpp)
add_executable(d01e03
        Day01/ex03/ZombieHorde.cpp
        Day01/ex03/ZombieHorde.hpp
        Day01/ex03/Zombie.cpp
        Day01/ex03/Zombie.hpp
        Day01/ex03/main.cpp)

add_executable(d01e04
        Day01/ex04/ex04.cpp)

add_executable(d01e05
        Day01/ex05/Brain.cpp
        Day01/ex05/Brain.hpp
        Day01/ex05/Human.cpp
        Day01/ex05/Human.hpp
        Day01/ex05/main.cpp)

add_executable(d01e06
        Day01/ex06/Weapon.cpp
        Day01/ex06/Weapon.hpp
        Day01/ex06/HumanA.cpp
        Day01/ex06/HumanA.hpp
        Day01/ex06/HumanB.cpp
        Day01/ex06/HumanB.hpp
        Day01/ex06/main.cpp)

add_executable(d01e07 Day01/ex07/main.cpp)

add_executable(d01e08
        Day01/ex08/Human.cpp
        Day01/ex08/Human.hpp
        Day01/ex08/main.cpp)

add_executable(d01e09
        Day01/ex09/Logger.cpp
        Day01/ex09/Logger.hpp
        Day01/ex09/main.cpp)

add_executable(d01e10
        Day01/ex10/main.cpp)
add_executable(d02e00
        Day02/ex00/main.cpp
        Day02/ex00/Fixed.cpp
        Day02/ex00/Fixed.hpp)

add_executable(d02e01
        Day02/ex01/main.cpp
        Day02/ex01/Fixed.cpp
        Day02/ex01/Fixed.hpp)

