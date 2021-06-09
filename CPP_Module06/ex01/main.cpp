/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:14:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/15 20:10:44 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

struct	Data
{
	std::string *s1;
	int		a;
	std::string *s2;
};

void	*serialize(void)
{
	Data		*data = new Data;
	void		*res;
	std::string *s1 = new std::string;
	std::string *s2 = new std::string;
	int			number;
	int 		ch = clock();
	
	usleep(15);
	srand(ch);
 	for(int i = 0; i < 32; i++)
 	{
 		s1->push_back(static_cast<char>(ch = rand()%94 + 33));
 		s2->push_back(static_cast<char>(ch = rand()%94 + 33));
 	}
 	number = rand();
	data->a = number;
	data->s1 = s1;
	data->s2 = s2;

	std::cout << "\nBefore" << std::endl;
	std::cout << "---------" << std::endl;
	std::cout << *(data->s1) << std::endl;
	std::cout << data->a << std::endl;
	std::cout << *(data->s2) << std::endl;
	std::cout << "---------\n" << std::endl;
	
	res = reinterpret_cast<void*>(data);
	return (res);
}

Data *deserialize(void *raw)
{
	Data *res;

	res = reinterpret_cast<Data*>(raw);
	return (res);
}

int main()
{
	Data *data;
	data = deserialize(serialize());
	std::cout << "After" << std::endl;
	std::cout << "---------" << std::endl;
	std::cout << *(data->s1) << std::endl;
	std::cout << data->a << std::endl;
	std::cout << *(data->s2) << std::endl;
	std::cout << "---------\n" << std::endl;

	std::cout << "Raw data size" << std::endl;
	std::cout << "---------" << std::endl;
	std::cout << (sizeof(*(data->s2)) + sizeof(*(data->s1)) + sizeof(data->a)) << std::endl;
	std::cout << "---------\n" << std::endl;
	delete data->s1;
	delete data->s2;
	delete data;
	return (0);
}
