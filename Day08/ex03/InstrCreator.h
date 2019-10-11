//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#ifndef CPP_DAY00_INSTRCREATOR_H
#define CPP_DAY00_INSTRCREATOR_H


#include "AInstructions.h"

class InstrCreator
{

	InstrCreator(InstrCreator const &src);

	InstrCreator &operator=(InstrCreator const &rhs);
public:
	InstrCreator();

	~InstrCreator();

	AInstructions	*createInst(char c);
private:
	AInstructions	*createMoveR(char c);	// >
	AInstructions	*createMoveL(char c);	// <
	AInstructions	*createIncr(char c);	// +
	AInstructions	*createDecr(char c);	// -
	AInstructions	*createOutput(char c);	// .
	AInstructions	*createInput(char c);	// ,
	AInstructions	*createWhile(char c);	// [
	AInstructions	*createWhileStart(char c);	// [
	AInstructions	*createWhileEnd(char c);	// ]


};


#endif //CPP_DAY00_INSTRCREATOR_H
