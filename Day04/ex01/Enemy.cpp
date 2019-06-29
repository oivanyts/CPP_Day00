//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(Enemy const &src) {
	*this = src;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
	if (this != &rhs) // add coping inside if 
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return *this;
}

Enemy::~Enemy() {}

int Enemy::getHp() const {
	return _hp;
}

const std::string &Enemy::getType() const {
	return _type;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {

}

void Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		return;
	if (dmg > _hp)
		_hp = 0;
	else
		_hp -= dmg;
}
