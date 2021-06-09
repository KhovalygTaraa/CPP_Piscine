/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:25:21 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/15 20:49:38 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>

static int parser(char *res)
{
	int flag;
	int	i;
	static int check;
	static int check2;

	flag = 0;
	i = 0;
	if (res[i] == '-')
	{
		if (res[i + 1])
			if (isdigit(res[i + 1]) != 0)
				i++;
	}
	if (isdigit(res[i]) == 0)
	{
		if (res[i + 1])
			return (-1);
		if (isprint(res[0]) == 0)
			return (4);
		flag = 3;
	}
	else
	{
		while(res[i] != '\0')
		{
			if (isdigit(res[i]) == 0 && res[i] != 'f' && res[i] != '.')
				return (-1);
			if (res[i] == '.')
			{
				if (isdigit(res[i + 1]) == 0)
					return (-1);
				if (check == 1)
					return (-1);
				check = 1;
				flag = 1;
			}
			if (flag == 1 && res[i] == 'f')
				flag = 2;
			if (res[i] == 'f')
			{
				if (check2 == 1)
					return (-1);
				check2 = 1;
			}
			i++;
		}
		if (check2 == 1 && flag != 2)
			return (-1);
		i = 0;
		if (res[i] == '-' && res[i + 1] == '0')
		{
			if (res[i + 2] != '.')
				return (-1);
			i = 1;
			while (res[i] != '\0')
			{
				if (res[i] != '0' && res[i] != '.' && res[i] != 'f')
					check2 = 100;
				i++;
			}
			if (check2 != 100)
				return (-1);
		}
		else if (res[i] == '0' && res[i + 1])
		{
			if (res[i + 1] != '.')
				return (-1);
			while (res[i] != '\0')
			{
				if (res[i] != '0' && res[i] != '.' && res[i] != 'f')
					check2 = 100;
				i++;
			}
			if (check2 != 100)
				return (-1);
		}
		if (flag == 1 || flag == 2)
		{
			i = 0;
			while (res[i] != '\0')
			{
				if (res[i] == '.')
				{
					i++;
					while (res[i] != '\0')
					{
						if (res[i] != '0' && res[i] != 'f')
							return (flag);
						i++;
					}
					flag = 0;
					break ;
				}
				i++;	
			}
		}
	}
	return (flag);
}


static void	fromInt(char *str)
{
	int		i;

	i = atoi(str);
	if (isprint(i) == 0)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(7) << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << std::setprecision(16) << static_cast<double>(i) << ".0" << std::endl;
}

static void	fromDouble(char *str)
{
	double i;

	i = strtod(str, NULL);
	if (isprint(static_cast<int>(i)) == 0)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::setprecision(7) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(16) << i << std::endl;
}

static void	fromFloat(char *str)
{
	float i;

	i = atof(str);
	if (isprint(static_cast<int>(i)) == 0)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::setprecision(7) << i << "f" << std::endl;
	std::cout << "double: " << std::setprecision(16) << static_cast<double>(i) << std::endl;
}

static void	fromChar(char *str)
{
	char	i;

	i = str[0];
	std::cout << "char: " << i << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::setprecision(7) << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << std::setprecision(16) << static_cast<double>(i) << ".0" << std::endl;
}

static int	fan(int i)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	if (i == 1)
	{
		double	a = 0.0 / 0.0;
		float	b = 0.0 / 0.0;
	
		std::cout << "float: " << b << std::endl;
		std::cout << "double: " << a << 'f' << std::endl;
	}
	else if (i == 2)
	{
		double	a = -5.0 / 0.0;
		float	b = -5.0 / 0.0;

		std::cout << "float: " << b << std::endl;
		std::cout << "double: " << a << 'f' << std::endl;
	}
	else if (i == 3)
	{
		double	a = 5.0 / 0.0;
		float	b = 5.0 / 0.0;
		
		std::cout << "float: " << b << std::endl;
		std::cout << "double: " << a << 'f' << std::endl;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int		flag;
	float	a;
	double	b;
	int		i;

	i = 0;
	a = 0;
	b = 0;
	flag = 0;
	if (argc == 2)
	{
		if (strcmp(argv[1], "nan") == 0 || strcmp(argv[1], "nanf") == 0)
			return(fan(1));
		if (strcmp(argv[1], "-inf") == 0 || strcmp(argv[1], "-inff") == 0)
			return(fan(2));
		if (strcmp(argv[1], "+inf") == 0 || strcmp(argv[1], "+inff") == 0)
			return(fan(3));
		if ((flag = parser(argv[1])) == -1)
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
			return (0);
		}
		if (flag == 0)
			fromInt(argv[1]);
		else if (flag == 1)
			fromDouble(argv[1]);
		else if (flag == 2)
		{
			i = strlen(argv[1]);
			argv[1][i] = '\0';
			fromFloat(argv[1]);
		}
		else if (flag == 3)
			fromChar(argv[1]);
	}
	else
		std::cerr << "Wrong number of arguments!" << std::endl;
	return (0);
}
