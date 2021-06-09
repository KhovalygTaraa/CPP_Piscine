/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:13:05 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:44:37 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::~Human()
{
	std::cout << "bob died" << std::endl;
}

const Brain &Human::getBrain () const
{
	return(this->brain);
}

std::string Human::identify() const
{
	return(this->brain.identify());
}