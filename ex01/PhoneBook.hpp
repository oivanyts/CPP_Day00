//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook();

	void 		mAdd( void);
	void 		mSearch( void);
	void		mExit( void);
	void		mOutput(bool allBook, u_int8_t n);
	void mOutputOne( u_int8_t n, u_int8_t nFields );
	void 		collectData();
	void		mHeader();
	u_int8_t	getCapacity() const;
	void		setCapacity( u_int8_t size );

private:
	u_int8_t	capacity;
	Contact		all[8];
	std::string	fieldNames[11];
};


#endif
