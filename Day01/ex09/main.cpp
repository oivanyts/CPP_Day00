//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include "Logger.hpp"

int main()
{
	Logger	general;

	general.log("toConsole", "KEKEKE  ");
	general.log("toFile", "BYBYBY  ");
	return 0;
}