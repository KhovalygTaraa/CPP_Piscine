/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:39:17 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 20:26:55 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade): name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	this->isSigned = false;
	if (signGrade > 150)
		throw Form::GradeTooLowException(name);
	else if (signGrade < 1)
		throw Form::GradeTooHighException(name);
	else if (executeGrade > 150)
		throw Form::GradeTooLowException(name);
	else if (executeGrade < 1)
		throw Form::GradeTooHighException(name);
}

Form::Form(Form const &f): name(f.getName()), signGrade(f.getSignGrade()), executeGrade(f.getExecuteGrade())
{
	this->isSigned = false;
}

Form::~Form()
{
}

Form &Form::operator=(Form const &f)
{
	if (this == &f)
		return(*this);
	this->isSigned = f.getIsSigned();
	return (*this);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > signGrade)
	{
		std::cout << b.getName() << " cannot sign " << getName() << " because bureaucrat grade lower than required!" << std::endl;
		throw Form::GradeTooLowException(b.getName());
	}
	else if (isSigned == true)
		throw Form::SignedException(b.getName(), getName());
	else if (isSigned == false)
	{
		std::cout << this->name << " succesfully signed by " << b.getName() << std::endl;
		isSigned = true;
	}
}

std::ostream &operator<<(std::ostream &stream, Form const &f)
{
	std::string str;

	if (f.getIsSigned() == true)
		str = "signed";
	else if (f.getIsSigned() == false)
		str = "not signed";
	stream << "Form " << f.getName() << " is " << str << ". Sign grade is equal to " << f.getSignGrade() << ". Execute grade is equal to " << f.getExecuteGrade() << std::endl;
	return(stream);
}

std::string const Form::getName(void) const
{
	return (this->name);
}

bool Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

void Form::setIsSigned(bool isSigned)
{
	this->isSigned = isSigned;
}

/* ********************* */
/* Exception's functions */
/* ********************* */

/* GradeTooHighException */
const char *Form::GradeTooHighException::what() const throw()
{
	std::string str = getName();
	str.append(" has too high grade, so sad");
	return (str.c_str());
}

std::string const Form::GradeTooHighException::getName(void) const
{
	return (this->name);
}

Form::GradeTooHighException::GradeTooHighException(std::string name)
{
	this->name = name;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

/* GradeTooLowException */

const char *Form::GradeTooLowException::what() const throw()
{
	std::string str = name;
	str.append(" has too low grade, so sad");
	return (str.c_str());
}

std::string const Form::GradeTooLowException::getName(void) const
{
	return (this->name);
}

Form::GradeTooLowException::GradeTooLowException(std::string name)
{
	this->name = name;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

/* SignedException*/

Form::SignedException::SignedException(std::string name, std::string formName): name(name), formName(formName)
{
}

Form::SignedException::~SignedException() throw()
{
}

const char *Form::SignedException::what() const throw()
{
	std::string str;

	str = getName();
	str.append(" cannot sign ");
	str.append(getFormName());
	str.append(" because form already signed");
	return (str.c_str());
}

std::string const Form::SignedException::getName(void) const
{
	return (this->name);
}

std::string const Form::SignedException::getFormName(void) const
{
	return (this->formName);
}
