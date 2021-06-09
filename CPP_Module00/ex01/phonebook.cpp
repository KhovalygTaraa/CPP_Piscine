/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:00:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/03/29 21:35:10 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	phonebook::get_first_name() {
	return (first_name);
}
std::string	phonebook::get_last_name() {
	return (last_name);
}
std::string	phonebook::get_nickname() {
	return (nickname);
}
std::string	phonebook::get_login() {
	return (login);
}
std::string	phonebook::get_portal_address() {
	return (portal_address);
}
std::string	phonebook::get_birthday_date() {
	return (birthday_date);
}
std::string	phonebook::get_favorite_meal() {
	return (favorite_meal);
}
std::string	phonebook::get_underwear_color() {
	return (underwear_color);
}
std::string	phonebook::get_darkest_secret() {
	return (darkest_secret);
}
std::string	phonebook::get_phone_number() {
	return (phone_number);
}
std::string	phonebook::get_email_address() {
	return (email_address);
}

void phonebook::set_first_name(std::string str) {
	first_name = str;
	if (str.empty() == true)
		first_name = " ";
}

void  phonebook::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

void phonebook::set_last_name(std::string str) {
	last_name = str;
}
void phonebook::set_login(std::string str) {
	login = str;
}
void phonebook::set_portal_address(std::string str) {
	portal_address = str;
}
void phonebook::set_birthday_date(std::string str) {
	birthday_date = str;
}
void phonebook::set_favorite_meal(std::string str) {
	favorite_meal = str;
}
void phonebook::set_underwear_color(std::string str) {
	underwear_color = str;
}
void phonebook::set_darkest_secret(std::string str) {
	darkest_secret = str;
}
void phonebook::set_phone_number(std::string str) {
	phone_number = str;
}
void phonebook::set_email_address(std::string str) {
	email_address = str;
}

void	print(phonebook *contact, int i)
{
	i += 5;
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "first name" << "|";
	std::cout << std::setfill(' ') << std::setw(i ) << contact->get_first_name() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "last name" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_last_name() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "nickname" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_nickname() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "login" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_login() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "portal address" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_portal_address() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "email address" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_email_address() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "phone number" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_phone_number() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "favorite meal" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_favorite_meal() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "underwear color" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_underwear_color() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "darkest secret" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_darkest_secret() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
	std::cout << '|' << std::setfill(' ') << std::setw(15) << "birthday date" << "|";
	std::cout << std::setfill(' ') << std::setw(i) << contact->get_birthday_date() << "|\n";
	std::cout << '|' << std::setfill('-') << std::setw(i + 18) << "|\n";
}

void 	headers(void)
{
	std::cout << '|' << std::setfill('-') << std::setw(45) << "|\n";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "index" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "first name" << "|";
	std::cout << std::setfill(' ') <<std::setw(10) << "last name" << "|";
	std::cout << std::setfill(' ') <<std::setw(10) << "nickname" << "|\n";
}

void	print_contact(int b, phonebook *contact)
{
	int		i;
	int		a;
	
	i = contact[b].get_first_name().length();
	if ((a = contact[b].get_last_name().length()) > i)
		i = a;
	if ((a = contact[b].get_nickname().length()) > i)
		i = a;
	if ((a = contact[b].get_login().length()) > i)
		i = a;
	if ((a = contact[b].get_portal_address().length()) > i)
		i = a;
	if ((a = contact[b].get_email_address().length()) > i)
		i = a;
	if ((a = contact[b].get_phone_number().length()) > i)
		i = a;
	if ((a = contact[b].get_birthday_date().length()) > i)
		i = a;
	if ((a = contact[b].get_favorite_meal().length()) > i)
		i = a;
	if ((a = contact[b].get_underwear_color().length()) > i)
		i = a;
	if ((a = contact[b].get_darkest_secret().length()) > i)
		i = a;
	
	print(&contact[b], i);
}

void		getindex(phonebook *contacts)
{
	std::string index;

	std::cout << "choose index: ";
	getline(std::cin, index);
	if (index.compare("1") == 0 && contacts[0].get_first_name().empty() == false)
		print_contact(0, contacts);
	else if (index.compare("2") == 0 && contacts[1].get_first_name().empty() == false)
		print_contact(1, contacts);
	else if (index.compare("3") == 0 && contacts[2].get_first_name().empty() == false)
		print_contact(2, contacts);
	else if (index.compare("4") == 0 && contacts[3].get_first_name().empty() == false)
		print_contact(3, contacts);
	else if (index.compare("5") == 0 && contacts[4].get_first_name().empty() == false)
		print_contact(4, contacts);
	else if (index.compare("6") == 0 && contacts[5].get_first_name().empty() == false)
		print_contact(5, contacts);
	else if (index.compare("7") == 0 && contacts[6].get_first_name().empty() == false)
		print_contact(6, contacts);
	else if (index.compare("8") == 0 && contacts[7].get_first_name().empty() == false)
		print_contact(7, contacts);
	else
		std::cout << "Wrong argument\n";
}

