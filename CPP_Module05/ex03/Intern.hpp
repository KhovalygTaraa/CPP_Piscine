/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:07:37 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/13 01:27:27 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	// private:
	// 	Form		*forms[4];
	public:
		Form		*forms[4];
		Intern();
		Intern(Intern const &i);
		~Intern();
		Intern &operator=(Intern const &i);
		Form *makeForm(std::string formName, std::string targetName);
		
		class UnknownFormException: public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif
