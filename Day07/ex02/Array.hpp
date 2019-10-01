//
// Created by Oleh IVANYTSKYI on 2019-07-05.
//

#ifndef CPP_DAY00_ARRAY_HPP
#define CPP_DAY00_ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

public:

	Array() : _size(0), _data(nullptr) {};
	Array(unsigned int n) : _size(n){
		_data = new T[_size];
	}
	Array(Array const &src) {
		this = src;
	};
	~Array() {
		delete []_data;
	};

	Array &operator=(Array const &rhs) {
		if (this != &rhs)
		{
			delete[] _data;
			this->_size = rhs._size;
			this->_data = new Array(_size);
			for (int i = 0; i < _size; i++) {
				this[i] = rhs[i];
			}
		}
		return *this;
	};

	const T &operator[](unsigned int n) const {
		if ( n >= _size )
		{
			throw (std::out_of_range("Out of array size"));
		}
		return (_data[n]);
	};


	T &operator[](unsigned int n){
		if ( n >= _size )
		{
			throw (std::out_of_range("Out of array size"));
		}
		return (_data[n]);
	};

	unsigned int size() const {
		return _size;
	}


private:
	unsigned int _size;
	T	*_data;
};

template <typename T>
std::ostream &operator<<(std::ostream &os,Array<T> const &rhs) {
	os << "{ ";
	for (unsigned int i = 0; i < rhs.size(); i++) {
		os << rhs[i];
		if (i != rhs.size() - 1)
			os << ", ";
	}
	os << " }";
	return (os);
}


#endif //CPP_DAY00_ARRAY_HPP
