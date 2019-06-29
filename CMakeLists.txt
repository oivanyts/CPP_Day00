cmake_minimum_required(VERSION 3.14)
project(CPP_Day00)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_CXX_STANDARD 98)

#add_executable(CPP_Day00 MVC/main.cpp Day00/ex02/Account.class.cpp)
add_executable(d00e00
        Day00/ex00/megaphone.cpp Day03/ex00/main.cpp )
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
        Day01/ex00/Pony.hpp
        Day01/ex00/Pony.cpp
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
        Day02/ex00/Fixed.hpp Day03/ex00/FragTrap.cpp Day03/ex00/FragTrap.hpp)

add_executable(d02e01
        Day02/ex01/main.cpp
        Day02/ex01/Fixed.cpp
        Day02/ex01/Fixed.hpp)

add_executable(d02e02
        Day02/ex02/main.cpp
        Day02/ex02/Fixed.cpp
        Day02/ex02/Fixed.hpp)

add_executable(d02e04
        Day02/ex04/main.cpp
        Day02/ex04/Fixed.cpp
        Day02/ex04/Fixed.hpp)

add_executable(d03e00
        Day03/ex00/FragTrap.cpp
        Day03/ex00/FragTrap.hpp
        Day03/ex00/main.cpp)

add_executable(d03e01
        Day03/ex01/FragTrap.cpp
        Day03/ex01/FragTrap.hpp
        Day03/ex01/main.cpp Day03/ex01/ScavTrap.cpp Day03/ex01/ScavTrap.hpp)

add_executable(d03e02
        Day03/ex02/ClapTrap.cpp
        Day03/ex02/ClapTrap.hpp
        Day03/ex02/FragTrap.hpp
        Day03/ex02/FragTrap.cpp
        Day03/ex02/ScavTrap.cpp
        Day03/ex02/ScavTrap.hpp
        Day03/ex02/main.cpp)

add_executable(d03e03
        Day03/ex03/ClapTrap.cpp
        Day03/ex03/ClapTrap.hpp
        Day03/ex03/FragTrap.hpp
        Day03/ex03/FragTrap.cpp
        Day03/ex03/ScavTrap.cpp
        Day03/ex03/ScavTrap.hpp
        Day03/ex03/main.cpp Day03/ex03/NinjaTrap.cpp Day03/ex03/NinjaTrap.hpp)
add_executable(d03e04
        Day03/ex04/ClapTrap.hpp
        Day03/ex04/ClapTrap.cpp
        Day03/ex04/ScavTrap.hpp
        Day03/ex04/ScavTrap.cpp
        Day03/ex04/FragTrap.cpp
        Day03/ex04/FragTrap.hpp
        Day03/ex04/NinjaTrap.cpp
        Day03/ex04/NinjaTrap.hpp
        Day03/ex04/SuperTrap.cpp
        Day03/ex04/SuperTrap.hpp
        Day03/ex04/main.cpp)


add_executable(d04e00
        Day04/ex00/Sorcerer.cpp
        Day04/ex00/Sorcerer.hpp
        Day04/ex00/Victim.cpp
        Day04/ex00/Victim.hpp
        Day04/ex00/Peon.cpp
        Day04/ex00/Peon.hpp
        Day04/ex00/main.cpp)

add_executable(d04e01
        Day04/ex01/AWeapon.cpp
        Day04/ex01/AWeapon.hpp
        Day04/ex01/PlasmaRifle.cpp
        Day04/ex01/PlasmaRifle.hpp
        Day04/ex01/PowerFist.cpp
        Day04/ex01/PowerFist.hpp
        Day04/ex01/Enemy.cpp
        Day04/ex01/Enemy.hpp
        Day04/ex01/SuperMutant.cpp
        Day04/ex01/SuperMutant.hpp
        Day04/ex01/RadScorpion.cpp
        Day04/ex01/RadScorpion.hpp
        Day04/ex01/main.cpp
        Day04/ex01/Character.cpp
        Day04/ex01/Character.hpp)
add_executable(d04e02
        Day04/ex02/Squad.cpp
        Day04/ex02/Squad.hpp
        Day04/ex02/TacticalMarine.cpp
        Day04/ex02/TacticalMarine.hpp
        Day04/ex02/AssaultTerminator.cpp
        Day04/ex02/AssaultTerminator.hpp
        Day04/ex02/ISpaceMarine.hpp
        Day04/ex02/ISquad.hpp
        Day04/ex02/main.cpp)

