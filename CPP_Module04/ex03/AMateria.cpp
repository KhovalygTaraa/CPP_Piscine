/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:00:00 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 00:43:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	this->_xp = 0;
}

AMateria::AMateria(AMateria const &am): type(am.getType()), _xp(am.getXP())
{
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

AMateria &AMateria::operator=(AMateria const &am)
{
	if (this == &am)
		return (*this);
	this->type = am.getType();
	this->_xp = am.getXP();
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}

void AMateria::setType(std::string const &type)
{
	this->type = type;
}

void AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}
