//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {

private:

	int _value;
	static const int _bits = 8;
public:

	Fixed();

	Fixed(Fixed const &src);

	~Fixed();

	Fixed &operator=(Fixed const &rhs);

	int getRawBits(void) const;

	int getValue() const;

	void setRawBits(int const raw);

};


#endif //FIXED_HPP
