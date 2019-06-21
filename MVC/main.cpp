#include <iostream>
#include "view.hpp"
#include "model.hpp"
#include "controller.hpp"



void DataChange(std::string data)
{

	if ("EXIT" == data)
	{
		exit(1);
	}
	else if ("ADD" == data)
	{
		std::cout << "Add fn" << data << std::endl;
	}
	else if ("SEARCH" == data)
	{
		std::cout << "Search fn" << data << std::endl;
	}
	std::cout << "Data Changes: " << data << std::endl;
}

int main()
{
	std::string	command;

	Model model("START");
	View view(model);
	model.RegisterDataChangeHandler(&DataChange);
	Controller controller(model, view);
	while (1)
	{
		std::cout << "Please, enter command: ";
		std::getline (std::cin, command);
		model.setData(command); // this should trigger View to render
	}
}