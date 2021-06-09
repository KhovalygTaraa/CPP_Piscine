/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:22:49 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 00:35:18 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony {
	
	private:
		std::string name;
		std::string color;
		int			age;
	
	public:
		Pony(std::string name, std::string color, int age);
		~Pony();
		void set_name(std::string name);
		void set_color(std::string color);
		void set_age(int age);
		std::string get_name(void);
		std::string get_color(void);
		int get_age(void);
};

Pony	*ponyOnTheHeap(std::string name, std::string color, int age);
void	ponyOnTheStack(std::string name, std::string color, int age);

#endif