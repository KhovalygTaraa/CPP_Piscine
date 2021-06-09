/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:21:05 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 15:38:24 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(const Enemy &e)
{
	this->operator=(e);
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(const Enemy &e)
{
	if (this == &e)
		return (*this);
	this->type = e.getType();
	this->hp = e.getHP();
	return (*this);
}

std::string const Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::setType(std::string type)
{
	this->type = type;
}

void Enemy::setHP(int hp)
{
	this->hp = hp;
}

void Enemy::takeDamage(int b)
{
	if (b >= 0)
		this->hp = this->hp - b;
	if (this->hp < 0)
		this->hp = 0;
}
