/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:48:56 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/12 22:29:19 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
		RobotomyRequestForm(); /* Coplien's form 1 */
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &p); /* Coplien's form 2 */
		virtual ~RobotomyRequestForm(); /* Coplien's form 3 */
		RobotomyRequestForm &operator=(RobotomyRequestForm const &p);/* Coplien's form 4 */
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
};

#endif
