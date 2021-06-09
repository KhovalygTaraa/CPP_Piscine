/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:07:35 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/13 01:32:01 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	forms[0] = new ShrubberyCreationForm("nope");
	forms[1] = new PresidentialPardonForm("nope");
	forms[2] = new RobotomyRequestForm("nope");
	forms[3] = nullptr; 
}

Intern::Intern(Intern const &i)
{
	(void)i;
	forms[0] = new ShrubberyCreationForm("nope");
	forms[1] = new PresidentialPardonForm("nope");
	forms[2] = new RobotomyRequestForm("nope");
	forms[3] = nullptr; 
}

Intern::~Intern()
{
	delete forms[0];
	delete forms[1];
	delete forms[2];
}

Intern &Intern::operator=(Intern const &i)
{
	(void)i;
	return(*this);
}

const char *Intern::UnknownFormException::what() const throw()
{
	return ("Error: Unknown Form!");
}

Form *Intern::makeForm(std::string formName, std::string targetName)
{
	int i;
	Form	*res;
	
	for(i = 0; i != 3; i++)
	{
		if (forms[i]->getNamePool() == formName)
		{
			res = forms[i]->getCopy(targetName);
			std::cout << "Intern creates " << res->getName() << std::endl;
			return (res);
		}
	}
	throw Intern::UnknownFormException();
	return(res);
}
