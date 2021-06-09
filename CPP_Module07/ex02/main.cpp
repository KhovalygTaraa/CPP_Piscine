/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:09:04 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/19 05:34:41 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<char> my_first_template(10);
		Array<char> my_second_template(3);

		/* проверка оператора обращения к элементу массива */
		std::cout << "\nПроверка оператора обращения к элементу массива" << std::endl;
		
		for (unsigned int i = 0; i != my_first_template.size(); i++)
			my_first_template[i] = 65 + i;

		for (unsigned int i = 0; i != my_first_template.size(); i++)
			std::cout << my_first_template[i] << '-' << i << std::endl;
			
		/* проверка функции size() */
		std::cout << "\nПроверка функции size()" << std::endl;
		std::cout << "fisrt: " << my_first_template.size() << std::endl;
		std::cout << "second: "<<my_second_template.size() << std::endl;
		
		/* проверка оператора присваивания */
		std::cout << "\nПроверка оператора присваивания" << std::endl;
		
		my_second_template = my_first_template;

		std::cout << "first size: " << my_first_template.size() << std::endl;
		std::cout << "second size: " << my_second_template.size() << std::endl;

		for (unsigned int i = 0; i != my_second_template.size(); i++)
			my_second_template[i] = 65 + i;

		for (unsigned int i = 0; i != my_second_template.size(); i++)
			std::cout << my_second_template[i] << '-' << i << std::endl;
	
		/* проверка на уникальность массива после присваивания */
		std::cout << "\nПроверка на уникальность массива после присваивания" << std::endl;
		
		my_second_template[0] = '*';
		
		std::cout << "first: " << my_first_template[0] <<"\nsecond: "<< my_second_template[0] << std::endl;
		
		/* проверка оператора копирования */
		std::cout << "\nПроверка оператора копирования" << std::endl;
		Array<char> my_third_template(my_first_template);
		
		std::cout << "size third: " << my_third_template.size() << std::endl;

		for (unsigned int i = 0; i != my_third_template.size(); i++)
			my_third_template[i] = 65 + i;

		for (unsigned int i = 0; i != my_third_template.size(); i++)
			std::cout << my_third_template[i] << '-' << i << std::endl;
			
		/* проверка на уникальность массива после копирования */
		std::cout << "\nПроверка на уникальность массива после копирования" << std::endl;
		
		my_third_template[0] = '+';
		
		std::cout << "first: " << my_first_template[0] <<"\nthird: "<< my_third_template[0] << std::endl;

		/* проверка на ошибку при выходе за границу выделенной памяти */
		std::cout << "\nПроверка на ошибку при выходе за границу выделенной памяти" << std::endl;

		std::string num;
		std::cout << "first array size: " << my_first_template.size() << std::endl;
		while (std::getline(std::cin, num))
		{
			my_first_template[atoi(num.c_str())] = 'a';
			std::cout << "\e[1;32mOK!\e[0m" << std::endl;
		}
		
		// std::cout << "second array size: " << my_second_template.size() << std::endl;
		// while (std::getline(std::cin, num))
		// {
		// 	my_second_template[atoi(num.c_str())] = 'a';
		// 	std::cout << "\e[1;32mOK!\e[0m" << std::endl;
		// }

		// std::cout << "third array size: " << my_third_template.size() << std::endl;
		// while (std::getline(std::cin, num))
		// {
		// 	my_third_template[atoi(num.c_str())] = 'a';
		// 	std::cout << "\e[1;32mOK!\e[0m" << std::endl;
		// }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\e[1;31m NOT OK!\e[0m" << '\n';
	}
	return (0);
}
