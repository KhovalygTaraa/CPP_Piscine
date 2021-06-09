/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:13:42 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void NinjaTrap::ninjaShoebox(FragTrap &robot)
{
	if (this->hp < 0)
		return ;
	if (this->energy > 0)
	{
		std::cout << "NJ%A-TP " << this->name << " cast special attack aganist FR4G-TP,  EnergyBreak!!!" << std::endl;
		robot.vaulthunter_dot_exe("Cosmos");
		robot.vaulthunter_dot_exe("Cosmos");
		robot.vaulthunter_dot_exe("Cosmos");
		robot.vaulthunter_dot_exe("Cosmos");
		this->energy -= 30;
	}
	else
		std::cout << "NJ%A-TP " << this->name << "hasn't energy, get it from SC9V-TP!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &robot)
{
	if (this->hp > 0)
	{
		std::cout << "NJ%A-TP " << this->name << " steal energy block from this dumped defected robot SC9V-TP, and become more powerfull!!!" << std::endl;
		this->energy += 50;
		robot.takeDamage(50);
	}
}

void NinjaTrap::ninjaShoebox(ClapTrap &robot)
{
	if (this->hp < 0)
		return ;
	if (this->energy > 0)
	{
		std::cout << "NJ%A-TP " << this->name << " steal information from CL0P-TP, and become more powerfull!!!" << std::endl; 
		robot.takeDamage(this->ranged_dmg);
		this->max_hp += 40;
		this->hp += 40;
		this->energy -= 40;
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &robot)
{
	std::cout << "Ninjas kodex forbid the use secret techics aganist another ninja!!" << std::endl;
	robot.rangedAttack("Space");
	this->rangedAttack("Space");
}

NinjaTrap::NinjaTrap()
{
	std::cout << "NJ%A-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
	this->max_hp = 60;
	this->hp = 60;
	this->max_energy = 120;
	this->energy = 120;
	this->melee_dmg = 60;
	this->ranged_dmg = 5;
	this->armor = 0;
	this->type = "NJ%A-TP";
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "NJ%A-TP is created!!! BUGAGAG" << std::endl;
	this->name = name;
	this->max_hp = 60;
	this->hp = 60;
	this->max_energy = 120;
	this->energy = 120;
	this->melee_dmg = 60;
	this->ranged_dmg = 5;
	this->armor = 0;
	this->type = "NJ%A-TP";
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap)
{
	*this = ninjatrap;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NJ%A-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &right)
{
	if (this == &right)
		return(*this);
	this->hp = right.hp;
	this->energy = right.energy;
	this->name = right.name;
	return(*this);
}
