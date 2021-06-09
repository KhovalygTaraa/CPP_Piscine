/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:22:54 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 00:36:25 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void Pony::set_name(std::string name) {
	this->name = name;
}
void Pony::set_color(std::string color) {
	this->color = color;
}
void Pony::set_age(int age) {
	this->age = age;
}
std::string Pony::get_name(void) {
	return (name);
}
std::string Pony::get_color(void) {
	return (color);
}
int Pony::get_age(void) {
	return (age);
}

Pony::Pony(std::string name, std::string color, int age) {
	this->name = name;
	this->color = color;
	this->age = age;
}

Pony::~Pony()
{
	std::cout << this->name << " died" << std::endl;
}
