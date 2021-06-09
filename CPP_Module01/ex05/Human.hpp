/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:13:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:44:57 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {
	private:
		const Brain brain;
	public:
		~Human();
		std::string identify(void) const;
		const Brain &getBrain() const;			
};

#endif