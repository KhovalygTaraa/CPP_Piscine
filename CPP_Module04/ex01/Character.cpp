/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:40:35 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 17:53:21 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;	
	this->weapon = NULL;
}

Character::Character(Character const &c)
{
	this->operator=(c);
}

Character::~Character()
{
}

Character &Character::operator=(Character const &c)
{
	if (this == &c)
		return (*this);
	name = c.getName();
	ap = c.getAP();
	weapon = NULL;
	return (*this);
}

std::string const Character::getName() const
{
	return (this->name);
}

int Character::getAP() const
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

void Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::attack(Enemy *e)
{
	if (this->weapon)
	{
		if (this->ap <= 0)
			return ;
		this->ap -= this->weapon->getAPCost();
		if (this->ap < 0)
		{
			this->ap += this->weapon->getAPCost();
			return ;
		}
		std::cout << this->name << " attacks " << e->getType() << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		e->takeDamage(this->weapon->getDamage());
		if (e->getHP() <= 0)
			delete e;
	}
}

void Character::equip(AWeapon *w)
{
	this->weapon = w;
}

std::ostream &operator<<(std::ostream &strm, Character const &c)
{
	if (c.getWeapon())
		strm << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		strm << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (strm);
}
