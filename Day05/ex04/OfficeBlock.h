//
// Created by Oleh IVANYTSKYI on 2019-10-09.
//

#ifndef CPP_DAY00_OFFICEBLOCK_H
#define CPP_DAY00_OFFICEBLOCK_H


#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.h"

class	OfficeBlock
{

public:

	OfficeBlock(void);
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer);
	virtual ~OfficeBlock(void);

	void	setIntern(Intern &obj);
	void	setSigner(Bureaucrat &obj);
	void	setExecutor(Bureaucrat &obj);

	void	doBureaucracy(std::string form, std::string target);

	class NoInternException : public std::exception
	{
	public:

		NoInternException(void);
		NoInternException(NoInternException const &obj);
		virtual ~NoInternException(void) throw();
		NoInternException &operator=(NoInternException const &r);
		virtual const char* what() const throw();
	};

	class NoSignerException : public std::exception
	{
	public:

		NoSignerException(void);
		NoSignerException(NoSignerException const &obj);
		virtual ~NoSignerException(void) throw();
		NoSignerException &operator=(NoSignerException const &r);
		virtual const char* what() const throw();
	};

	class NoExecuterException : public std::exception
	{
	public:

		NoExecuterException(void);
		NoExecuterException(NoExecuterException const &obj);
		virtual ~NoExecuterException(void) throw();
		NoExecuterException &operator=(NoExecuterException const &r);
		virtual const char* what() const throw();
	};

	class SignerLowGradeException : public std::exception
	{
	public:

		SignerLowGradeException(void);
		SignerLowGradeException(SignerLowGradeException const &obj);
		virtual ~SignerLowGradeException(void) throw();
		SignerLowGradeException &operator=(SignerLowGradeException const &r);
		virtual const char* what() const throw();
	};

	class ExecuterLowGradeException : public std::exception
	{
	public:

		ExecuterLowGradeException(void);
		ExecuterLowGradeException(ExecuterLowGradeException const &obj);
		virtual ~ExecuterLowGradeException(void) throw();
		ExecuterLowGradeException &operator=(ExecuterLowGradeException const &r);
		virtual const char* what() const throw();
	};

private:

	OfficeBlock(OfficeBlock &obj);
	OfficeBlock &operator=(OfficeBlock const &r);

	Intern		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executer;
};

#endif //CPP_DAY00_OFFICEBLOCK_H
