/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:04:10 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/13 01:35:07 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		/* Bureaucrat check */
		// // Bureaucrat taraa = Bureaucrat("Taraa", 151);
		// // Bureaucrat taraa = Bureaucrat("Taraa", 0);
		// Bureaucrat taraa = Bureaucrat("Taraa", 75);
		// std::cout << taraa;
		// taraa.incrementGrade();
		// std::cout << taraa;
		// taraa.decrementGrade();
		// std::cout << taraa;
		// for (int i = taraa.getGrade(); i != 1; i--)
		// 	taraa.incrementGrade();
		// std::cout << taraa;

		/* Form check */
		// PresidentialPardonForm j18 = PresidentialPardonForm("J18"); 
		// Bureaucrat bob = Bureaucrat("Bob", 1);
		// std::cout << bob;
		// std::cout << j18;
		// Bureaucrat roxi = Bureaucrat("Roxi", 8);
		// // bob.signForm(j18);
		// // std::cout << j18;
		// // roxi.signForm(j18);
		// j18.beSigned(roxi);
		// std::cout << j18;
		// j18.beSigned(bob);
	
		/* Robotomy check */
		// Bureaucrat bob = Bureaucrat("Bob", 45);
		// RobotomyRequestForm form = RobotomyRequestForm("Chris");
		// // Bureaucrat roxi = Bureaucrat("Roxi", 25); /* check unsigned form */
		// // roxi.signForm(form); /* check unsigned form */
		// form.execute(bob);
		// bob.executeForm(form);
	
		/* Presidential check */
		// Bureaucrat bob = Bureaucrat("Bob", 5);
		// PresidentialPardonForm form = PresidentialPardonForm("Chris");
		// // Bureaucrat roxi = Bureaucrat("Roxi", 25); /* check unsigned form */
		// // roxi.signForm(form); /* check unsigned form */
		// form.execute(bob);
		// bob.executeForm(form);

		/* Shrubbery check */
		// Bureaucrat bob = Bureaucrat("Bob", 5);
		// ShrubberyCreationForm form = ShrubberyCreationForm("Chris");
		// // Bureaucrat roxi = Bureaucrat("Roxi", 25); /* check unsigned form */
		// // roxi.signForm(form); /* check unsigned form */
		// form.execute(bob);
		// bob.executeForm(form);
		
		/* Intern check */

		// Intern bob;
		// Bureaucrat roxi = Bureaucrat("Roxi", 5);
		// Form *f;

		// f = bob.makeForm("robotomy request", "Bender");
		// std::cout << *f;
		// f->beSigned(roxi);
		// roxi.executeForm(*f);
	}
	catch (std::exception &e)
	{
		std::cout <<  e.what() << std::endl;
	}

	return (0);
}
