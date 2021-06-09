/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:39:19 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 19:43:39 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form 
{
	private:
		std::string const	name;
		bool				isSigned;
		int const			signGrade;
		int const			executeGrade;
		Form(); /* Coplien's form 1 */
	public:
		Form(std::string name, int signGrade, int executeGrade); 
		Form(Form const &f); /* Coplien's form 2 */
		virtual ~Form(); /* Coplien's form 3 */
		Form &operator=(Form const &f); /* Coplien's form 4 */
		void beSigned(const Bureaucrat &b);

		std::string const getName(void) const;
		bool getIsSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;
		void setIsSigned(bool isSigned);

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

		class SignedException: public std::exception
		{
			private:
				std::string name;
				std::string formName;
				SignedException();
			public:
				SignedException(std::string name, std::string formName);
				virtual ~SignedException() throw();
				virtual const char *what() const throw();
				std::string const getName(void) const;
				std::string const getFormName(void) const;
		};
};

std::ostream &operator<<(std::ostream &stream, Form const &f);

#endif
