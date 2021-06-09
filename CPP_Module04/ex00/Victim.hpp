/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:33:12 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim {
	private:
		std::string name;
		Victim(); /* canon 1 */
	public:
		Victim(std::string name);
		Victim(const Victim &v);  /* canon 2 */
		virtual ~Victim(); /* canon 3 */
		const std::string getname(void) const;
		void setname(std::string name);
		virtual void getPolymorphed(void) const;
		Victim& operator=(const Victim &v);  /* canon 4 */
};

std::ostream& operator<<(std::ostream &strm, const Victim &p);
#endif
