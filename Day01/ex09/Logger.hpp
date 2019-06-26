//
// Created by Oleh IVANYTSKYI on 2019-06-26.
//

#ifndef LOGGER_HPP
#define LOGGER_HPP


#include <string>

class Logger
{

private:

	void		logToConsole(std::string const &input);
	void		logToFile(std::string const &input);
	std::string	makeLogEntry(std::string message);
	typedef void (Logger::*FunctionCallback)( std::string const &input );
	FunctionCallback func[2];

	std::string prepareTimeStamp();

public:
	Logger();

	~Logger();
	void		log(std::string const & dest, std::string const & message);
};


#endif //LOGGER_HPP
