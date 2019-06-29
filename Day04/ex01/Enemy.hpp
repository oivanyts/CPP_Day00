//
// Created by Oleh IVANYTSKYI on 2019-06-29.
//

#ifndef CPP_DAY00_ENEMY_HPP
#define CPP_DAY00_ENEMY_HPP


#include <string>

class Enemy {

public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &src);
	virtual ~Enemy();

	Enemy &operator=(Enemy const &rhs);

	int getHp() const;
	const std::string &getType() const;

	virtual void takeDamage(int);

protected:

	Enemy();

	int _hp;
	std::string _type;

};
std::ostream &operator<<(std::ostream &os,Enemy const &rhs);

#endif //CPP_DAY00_ENEMY_HPP
