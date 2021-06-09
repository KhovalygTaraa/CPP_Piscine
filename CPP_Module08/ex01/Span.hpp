/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:32:44 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 02:02:40 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <unistd.h>

class Span {
	private:
		std::vector<int> nums;
	public:
		Span(); /* Canon 1 */
		Span(unsigned int n);
		virtual ~Span(); /* Canon 2 */
		Span(const Span &s); /* Canon 3 */
		Span &operator=(const Span &s); /* Canon 4 */
		void addNumber(int number);
		void addNumber(unsigned int n1, unsigned int n2);
		int shortestSpan(void);
		int longestSpan(void);
		void printNums(void);
		std::vector<int> getNums(void);
};

#endif

