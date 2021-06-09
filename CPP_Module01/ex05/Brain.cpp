/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:13:07 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:48:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify() const
{
	std::stringstream address;

	address << "0x" << std::uppercase << std::hex << (size_t)this;
	return (address.str());
}

Brain::Brain()
{
	this->isAlive = true;
}
