//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_PLASMARIFLE_HPP
#define CPP_DAY00_PLASMARIFLE_HPP


#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
	~PlasmaRifle();
	void attack() const;

	PlasmaRifle &operator=(PlasmaRifle const &rhs);
	PlasmaRifle	 *cloneWeapon();

private:

};


#endif //CPP_DAY00_PLASMARIFLE_HPP
