/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:53:56 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:50:26 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <unistd.h>

std::string		random1()
{
	int		num;
	std::string name;
	static std::string names[20] = {
	"Remrr",
	"Remmock",
	"Garr",
	"Garrg",
	"Thuror",
	"Thuror",
	"Remrrg",
	"Remmar",
	"Gamock",
	"Gamock",
	"Greror",
	"Gamar",
	"Thumock",
	"Gremock",
	"Gremar",
	"Derror",
	"Dermock",
	"Gamock",
	"Derror",
	"Thuror"
	};
	usleep(15);
	srand(clock());
	num = rand() % 19;
	name = names[num];
	return (name);
}

Zombie *ZombieHorde::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(this->type, name);
	return (zombie);
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->horde;
	std::cout << "Horde was destroyed by humans!!!" << std::endl;
}

ZombieHorde::ZombieHorde(int N)
{
	int		i;
	if (N <= 0)
		N = 1;
	this->type = "";
	this->horde = new Zombie[N];
	this->size = N;
	for(i = 0; i < N; i++)
		horde[i].setZombie(this->type, random1());
}

ZombieHorde::ZombieHorde()
{
	this->type = "";
}

void ZombieHorde::setZombieType(std::string type)
{
	this->type = type;	
}

void ZombieHorde::announce(void)
{
	int		i;
	
	for(i = 0; i < this->size; i++)
		this->horde[i].announce();
}