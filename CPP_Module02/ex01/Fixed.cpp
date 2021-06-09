/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:14 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 04:38:01 by swquinc          ###   ########.fr       */
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
Fixed::Fixed(Fixed const &fixed)
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

/* Сдвигаем integer на 8 битов */

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpv = (integer << Fixed::nofb);
}

/* 
	float хранится как ? 1.100011 *2^3 или ? 1100011 /2^3
	и то и другое значит 1100.011
	1) Это бит указывающий на знак числа
	2) Мантисса
	3) Экспонента
	Как мы видим, при увеличении экспоненты точка уходит влево. Умножение на 2^8 
	приведет наше число к следующему виду 1100 011 00000
										
	Таким образом мы получили фиксированную точку.
*/

Fixed::Fixed(const float floatP)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpv = roundf(floatP * (1 << Fixed::nofb));
}

 /*
	Разделим мантиссу на экспоненту и получим дробь
 */

float Fixed::toFloat(void) const
{
	return((float)this->fpv / (1 << Fixed::nofb));
}

/* 
	Избавляемся от дробной части, сдвигая биты направо.
	8 -    10000000
	3168 - 101100000
*/

int Fixed::toInt(void) const
{
	return (this->fpv >> Fixed::nofb);
}

std::ostream &operator<<(std::ostream &strm, const Fixed &fixed)
{
	strm << fixed.toFloat();
	return (strm);
}

/* getter - not canon*/
int Fixed::getRawBits(void) const
{
	return (this->fpv);
}

/* setter - not canon */
void Fixed::setRawBits(int const raw)
{
	this->fpv = raw;
}