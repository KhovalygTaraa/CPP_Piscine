/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:33:49 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 23:10:30 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->ap = apcost;
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &w)
{
	this->operator=(w);
}

AWeapon::~AWeapon()
{
}

int AWeapon::getAPCost() const
{
	return(this->ap);
}

int AWeapon::getDamage() const
{
	return(this->damage);
}

std::string const AWeapon::getName() const
{
	return (this->name);
}

void AWeapon::setName(std::string name)
{
	this->name = name;
}

void AWeapon::setDamage(int damage)
{
	this->damage = damage;
}

void AWeapon::setAPCost(int ap)
{
	this->ap = ap;
}
AWeapon &AWeapon::operator=(const AWeapon &w)
{
	if (this == &w)
		return(*this);
	this->name = w.getName();
	this->damage = w.getDamage();
	this->ap = w.getAPCost();
	return (*this);
}