int		fill_class(phonebook *contact)
{
	std::string str;

	std::cout << "first name: ";
	getline(std::cin, str);
	contact->set_first_name(str);
	std::cout << "last name: ";
	getline(std::cin, str);
	contact->set_last_name(str);
	std::cout << "nickname: ";
	getline(std::cin, str);
	contact->set_nickname(str);
	std::cout << "login: ";
	getline(std::cin, str);
	contact->set_login(str);
	std::cout << "portal_address: ";
	getline(std::cin, str);
	contact->set_portal_address(str);
	std::cout << "email_address: ";
	getline(std::cin, str);
	contact->set_email_address(str);
	std::cout << "phone number: ";
	getline(std::cin, str);
	contact->set_phone_number(str);
	std::cout << "birthday date: ";
	getline(std::cin, str);
	contact->set_birthday_date(str);
	std::cout << "favorite meal: ";
	getline(std::cin, str);
	contact->set_favorite_meal(str);
	std::cout << "underwear color: ";
	getline(std::cin, str);
	contact->set_underwear_color(str);
	std::cout << "darkest secret: ";
	getline(std::cin, str);
	contact->set_darkest_secret(str);
	return (0);
}

int search(phonebook *contacts)
{
	int		i;
	std::string first_name;
	std::string last_name;
	std::string nickname;

	i = 0;
	headers();
	while (contacts[i].get_first_name().empty() == false)
	{
		std::cout << '|' << std::setfill('-') << std::setw(45) << "|\n";
		std::cout << "|" << std::setfill(' ') << std::setw(10) << (i + 1) << "|";
		first_name = contacts[i].get_first_name();
		if (first_name.length() > 10)
		{
			first_name.resize(9);
			first_name.push_back('.');
		}
		std::cout << std::setfill(' ') << std::setw(10) << first_name << "|";
		last_name = contacts[i].get_last_name();
		if (last_name.length() > 10)
		{
			last_name.resize(9);
			last_name.push_back('.');
		}
		std::cout << std::setfill(' ') << std::setw(10) << last_name << "|";
		nickname = contacts[i].get_nickname();
		if (nickname.length() > 10)
		{
			nickname.resize(9);
			nickname.push_back('.');
		}
		std::cout << std::setfill(' ') << std::setw(10) << nickname << "|\n";
		i++;
	}
	std::cout << '|' << std::setfill('-') << std::setw(45) << "|\n";
	getindex(contacts);
	return (0);
}

int		main(int argc, char **argv)
{
	std::string str;
	phonebook	contacts[9];
	int			i;
	int			b;

	b = 0;
	(void)argv;
	i = 0;
	if (argc != 1)
	{
		std::cout << "This programm doesn't need a parameters\n";
		return (0);
	}
	std::cout << "|--------------------------------|\n";
	std::cout << "|Welcome to my awesome PhoneBook!|\n";
	std::cout << "|--------------------------------|\n";
	std::cout << "|The list of allowed commands:   |\n";
	std::cout << "|1)ADD                           |\n";
	std::cout << "|2)SEARCH                        |\n";
	std::cout << "|3)EXIT                          |\n";
	std::cout << "|--------------------------------|\n";
	while (1)
	{
		if (b == 0)
			b = 1;
		else
		{
			std::cout << "|--------------------------------|\n";
			std::cout << "|     My awesome PhoneBook!      |\n";
			std::cout << "|--------------------------------|\n";
			std::cout << "|The list of allowed commands:   |\n";
			std::cout << "|1)ADD                           |\n";
			std::cout << "|2)SEARCH                        |\n";
			std::cout << "|3)EXIT                          |\n";
			std::cout << "|--------------------------------|\n";
		}
		std::cout << "command: ";
		getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			if (i == 8)
			{
				std::cout << "PhoneBook is FULL!\n";
				continue ; 
			}
			fill_class(&contacts[i]);
			i++;
		}
		else if (str.compare("SEARCH") == 0)
			search(contacts);
		else if (str.compare("EXIT") == 0)
			return(0);
		else
		{
			std::cout << "Wrong command!\n";
		}
	}
	return (0);
}
