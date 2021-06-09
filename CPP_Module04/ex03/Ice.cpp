/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:41:51 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 00:25:48 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const &c): AMateria("ice")
{
	this->operator=(c);
}

Ice::~Ice()
{
	
}

Ice &Ice::operator=(Ice const &c)
{
	if (this == &c)
		return (*this);
	setType(c.getType());
	setXP(c.getXP());
	return (*this);
}

AMateria *Ice::clone() const
{
	Ice *tmp = new Ice(*this);
	return (tmp);
}

void Ice::use(ICharacter &target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

