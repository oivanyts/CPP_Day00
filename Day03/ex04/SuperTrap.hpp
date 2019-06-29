//
// Created by Oleh IVANYTSKYI on 2019-06-28.
//

#ifndef CPP_DAY00_SUPERTRAP_HPP
#define CPP_DAY00_SUPERTRAP_HPP


#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

public:

	SuperTrap();

	SuperTrap(SuperTrap const &src);

	~SuperTrap();

	SuperTrap &operator=(SuperTrap const &rhs);

private:

};


#endif //CPP_DAY00_SUPERTRAP_HPP
