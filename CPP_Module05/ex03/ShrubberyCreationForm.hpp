/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:49:00 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/13 01:03:48 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
		ShrubberyCreationForm(); /* Coplien's form 1 */
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &p); /* Coplien's form 2 */
		virtual ~ShrubberyCreationForm(); /* Coplien's form 3 */
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &p); /* Coplien's form 4 */
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
		virtual std::string const getNamePool(void) const;
		virtual Form* getCopy(std::string const targetName) const;
};

#endif
