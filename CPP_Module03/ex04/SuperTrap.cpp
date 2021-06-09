/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:13:42 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap()
{
	std::cout << "SP#R-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
	this->max_hp = F_get_maxhp();
	this->hp = F_get_hp();
	this->ranged_dmg = F_get_range();
	this->armor = F_get_armor();
	
	this->max_energy = 120;
	this->energy = 120;
	this->melee_dmg = 60;
	this->type = "SP#R-TP";
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "SP#R-TP is created!!! BUGAGAG" << std::endl;
	this->name = name;
	this->max_hp = F_get_maxhp();
	this->hp = F_get_hp();
	this->ranged_dmg = F_get_range();
	this->armor = F_get_armor();

	this->max_energy = 120;
	this->energy = 120;
	this->melee_dmg = 60;

	this->type = "SP#R-TP";
}

SuperTrap::SuperTrap(const SuperTrap &ninjatrap)
{
	*this = ninjatrap;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SP#R-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &right)
{
	if (this == &right)
		return(*this);
	this->hp = right.hp;
	this->energy = right.energy;
	this->name = right.name;
	return(*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
