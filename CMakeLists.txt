cmake_minimum_required(VERSION 3.14)
project(CPP_Day00)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wpedantic")
set(CMAKE_CXX_STANDARD 98)

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
        Day03/ex03/main.cpp
        Day03/ex03/NinjaTrap.cpp
        Day03/ex03/NinjaTrap.hpp)

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
add_executable(d04e03
        Day04/ex03/AMateria.cpp
        Day04/ex03/AMateria.h
        Day04/ex03/Ice.cpp
        Day04/ex03/Ice.h
        Day04/ex03/Cure.cpp
        Day04/ex03/Cure.h
        Day04/ex03/Character.cpp
        Day04/ex03/Character.h
        Day04/ex03/MateriaSource.cpp
        Day04/ex03/MateriaSource.h
        Day04/ex03/ICharacter.h
        Day04/ex03/IMateriaSource.h
        Day04/ex03/main.cpp)

add_executable(d04e04
        Day04/ex04/lasers/DeepCoreMiner.cpp
        Day04/ex04/lasers/DeepCoreMiner.h
        Day04/ex04/lasers/StripMiner.cpp
        Day04/ex04/lasers/StripMiner.h
        Day04/ex04/asteroids/AsteroKreog.cpp
        Day04/ex04/asteroids/AsteroKreog.h
        Day04/ex04/asteroids/KoalaSteroid.cpp
        Day04/ex04/asteroids/KoalaSteroid.h
        Day04/ex04/MiningBarge.cpp
        Day04/ex04/MiningBarge.h
        Day04/ex04/IAsteroid.h
        Day04/ex04/IMiningLaser.h
        Day04/ex04/main.cpp)
add_executable(d05e00
        Day05/ex00/Bureaucrat.cpp Day05/ex00/Bureaucrat.hpp Day05/ex00/main.cpp)

add_executable(d05e01
        Day05/ex01/Bureaucrat.cpp
        Day05/ex01/Bureaucrat.hpp
        Day05/ex01/Form.cpp
        Day05/ex01/Form.hpp
        Day05/ex01/main.cpp)

add_executable(d05e02
        Day05/ex02/Bureaucrat.cpp
        Day05/ex02/Bureaucrat.hpp
        Day05/ex02/Form.cpp
        Day05/ex02/Form.hpp
        Day05/ex02/main.cpp
        Day05/ex02/ShrubberyCreationForm.cpp
        Day05/ex02/ShrubberyCreationForm.h
        Day05/ex02/PresidentialPardonForm.cpp
        Day05/ex02/PresidentialPardonForm.h
        Day05/ex02/RobotomyRequestForm.cpp
        Day05/ex02/RobotomyRequestForm.h)


add_executable(d05e03
        Day05/ex03/Bureaucrat.cpp
        Day05/ex03/Bureaucrat.hpp
        Day05/ex03/Form.cpp
        Day05/ex03/Form.hpp
        Day05/ex03/main.cpp
        Day05/ex03/ShrubberyCreationForm.cpp
        Day05/ex03/ShrubberyCreationForm.h
        Day05/ex03/PresidentialPardonForm.cpp
        Day05/ex03/PresidentialPardonForm.h
        Day05/ex03/RobotomyRequestForm.cpp
        Day05/ex03/RobotomyRequestForm.h Day05/ex03/Intern.cpp Day05/ex03/Intern.h)

add_executable(d05e04
        Day05/ex04/Bureaucrat.cpp
        Day05/ex04/Bureaucrat.hpp
        Day05/ex04/Form.cpp
        Day05/ex04/Form.hpp
        Day05/ex04/main.cpp
        Day05/ex04/ShrubberyCreationForm.cpp
        Day05/ex04/ShrubberyCreationForm.h
        Day05/ex04/PresidentialPardonForm.cpp
        Day05/ex04/PresidentialPardonForm.h
        Day05/ex04/RobotomyRequestForm.cpp
        Day05/ex04/RobotomyRequestForm.h
        Day05/ex04/Intern.cpp
        Day05/ex04/Intern.h Day05/ex04/OfficeBlock.cpp Day05/ex04/OfficeBlock.h)



add_executable(d06e00
        Day06/ex00/main.cpp Day06/ex00/main.cpp Day06/ex00/Convertor.cpp Day06/ex00/Convertor.hpp)

add_executable(d06e01 Day06/ex01/main.cpp)

add_executable(d06e02 Day06/ex02/main.cpp Day06/ex02/Base.cpp Day06/ex02/Base.hpp)

add_executable(d07e00
        Day07/ex00/main.cpp)

add_executable(d07e01 Day07/ex01/iter.cpp)


add_executable(d07e02 Day07/ex02/Array.hpp Day07/ex02/main.cpp)


add_executable(d08e00
        Day08/ex00/easyfind.hpp
        Day08/ex00/main.cpp)

add_executable(d08e01
        Day08/ex01/main.cpp Day08/ex01/Span.cpp Day08/ex01/Span.h)

add_executable(d08e02
        Day08/ex02/main.cpp Day08/ex02/MutantStack.h)

add_executable(d08e03
        Day08/ex03/main.cpp Day08/ex03/AInstructions.cpp Day08/ex03/AInstructions.h Day08/ex03/InstrCreator.cpp Day08/ex03/InstrCreator.h)







