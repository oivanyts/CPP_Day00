//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include "AsteroKreog.h"

AsteroBocal::AsteroBocal() : name_("AsteroBocal")
{
}

AsteroBocal::~AsteroBocal()
{
}

AsteroBocal::AsteroBocal(AsteroBocal const &src)
{
	*this = src;
}

AsteroBocal &AsteroBocal::operator=(AsteroBocal const &rhs)
{
	if (&rhs != this)
	{
		name_ = rhs.name_;
	}
	return *this;
}

std::string AsteroBocal::getName() const
{
	return name_;
}

std::string AsteroBocal::beMined(DeepCoreMiner *) const
{
	return "Thorite";
}

std::string AsteroBocal::beMined(StripMiner *) const
{
	return "Flavium";
}
