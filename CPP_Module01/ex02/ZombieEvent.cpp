/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:01:48 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:21:16 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
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

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(this->type, name);
	return (zombie);
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "Zombie event has finished!" << std::endl;
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie = newZombie(random1());
	zombie->announce();
	return (zombie);
}

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;	
}