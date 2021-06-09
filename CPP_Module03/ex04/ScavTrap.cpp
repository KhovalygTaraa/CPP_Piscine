/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:39:55 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap()
{
	std::cout << "DEFECTED SC9V-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
	this->max_hp = 100;
	this->hp = 100;
	this->max_energy = 50;
	this->energy = 50;
	this->melee_dmg = 20;
	this->ranged_dmg = 15;
	this->armor = 3;
	this->type = "SC9V-TP";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "DEFECTED SC9V-TP is created!!! BUGAGAG" << std::endl;
	this->name = name;
	this->max_hp = 100;
	this->hp = 100;
	this->max_energy = 50;
	this->energy = 50;
	this->melee_dmg = 20;
	this->ranged_dmg = 15;
	this->armor = 3;
	this->type = "SC9V-TP";
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC9V-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
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
