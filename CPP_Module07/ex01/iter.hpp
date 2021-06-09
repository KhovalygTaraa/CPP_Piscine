/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:05:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/19 05:49:30 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

// template <typename T>
// int increment(T const &c)
// {
// 	c++;
// }

template <typename T>
void print(T const &c)
{
	std::cout << c << std::endl;
}

template <typename T>
void iter(T *a, int b, void(*func)(T const &c))
{
	int		i;
	for(i = 0; i !=  b; i++)
		func(a[i]);
}

#endif
