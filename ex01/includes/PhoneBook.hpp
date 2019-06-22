//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>


class PhoneBook {

public:

	PhoneBook();

	void 		mAdd();
	void 		mSearch();
	void		mOutput( bool allBook, u_int8_t n );
	void 		mOutputOne( u_int8_t n, u_int8_t nFields );
	void 		manageBook();
	void 		mHeader( u_int8_t nFields );


private:
	u_int8_t	capacity;
	Contact		all[8];
	std::string	fieldNames[12];
};


#endif
