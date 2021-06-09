/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:43:15 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/10 15:22:43 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	count = 0;
	units = NULL;
}

Squad::~Squad()
{
	int i;
	for (i = 0; units[i] != NULL; i++)
		delete units[i];
	delete [] units;
}

Squad::Squad(Squad const &s): count(0), units(NULL)
{
	this->operator=(s);
}

Squad &Squad::operator=(const Squad &s)
{	
	int i;
	if (this == &s)
		return (*this);
	if (s.units == NULL)
		return (*this);
	if (this->units)
	{
		for (i = 0; units[i] != NULL; i++)
			delete units[i];
		delete[] units;
	}
	this->count = s.getCount();
	i = this->count + 1;
	ISpaceMarine **tmp = new ISpaceMarine* [i];
	tmp[i - 1] = NULL;
	for(i = 0; s.units[i] != NULL; i++)
		tmp[i] = s.units[i]->clone();
	units = tmp;
	return (*this);
}

int	Squad::getCount() const
{
	return(this->count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i < 0 || i > getCount() || getCount() == 0)
		return (NULL);
	return(this->units[i]);
}

int Squad::push(ISpaceMarine *s)
{
	int i;
	if (!s)
		return (getCount());
	i = getCount() + 2;
	ISpaceMarine **tmp = new ISpaceMarine*[i];
	tmp[i - 1] = NULL;
	if (units != NULL)
		for(i = 0; units[i] != NULL; i++)
			tmp[i] = units[i];
	tmp[getCount()] = s;
	if (units != NULL)
		delete [] units;
	units = tmp;
	this->count++;
	return(getCount());
}
