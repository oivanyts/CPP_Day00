//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP


#include "model.hpp"
#include "view.hpp"

// Controller combines Model and View
class Controller {

public:
	Controller(const Model &model, const View &view);
	void SetModel(const Model &model);
	void SetView(const View &view);

	// when application starts
	void OnLoad();

private:
	Model _model;
	View _view;
};


#endif //CONTROLLER_HPP
