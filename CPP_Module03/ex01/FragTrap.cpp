/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:43 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 18:45:12 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const &target)
{
	(void)this->energy;
	if (this->hp > 0)
		std::cout << "FR4G-TP " << this->name << " use ranged attack to " << target << " and deal " << this->ranged_dmg << " points of damage!!!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	if (this->hp > 0)
		std::cout << "FR4G-TP " << this->name << " use melee attack to " << target << " and deal " << this->melee_dmg << " points of damage!!!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

FragTrap::FragTrap(): hp(max_hp), energy(max_energy) 
{
	std::cout << "New FR4G-TP is created!!! HAHAHA" << std::endl;
	this->name = "";
}

FragTrap::FragTrap(std::string name): hp(max_hp), energy(max_energy) 
{
	std::cout << "New FR4G-TP is created!!! HAHAHA" << std::endl;
	this->name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->name << " destroyed, and now " << this->name << " in the city dump:(" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	*this = fragtrap;
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
