/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:59:22 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/15 20:06:02 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "unistd.h"

class Base { public: virtual ~Base( void ) {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void)
{
	int		i;
	Base *res;
	srand(clock());
	usleep(15);
	i = rand() % 3;
	if (i == 0)
		res = new A;
	else if (i == 1)
		res = new B;
	else
		res = new C;
	return (res);
}

void identify_from_pointer(Base *p)
{
	A	*ch;
	B	*ch2;
	C	*ch3;	

	ch = dynamic_cast<A*>(p);
	if (ch != 0)
		std::cout << "A" << std::endl;
		
	ch2 = dynamic_cast<B*>(p);
	if (ch2 != 0)
		std::cout << "B" << std::endl;

	ch3 = dynamic_cast<C*>(p);
	if (ch3 != 0)
		std::cout << "C" << std::endl;	
}

void identify_from_reference(Base &p)
{
	try
	{
		A &ch = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)ch;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		B &ch2 = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)ch2;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		C &ch3 = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)ch3;
	}
	catch(const std::exception& e)
	{
	}
}

int main()
{
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;
	Base &ar = *a;
	Base &br = *b;
	Base &cr = *c;
	Base *generator = generate();
	
	std::cout << "\ngenerator(ptr): ";	
	identify_from_pointer(generator);
	std::cout << "generator(ref): ";	
	identify_from_reference(*generator);

	std::cout << "\n----------" << std::endl;
	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);
	std::cout << "----------\n" << std::endl;
	
	std::cout << "----------" << std::endl;
	identify_from_reference(ar);
	identify_from_reference(br);
	identify_from_reference(cr);
	std::cout << "----------\n" << std::endl;
	
	return (0);	
}
