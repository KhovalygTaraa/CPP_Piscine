/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:12:00 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 01:48:31 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	/* базовый тест */
	try
	{
		Span span = Span(21);
		
		int a;
		int b;
		span.addNumber(5);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);

		a = span.shortestSpan();
		b = span.longestSpan();
		std::cout << "shortest span: " << a << std::endl;
		std::cout << "longest span: " << b<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\e[1;31m No span or out of limits \e[0m" << '\n';
	}
	/* расширенный тест */
	try
	{
		int a;
		int b;
		
		Span span = Span(10000);
		srand(clock());
		span.addNumber(0, 9999);
		// span.printNums();
		
		a = span.shortestSpan();
		b = span.longestSpan();
		std::cout << "shortest span: " << a << std::endl;
		std::cout << "longest span: " << b<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\e[1;31m No span or out of limits \e[0m" << '\n';
	}

	return (0);
}
