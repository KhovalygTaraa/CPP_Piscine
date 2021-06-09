/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:52:09 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:54:22 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete (panther);
}

int		main()
{
	memoryLeak();
	return (0);
}