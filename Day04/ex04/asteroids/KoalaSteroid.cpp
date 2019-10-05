//
// Created by Oleh IVANYTSKYI on 2019-10-05.
//

#include "KoalaSteroid.h"

BocalSteroid::BocalSteroid()  : name_("BocalSteroid")
{

}

BocalSteroid::~BocalSteroid()
{

}

BocalSteroid::BocalSteroid(BocalSteroid const &src)
{
	*this = src;
}

BocalSteroid &BocalSteroid::operator=(BocalSteroid const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

std::string BocalSteroid::getName() const
{
	return name_;
}

std::string BocalSteroid::beMined(DeepCoreMiner *) const
{
	return "Zazium";
}

std::string BocalSteroid::beMined(StripMiner *) const
{
	return "Krpite";
}
