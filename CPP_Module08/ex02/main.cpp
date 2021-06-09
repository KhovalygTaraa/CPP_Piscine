/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 06:52:35 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 01:41:13 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{	
	/* Mutant stack */
	std::cout << "\nMutant stack" << std::endl;

	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	/* Original stack */
	std::cout << "\nOriginal stack" << std::endl;

	std::stack<int> stack;

	stack.push(5);
	stack.push(17);

	std::cout << stack.top() << std::endl;
	stack.pop();
	std::cout << stack.size() << std::endl;

	stack.push(3);
	stack.push(7);
	stack.push(737);
	stack.push(0);

	/* Check iterators of mutant stack*/
	std::cout << "\nCheck iterators of mutant stack" << std::endl;
	mstack.push(3);
	mstack.push(7);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;

	return 0;
}

// int main()
// {	
// 	std::list<int> mstack;
	
// 	/* std::list iterator*/
// 	std::cout << "\nCheck iterators of mutant stack" << std::endl;
// 	mstack.push_back(1);
// 	mstack.push_back(2);
// 	mstack.push_back(3);
// 	mstack.push_back(4);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::cout << std::endl;

// 	MutantStack<int> mstack1;
	
// 	/* Check iterators of mutant stack*/
// 	std::cout << "\nCheck iterators of mutant stack" << std::endl;
// 	mstack1.push(1);
// 	mstack1.push(2);
// 	mstack1.push(3);
// 	mstack1.push(4);

// 	MutantStack<int>::iterator it1 = mstack1.begin();
// 	MutantStack<int>::iterator ite1 = mstack1.end();

// 	while (it1 != ite1)
// 	{
// 		std::cout << *it1 << std::endl;
// 		++it1;
// 	}
// 	std::cout << std::endl;
	
// 	return 0;
// }
