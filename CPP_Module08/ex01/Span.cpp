/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:32:47 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 02:02:32 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n)
{
	nums.resize(n);
	nums.clear();
}

Span::Span(const Span &s)
{
	nums.clear();
	nums.resize(s.nums.capacity());
	nums.assign(s.nums.begin(), s.nums.end());
}

Span::~Span()
{
	nums.clear();
}

Span &Span::operator=(const Span &s)
{
	nums.clear();
	nums.resize(s.nums.capacity());
	nums.assign(s.nums.begin(), s.nums.end());
	return (*this);
}

void Span::addNumber(int number)
{
	if (nums.size() == nums.capacity())
		throw std::exception();
	nums.push_back(number);
}

void Span::addNumber(unsigned int n1, unsigned int n2)
{
	if (nums.capacity() <= n2)
		throw std::exception();
	while (n1 != n2)
	{
		usleep(rand() % 9);
		nums.push_back((rand() + time(0) + n1) % 912346478);
		n1++;
	}
}

int		mm(int i, int b)
{
	return(i - b);
}

/* Actions: 1) Sort by ascending
			2) Substract from current element the next element
			3) Save result of all substaction
			4) return max value it will be shortest Span
*/

int Span::shortestSpan(void)
{
	if (nums.size() <= 1)
		throw std::exception();
	std::vector<int> subs(nums.size());
	std::vector<int> tmp(nums);

	/* we need to sort 'nums' for casting 'unique_copy' function */
	std::sort(tmp.begin(), tmp.end());
	
	/*	copy from 'tmp' to 'subs' by removing duplicates,
		in other words we are copy to 'subs' just unique elements of 'tmp' */
	std::unique_copy(tmp.begin(), tmp.end(), subs.begin());
	
	/* гребанные нули вначале, еле-еле избавился от них. Эта функция убирает нули в конце */
	subs.erase(std::remove(subs.begin(), subs.end(), 0), subs.end());

	tmp = subs;
	
	/*	we are cast function(5-th arg) - std::minus<int>()
		for two iterators(1-th arg and 3-rd arg) and write result
		to 'tmp'. When 1-th arg will be equal to 2-th function will be finish */
	std::vector<int> tmp2(nums.capacity());
	std::transform(subs.begin(), subs.end(), (tmp.begin() + 1), tmp2.begin(), mm);
	tmp2.erase(std::remove(tmp2.begin(), tmp2.end(), 0), tmp2.end());

	/* we return max value in the vector tmp and result will be multiply by -1. */
	std::sort(tmp2.begin(), tmp2.end());

	std::vector<int>::iterator t;
	t = std::max_element(tmp2.begin(), tmp2.end());
	while (*t > 0)
	{
		tmp2.pop_back();
		t--;
	}
	return (*std::max_element(tmp2.begin(), tmp2.end()) * -1);
}

int Span::longestSpan(void)
{
	if (nums.size() <= 1)
		throw std::exception();
	std::sort(nums.begin(), nums.end());
	
	return (nums.back() - nums.front());
}

void Span::printNums(void)
{
	std::vector<int> tmp(nums);

	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	it = tmp.begin();
	while (it != tmp.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
}

