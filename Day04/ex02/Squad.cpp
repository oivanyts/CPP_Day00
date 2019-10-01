//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include <iostream>
#include "Squad.hpp"

Squad::Squad(void) : _unitCount(0), _firstShip(nullptr) {
	return ;
}

Squad::Squad(Squad const &src){
	*this = src;
}

Squad &Squad::operator=(Squad const &rhs) {

	if (this != &rhs)
	{
		this->_unitCount = 0;
		for (int j = 0; j < rhs._unitCount; j++) {
			this->push(rhs.getUnit(j));
		}
	}
	return *this;
}

Squad::~Squad() {
	tUnit	*tmp;
	tUnit	*tmp1;

	tmp = _firstShip;
	for (int j = 0; j < _unitCount; j++)
	{
		delete(getUnit(j));
		tmp1 = tmp->next;
		delete(tmp);
		tmp = tmp1;
	}


}

int Squad::getCount() const {
	return (this->_unitCount);
}

ISpaceMarine *Squad::getUnit(int i) const {
	tUnit	*tmp;

	tmp = _firstShip;
	if (i > _unitCount)
		return (nullptr);
	for (int j = 0; j < i; j++) {
		if (tmp)
			tmp = tmp->next;
		else
			return (nullptr);
	}
	return (tmp->unit);
}

int Squad::push(ISpaceMarine *newUnit) {

	tUnit	*tmp;
	if (!newUnit)
		return (_unitCount);
	if (!_unitCount)
	{
		_firstShip = new tUnit;
		_firstShip->unit = newUnit->clone();
		_firstShip->next = nullptr;
		_unitCount++;
		return (1);
	}
	tmp = this->_firstShip;
	while (tmp)
	{
		if (!tmp->next)
			break ;
		if (newUnit == tmp->unit) {
			return (_unitCount);
		}
		tmp = tmp->next;
	}
	tmp->next = new tUnit;
	tmp->next->unit = newUnit->clone();
	tmp->next->next = nullptr;
	_unitCount++;
	return (_unitCount);
}
