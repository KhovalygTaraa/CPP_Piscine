/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:14 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 22:47:09 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Default constructor - canon */
Fixed::Fixed(): fpv(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Default destructor - canon */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Copy constructor - canon */
Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
	// this->fpv = fixed.getRawBits();
}

/* Overloaded assignation operator - canon */
Fixed &Fixed::operator=(const Fixed &right)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &right)
		return (*this);
	fpv = right.getRawBits();
	return (*this);
}

/* getter - not canon*/
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpv);
}

/* setter - not canon */
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fpv = raw;
}