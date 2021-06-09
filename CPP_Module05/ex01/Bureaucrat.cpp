/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:45:29 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 20:23:06 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw GradeTooHighException(this->name);
	else if (grade > 150)
		throw GradeTooLowException(this->name);
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b): name(b.getName())
{
	this->grade = b.getGrade();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
	if (this == &b)
		return (*this);
	this->grade = b.getGrade();
	return (*this);
}

std::string const Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	this->grade -= 1;
	if (this->grade < 1)
		throw GradeTooHighException(this->name);
}

void Bureaucrat::decrementGrade(void)
{
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException(this->name);
}

void Bureaucrat::signForm(Form &f) const
{
	if (f.getSignGrade() < grade)
	{
		std::cout << getName() << " cannot sign " << f.getName() << " because bureaucrat grade lower than required!" << std::endl;
		throw Form::GradeTooLowException(getName());
	}
	else if (f.getIsSigned() == true)
		throw Form::SignedException(getName(), f.getName());
	else if (f.getIsSigned() == false)
	{
		std::cout << f.getName() << " succesfully signed by " << getName() << std::endl;
		f.setIsSigned(true);
	}
}

std::ostream &operator<<(std::ostream &strm, Bureaucrat const &b)
{
	strm << "Bureaucrat " << b.getName() << " has grade " << b.getGrade() << std::endl;
	return (strm);
}

/* Exception's functions */

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::string str = name;
	str.append(": my bureaucratic grade too high!");
	return (str.c_str());
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::string str = name;
	str.append(": my bureaucratic grade too low!");
	return (str.c_str());
}

std::string const Bureaucrat::GradeTooHighException::getName(void) const
{
	return (this->name);
}

std::string const Bureaucrat::GradeTooLowException::getName(void) const
{
	return (this->name);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string name)
{
	this->name = name;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string name)
{
	this->name = name;
}


Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}
