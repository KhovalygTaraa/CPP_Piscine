/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:33:25 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:51:04 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request Form", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &p): Form("RobotomyRequestForm", 72, 45)
{
	this->target = p.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &p)
{
	if (this == &p)
		return (*this);
	this->target = p.getTarget();
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
	{
		throw Form::UnsignedException(executor.getName(), getName());
	}
	else if (executor.getGrade() > getExecuteGrade())
	{
		std::cout << executor.getName() << " cannot execute form \"" << getName() << "\" because beraucrate grade too low for execute this form" << std::endl;
		throw Form::GradeTooLowException(executor.getName());
	}
	usleep(15);
	srand(clock());
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << "Drrrr Drrr Drrr ..." << std::endl;
	if ((rand() % 2) == 0)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has been robotomized unsuccessfully" << std::endl;
}
