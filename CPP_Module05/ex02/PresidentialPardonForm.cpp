/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:32:24 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:50:51 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p): Form("PresidentialPardonForm", 25, 5)
{
	this->target = p.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
	if (this == &p)
		return (*this);
	this->target = p.getTarget();
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << getTarget() << " pardoned by Zafod Beeblebrox!" << std::endl;
}
