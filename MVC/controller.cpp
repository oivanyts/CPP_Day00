//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#include "controller.hpp"

Controller::Controller( const Model &model, const View &view )
{
	this->SetModel(model);
	this->SetView(view);
}

void Controller::SetModel(const Model &model) {
	this->_model = model;
}

void Controller::SetView( const View &view )
{
	this->_view = view;
}

void Controller::OnLoad()
{
	this->_view.Render();
}
//
//void Controller::fAdd()
//{
//
//}