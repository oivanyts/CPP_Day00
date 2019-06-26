//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#include <iostream>
#include "Logger.hpp"
#include <ctime>
#include <time.h>
#include <sstream>
#include <fstream>

void Logger::logToConsole( std::string const &input )
{
	std::cout << this->makeLogEntry(input) << __func__ << std::endl;
}

void Logger::logToFile( std::string const &input )
{
	std::ofstream	logFile("logfile", std::ios::app);
	if (logFile.bad() ||  logFile.fail() || !logFile.is_open())
	{
		std::cout << "ERROR: logfile fails" << std::endl;
		return ;
	}
	logFile << this->makeLogEntry(input) << __func__<< std::endl;
	std::cout << "file been writen";
}

std::string Logger::prepareTimeStamp()
{
	std::stringstream tt;
	struct tm * timeinfo;
	time_t rawtime;
	char ret[99];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(ret, sizeof(ret), "%Y%m%d_%H%M%S", timeinfo);
	std::string tstamp(ret);
	return ( "[" + tstamp + "] ");
}

std::string Logger::makeLogEntry( std::string message )
{
	std::string timestamp = prepareTimeStamp();

	return timestamp + message;
}

void Logger::log( std::string const &dest, std::string const &message )
{
	if (dest == "toConsole")
	{
		(this->*func[0])(message);
	}
	else if (dest == "toFile")
	{
		(this->*func[1])(message);
	}
}

Logger::Logger()
{
	func[0] = &Logger::logToConsole;
	func[1] = &Logger::logToFile;
}

Logger::~Logger()
{

}
