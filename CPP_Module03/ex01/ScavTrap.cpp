/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 18:44:26 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const &target)
{
	(void)this->energy;
	if (this->hp > 0)
		std::cout << "FR4G-TP " << this->name << " use ranged attack to " << target << " and deal " << this->ranged_dmg << " points of damage!!!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	if (this->hp > 0)
		std::cout << "FR4G-TP " << this->name << " use melee attack to " << target << " and deal " << this->melee_dmg << " points of damage!!!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{	
		std::cout << "FR4G-TP " << this->name << " get " << amount - this->armor << " points of damage!!!" << std::endl;
		this->hp -= (amount - this->armor);
		if (this->hp < 0)
			this->hp = 0;
		std::cout << "FR4G-TP " << this->name << " has " << this->hp << " hit points" << std::endl;
		if (this->hp <= 0)
		{
			 std::cout << "FR4G-TP " << this->name << " has defeated" << std::endl;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0)
	{
		std::cout << "FR4G-TP " << this->name << " use repair kit, which regain " << amount << " hit points!!! " << std::endl;
		this->hp += amount;
		if (this->hp > 100)
			this->hp = 100;
		std::cout << "FR4G-TP " << this->name << " now has " << this->hp << " hit points!! " << std::endl;
	}
}

void ScavTrap::challengeNewcomer()
{
	int			i;
	std::string challange_name;
	
	if (this->hp <= 0)
		return ;
	if (this->energy >= 25)
	{
		this->energy -= 25;
		srand(clock());
		i = rand() % 3;
		usleep(13 + i);
		if (i == 0)
		{
			challange_name = "Take off my skin - I won't cry, but you will! What am I?";
		}
		else if (i == 1)
		{
			challange_name = "I want oil, give me oil. I will be your servant...";
		}
		else if (i == 2)
		{
			challange_name = "BIP BIP BIP ENEMY DETECTED ENEMY DETECTED!!!";
		}
		std::cout << "SC9V-TP " << this->name << " activate challengeNewcomer ability (this is dump ability) " <<challange_name << std::endl;
	}
	else
		std::cout << "SC9V-TP " << this->name << " hasn't energy points to use special attack!!!" << std::endl;
}

ScavTrap::ScavTrap(): hp(max_hp), energy(max_energy) 
{
	std::cout << "DEFECTED SC9V-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
}

ScavTrap::ScavTrap(std::string name): hp(max_hp), energy(max_energy) 
{
	std::cout << "DEFECTED SC9V-TP is created!!! BUGAGAG" << std::endl;
	this->name = name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC9V-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &right)
{
	if (this == &right)
		return(*this);
	this->hp = right.hp;
	this->energy = right.energy;
	this->name = right.name;
	return(*this);
}
