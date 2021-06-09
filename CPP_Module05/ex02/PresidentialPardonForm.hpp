/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:20:08 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:29:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFOEM_HPP
# define PRESIDENTIALPARDONFOEM_HPP
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;
		PresidentialPardonForm(); /* Coplien's form 1 */
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &p); /* Coplien's form 2 */
		virtual ~PresidentialPardonForm(); /* Coplien's form 3 */
		PresidentialPardonForm &operator=(PresidentialPardonForm const &p); /* Coplien's form 4 */
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
};

#endif
