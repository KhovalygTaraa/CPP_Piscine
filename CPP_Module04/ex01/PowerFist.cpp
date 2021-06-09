/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:17:18 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 15:38:36 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &p): AWeapon("Power Fist", 8, 50)
{
	this->operator=(p);
}

PowerFist &PowerFist::operator=(const PowerFist &p)
{
	if (this == &p)
		return (*this);
	setName(p.getName());
	setAPCost(p.getAPCost());
	setDamage(p.getDamage());
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
