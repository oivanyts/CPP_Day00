//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#include "view.hpp"

View::View( const Model &model )
{
	this->_model = model;
	return ;
}

View::View()
{
	return ;
}

void View::Render()
{
	std::cout << "Model Data = " << _model.Data() << std::endl;
}