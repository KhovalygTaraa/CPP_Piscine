/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:56:34 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 00:25:43 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

int		replace(char *file, char *s1, char *s2)
{
	std::string 		line;
	std::string			search	= s1;
	std::string			replace = s2;
	std::ifstream		read_file;
	std::ofstream 		write_file;
	std::stringstream	new_file;
	int					pos;
	int					pos2;
	int					size;

	size = search.length();
	new_file << file;
	read_file.open(new_file.str());
	if (read_file.is_open() == false)
		throw ("open error1");
	new_file << ".replace";
	write_file.open(new_file.str());
	if (write_file.is_open() == false)
		throw ("open error2");
	while (std::getline(read_file, line))
	{
		pos2 = 0;
		while ((pos = line.find(search, pos2)) != -1)
		{
			line = line.replace(pos, size, replace);
			pos2 = pos + 1;
		}
		write_file << line << '\n';
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		try
		{
			replace(argv[1], argv[2], argv[3]);
		}
		catch(const std::exception& e)
		{
			std::cerr << "error" << &e << '\n';
		}
		
	}
	else
		std::cerr << "Wrong number of arguments!" << std::endl; 
	return (0);
}