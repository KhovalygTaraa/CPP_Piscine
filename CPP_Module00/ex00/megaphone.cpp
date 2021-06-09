/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:18:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/03/27 18:54:06 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	if (argc != 1)
	{
		for (i = 1; argv[i] != NULL; i++)
		{
			std::string s(argv[i]);
			for (a = 0; s[a] != '\0'; a++)
			{
				if (s[a] >= 97 && s[a] <= 122)
					std::cout << (char)(s[a] - 32);
				else
					std::cout << s[a];
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
