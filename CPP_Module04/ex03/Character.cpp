/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:32:32 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:12:27 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->count = 0;
	for(int i = 0; i != 4; i++)
		inventory[i] = nullptr;
}

Character::~Character()
{
}

Character::Character(Character const &c)
{
	int i;

	this->count = c.getCount();
	this->name = c.getName();
	for (i = 0; i != count; i++)
		inventory[i] = c.inventory[i]->clone();
}

Character &Character::operator=(Character const &c)
{
	int i;

	if (this->count > 0)
	{
		for (i = 0; i != count; i++)
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
	this->count = c.getCount();
	this->name = c.getName();
	for (i = 0; i != count; i++)
		inventory[i] = c.inventory[i]->clone();
	return (*this);
}

void Character::equip(AMateria *m)
{
	int i;

	if (m == nullptr)
		return ;
	if (count < 4)
	{
		for(i = 0; i != 4; i++)
		{
			if (inventory[i] == nullptr)
			{
				inventory[i] = m;
				break ;
			}
		}
		count++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4 || &target == nullptr)
		return ;
	if (inventory[idx] == nullptr)
		return ;
	inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->name);
}

int Character::getCount() const
{
	return (this->count);
}
