//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_POWERFIST_HPP
#define CPP_DAY00_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist();

	PowerFist(PowerFist const &src);

	~PowerFist();
	void attack() const;

	PowerFist &operator=(PowerFist const &rhs);

	PowerFist	 *cloneWeapon();

private:

};


#endif //CPP_DAY00_POWERFIST_HPP
