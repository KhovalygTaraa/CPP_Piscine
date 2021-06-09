/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:45:37 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 12:18:23 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
// # include <exception>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &b);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &b);
		std::string const getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);

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
