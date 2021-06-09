/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:39:09 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::rangedAttack(std::string const &target)
{
	(void)this->energy;
	if (this->hp > 0)
		std::cout << this->type << " " << this->name << " use ranged attack to " << target << " and deal " << this->ranged_dmg << " points of damage!!!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	if (this->hp > 0)
		std::cout << this->type << " " << this->name << " use melee attack to " << target << " and deal " << this->melee_dmg << " points of damage!!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{	
		std::cout << this->type << " " << this->name << " get " << amount - this->armor << " points of damage!!!" << std::endl;
		this->hp -= (amount - this->armor);
		if (this->hp < 0)
			this->hp = 0;
		std::cout << this->type << " " << this->name << " has " << this->hp << " hit points" << std::endl;
		if (this->hp <= 0)
		{
			 std::cout << this->type << " " << this->name << " has defeated" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0)
	{
		std::cout << this->type << " " << this->name << " use repair kit, which regain " << amount << " hit points!!! " << std::endl;
		this->hp += amount;
		if (this->hp > 100)
			this->hp = 100;
		std::cout << this->type << " " << this->name << " now has " << this->hp << " hit points!! " << std::endl;
	}
}

ClapTrap::ClapTrap(): hp(1), energy(1), max_energy(1)
{
	std::cout << "CL0P-TP is created!!!" << std::endl;
	this->name = "";
	this->max_hp = 1;
	this->melee_dmg = 1;
	this->ranged_dmg = 1;
	this->armor = 1;
	this->type = "CL0P-TP";
}

ClapTrap::ClapTrap(std::string name): hp(1), energy(1), max_energy(1)
{
	std::cout << "CL0P-TP is created!!! hi-hi-hi" << std::endl;
	this->name = name;
	this->melee_dmg = 1;
	this->max_hp = 1;
	this->ranged_dmg = 1;
	this->armor = 1;
	this->type = "CL0P-TP";
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL0P-TP " << this->name << " destroyed, and this is my end. Forgive me, father ..." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &right)
{
	if (this == &right)
		return(*this);
	this->hp = right.hp;
	this->energy = right.energy;
	this->name = right.name;
	return(*this);
}
