//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//
#include "model.hpp"

Model::Model()
{
	this->_data = "";
	this->_event = nullptr;
	return ;
}

Model::Model( const std::string &data )
{
	this->_event = nullptr;
	this->setData(data);
	return ;
}

void	Model::setData( const std::string &data )
{
	this->_data = data;
	if (this->_event != nullptr)
	{
		this->_event(data);
	}
}

std::string Model::Data()
{
	return this->_data;
}

void	Model::RegisterDataChangeHandler(DataChangeHandler handler)
{
	this->_event = handler;
}