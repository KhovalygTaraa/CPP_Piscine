/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:49:12 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:51:20 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation Form", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &p): Form("Shrubbery Creation Form", 145, 137)
{
	this->target = p.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &p)
{
	if (this == &p)
		return (*this);
	this->target = p.getTarget();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
	std::ofstream tree;
	std::string filename;
	filename = getTarget();
	filename.append("_shrubbery");
	tree.open(filename.c_str());
	if (tree.is_open() == false)
		throw std::exception();
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	tree <<"           _-_" << '\n';
	tree <<"        /~~   ~~\\" << '\n';
	tree <<"     /~~         ~~\\" << '\n';
	tree <<"    {               }" << '\n';
	tree <<"      ( _-     -_ )" << '\n';
	tree <<"        ~ \\   /  ~" << '\n';
	tree <<"    _- -   | | _- _" << '\n';
	tree <<"      _ -  | |   -_" << '\n';
	tree <<"     -  - // \\\\ -  -" << '\n';
	tree <<"   -_  -   -_-  -   _-" << '\n';
	tree <<"   _-   -_  -   _-   -" << '\n';
	tree.close();
}
