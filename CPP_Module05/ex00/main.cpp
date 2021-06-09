/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:04:10 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 12:31:56 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat taraa = Bureaucrat("Taraa", 150);
		std::cout << taraa;
		// taraa.decrementGrade();
		taraa.incrementGrade();
		std::cout << taraa;
		taraa.decrementGrade();
		std::cout << taraa;
		for (int i = taraa.getGrade(); i != 1; i--)
			taraa.incrementGrade();
		std::cout << taraa;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.getName() << ": "<< e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.getName() << ": "<< e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "unknown error: " << e.what() << std::endl;
	}
	return (0);
}
