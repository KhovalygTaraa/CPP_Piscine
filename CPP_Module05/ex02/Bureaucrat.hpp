/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:45:37 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:07:36 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
		Bureaucrat(); /* Coplien's form 1 */
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &b); /* Coplien's form 2 */
		virtual ~Bureaucrat();  /* Coplien's form 3 */
		Bureaucrat &operator=(Bureaucrat const &b); /* Coplien's form 4 */

		std::string const getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &f) const;
		void executeForm(Form const &form);
		
		class GradeTooHighException: public std::exception
		{
			private:
				std::string name;
				GradeTooHighException();
			public:
				GradeTooHighException(std::string name);
				virtual ~GradeTooHighException() throw();
				virtual const char *what() const throw();
				std::string const getName(void) const;
		};
		
		class GradeTooLowException: public std::exception
		{
			private:
				std::string name;
				GradeTooLowException();
			public:
				GradeTooLowException(std::string name);
				virtual ~GradeTooLowException() throw();
				virtual const char *what() const throw();
				std::string const getName(void) const;
		};
};

std::ostream &operator<<(std::ostream &strm, Bureaucrat const &b);

#endif
