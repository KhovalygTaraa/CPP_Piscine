/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:30:52 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 01:47:13 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main()
{
	try
	{
		/* int */
		std::vector<int> myFirstVector;
		for (int count = 0; count != 5; count++)
			myFirstVector.push_back(count);
		int a = 4;
		int b;
		b = easyfind<std::vector<int>, int>(myFirstVector, a);
		std::cout << b << std::endl;

		/* char */
		// std::vector<char> mySecondVector;
		// for (int count = 0; count != 5; count++)
		// 	mySecondVector.push_back(65 + count);
		// char a = 'D';
		// char b = easyfind<std::vector<char>, char>(mySecondVector, a);
		// std::cout << b << std::endl;

		/* std::string */
		// std::vector<std::string> myVector;
		// myVector.push_back("moon");
		// myVector.push_back("sun");
		// myVector.push_back("stars");
		// std::string a = "sun";
		// std::string b;
		// b = easyfind<std::vector<std::string>, std::string>(myVector, a);
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << ": \e[1;31mNot found\e[0m" << '\n';
	}
	return (0);
}