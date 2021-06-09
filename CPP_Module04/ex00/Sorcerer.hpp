/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:08 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:41:10 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	private:
		std::string name;
		std::string title;
		Sorcerer(); /* canon 1 */
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(); /* canon 2 */
		Sorcerer(const Sorcerer &s); /* canon 3 */
		const std::string getname(void) const;
		const std::string getitle(void) const;
		void polymorph(Victim const &) const;
		Sorcerer &operator=(const Sorcerer &s); /* canon 4 */
};

std::ostream& operator<<(std::ostream& strm, const Sorcerer &p);

#endif
