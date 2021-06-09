/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:27:46 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 00:51:44 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &c): AMateria("cure")
{
	this->operator=(c);
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &c)
{
	if (this == &c)
		return (*this);
	setType(c.getType());
	setXP(c.getXP());
	return (*this);
}

AMateria *Cure::clone() const
{
	Cure *tmp = new Cure(*this);
	return (tmp);
}

void Cure::use(ICharacter &target)
{
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
