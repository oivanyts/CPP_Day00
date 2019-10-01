//
// Created by Oleh IVANYTSKYI on 2019-07-04.
//

#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>


static const char alphanum[] =
		{
				"0123456789"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				"abcdefghijklmnopqrstuvwxyz"
		};

struct Data {
	std::string		s1;
	int				n;
	std::string 	s2;
};

struct DataRaw {
	char		s1[8];
	int				n;
	char		s2[8];
};

void * serialize(void )
{
	DataRaw	*ret = new DataRaw;

	ret->n = rand();
	for (uint i = 0; i < 8; i++) {
		ret->s1[i] = alphanum[static_cast<uint>(rand()) % (sizeof(alphanum) - 1)];
		ret->s2[i] = alphanum[static_cast<uint>(rand()) % (sizeof(alphanum) - 1)];
	}
	return (reinterpret_cast<void *>(ret));
}

Data * deserialize( void * raw )
{
	Data	*ret = new Data;
	DataRaw	*tmp = reinterpret_cast<DataRaw *>(raw);
	ret->s1 = tmp->s1;
	ret->s2 = tmp->s2;
	ret->n = tmp->n;
	return	(ret);
}

int main()
{
	srand(static_cast<uint>(time(nullptr)) );

	void *test = serialize();
	Data *test1 = deserialize(test);
	char *test2 = reinterpret_cast<char *>(test);


	for (int i = 0; i < 8; i++) {
		std::cout << test2[i];
	}
	std::string out = test1->s1.substr(0, 8);
	std::cout << " = " << out << " - first string" << std::endl;
	for (int i = 12; i < 20; i++) {
		std::cout << test2[i];
	}
	out = test1->s2.substr(0, 8);
	std::cout << " = " << out << " - second string"  << std::endl;

	std::cout << " RAW >> {" << test2 << "}" << std::endl;
	delete  reinterpret_cast<DataRaw *>(test);
	delete  (test1);

	return (0);

}
