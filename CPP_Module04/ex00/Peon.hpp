/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:03 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:36:50 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim {
	private:
		Peon(); /* canon 1 */
	public:
		Peon(std::string name);
		Peon(Peon const &p); /* canon 2 */
		~Peon(); /* canon 3 */
		void getPolymorphed(void) const;
		Peon& operator=(const Peon &p); /* canon 4 */		
};

#endif
