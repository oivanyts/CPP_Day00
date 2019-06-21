//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef MODEL_HPP
#define MODEL_HPP

#include <string>
typedef void (*DataChangeHandler)(std::string newData);

class Model
{

public:
						Model(const std::string &data);
						Model();
	std::string			Data();
	void				setData(const std::string &data);
	void 				RegisterDataChangeHandler(DataChangeHandler handler);

private:
	std::string			_data;
	DataChangeHandler	_event;

};


#endif //MODEL_HPP
