/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:04:10 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 23:00:10 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
		Form j18 = Form("J18", 100, 150); 
		Bureaucrat bob = Bureaucrat("Bob", 100);
		std::cout << bob;
		std::cout << j18;
		Bureaucrat roxi = Bureaucrat("Roxi", 8);
		// bob.signForm(j18);
		// std::cout << j18;
		// roxi.signForm(j18);
		j18.beSigned(roxi);
		std::cout << j18;
		j18.beSigned(bob);
	}
	catch (std::exception &e)
	{
		std::cout <<  e.what() << std::endl;
	}

	return (0);
}
