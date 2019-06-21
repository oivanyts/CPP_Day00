//
// Created by Oleh IVANYTSKYI on 2019-06-20.
//

#ifndef VIEW_HPP
#define VIEW_HPP

#include <iostream>
#include "model.hpp"

class	View
{

public:
	View();
	View(const Model &model);
	void SetModel(const Model &model);
	void Render();
private:
	Model _model;
};


#endif //VIEW_HPP
