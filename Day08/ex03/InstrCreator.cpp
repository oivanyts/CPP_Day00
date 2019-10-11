//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#include "InstrCreator.h"

InstrCreator::InstrCreator()
{

}

InstrCreator::~InstrCreator()
{

}

InstrCreator::InstrCreator(InstrCreator const &src)
{
	*this = src;
}

InstrCreator &InstrCreator::operator=(InstrCreator const &rhs)
{
	if (&rhs != this)
	{}
	return *this;
}

AInstructions *InstrCreator::createInst(char c)
{
	switch :
	return ;
}

AInstructions *InstrCreator::createMoveR(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createMoveL(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createIncr(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createDecr(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createOutput(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createInput(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createWhile(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createWhileStart(char c)
{
	return NULL;
}

AInstructions *InstrCreator::createWhileEnd(char c)
{
	return NULL;
}
