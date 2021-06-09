/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:46:38 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 00:28:29 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for(int i = 0; i != 4; i++)
		knowns[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &m)
{
	this->count = 0;
	for(int i = 0; i != 4; i++)
		knowns[i] = nullptr;
	this->count = m.getCount();
	for(int i = 0; i != this->count; i++)
		knowns[i] = m.knowns[i]->clone();
}

MateriaSource::~MateriaSource()
{
	int i;
	for(i = 0; i != count; i++)
		delete knowns[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &m)
{
	int i;
	
	if (this == &m)
		return(*this);
	if (count != 0)
	{
		for(i = 0; i != count; i++)
			delete knowns[i];
	}
	this->count = m.getCount();
	for(i = 0; i != this->count; i++)
		knowns[i] = m.knowns[i]->clone();
	return(*this);	
}

void MateriaSource::learnMateria(AMateria *a)
{
	if (a == nullptr)
		return ;
	for(int i = 0; i != count; i++)
		if (this->knowns[i]->getType() == a->getType())
			return ;
	if (count < 4)
	{
		count++;
		knowns[count - 1] = a;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;
	
	for(i = 0; i != count; i++)
	{
		if (this->knowns[i]->getType() == type)
			return (this->knowns[i]->clone());
	}
	return(nullptr);
}

int MateriaSource::getCount(void) const
{
	return (this->count);
}
