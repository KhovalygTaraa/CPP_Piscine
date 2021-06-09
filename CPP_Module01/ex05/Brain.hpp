/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:13:03 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:45:02 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <sstream>
# include <string>

class Brain {
	private:
		bool isAlive;
	public:
		Brain();
		std::string identify() const;
};

#endif