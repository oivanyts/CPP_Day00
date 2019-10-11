//
// Created by Oleh IVANYTSKYI on 2019-10-11.
//

#ifndef CPP_DAY00_AINSTRUCTIONS_H
#define CPP_DAY00_AINSTRUCTIONS_H


class AInstructions
{

public:

	AInstructions();
	AInstructions(AInstructions const &src);
	AInstructions &operator=(AInstructions const &rhs);

	virtual	~AInstructions();
	virtual void	execute() const = 0;
private:
};


#endif //CPP_DAY00_AINSTRUCTIONS_H
