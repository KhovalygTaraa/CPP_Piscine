/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:11:46 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 19:26:44 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &p): AWeapon("Plasma Rifle", 5, 21)
{
	this->operator=(p);
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &p)
{
	if (this == &p)
		return (*this);
	setName(p.getName());
	setAPCost(p.getAPCost());
	setDamage(p.getDamage());
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
