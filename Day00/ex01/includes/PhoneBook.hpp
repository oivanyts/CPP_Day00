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

	void 		manageBook();

private:

	void 		mAdd();
	void 		mSearch() const;
	void		mOutput( bool allBook, u_int8_t n ) const;
	void 		mHeader( u_int8_t nFields ) const;
	void		mOutputOne( u_int8_t n, u_int8_t nFields, bool outputShort )
					const;
	u_int8_t	capacity;
	Contact		all[8];
	std::string	fieldNames[12];

};


#endif
