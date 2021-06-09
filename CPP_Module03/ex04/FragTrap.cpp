/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/03 02:44:06 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			i;
	std::string attack_name;
	int			damage;
	
	if (this->hp <= 0)
		return ;
	if (this->energy >= 25)
	{
		this->energy -= 25;
		srand(clock());
		i = rand() % 5;
		usleep(13 + i);
		if (i == 0)
		{
			attack_name = "Nuclear BOBMBERDO!";
			damage = 10000;
		}
		else if (i == 1)
		{
			attack_name = "Dust";
			damage = 1;	
		}
		else if (i == 2)
		{
			attack_name = "Flamethrower";
			damage = 10;
		}
		else if (i == 3)
		{
			attack_name = "System_error";
			damage = 0;
		}
		else
		{
			attack_name = "Waterthrower";
			damage = 10;
		}
		std::cout << "FR4G-TP " << this->name << " activate special attack -> " << attack_name << " <- to " << target << " and deal " << damage << " points of damage!!!" <<std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->name << " hasn't energy points to use special attack!!!" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "New FR4G-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
	this->max_hp = 100;
	this->hp = 100;
	this->max_energy = 100;
	this->energy = 100;
	this->melee_dmg = 30;
	this->ranged_dmg = 20;
	this->armor = 5;
	this->type = "FR4G-TP";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "New FR4G-TP is created!!! HAHAHA" << std::endl;
	this->name = name;
	this->max_hp = 100;
	this->hp = 100;
	this->max_energy = 100;
	this->energy = 100;
	this->melee_dmg = 30;
	this->ranged_dmg = 20;
	this->armor = 5;
	this->type = "FR4G-TP";
}


FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &right)
{
	if (this == &right)
		return(*this);
	this->hp = right.hp;
	this->energy = right.energy;
	this->name = right.name;
	return(*this);
}

int FragTrap::F_get_hp(void)
{
	return(this->hp);
}

int FragTrap::F_get_maxhp(void)
{
	return(this->max_hp);
}

int FragTrap::F_get_range(void)
{
	return(this->ranged_dmg);	
}

int FragTrap::F_get_armor(void)
{
	return(this->armor);	
}

void FragTrap::rangedAttack(std::string const &target)
{
	if (this->hp > 0)
		std::cout << this->type << " " << this->name << " activate lasers and direct it to " << target << " and deal " << this->ranged_dmg << " points of damage!!!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	if (this->hp > 0)
		std::cout << this->type << " " << this->name << " use melee attack to " << target << " and deal " << this->melee_dmg << " points of damage!!!" << std::endl;
}
