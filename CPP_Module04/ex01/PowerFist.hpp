/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:17:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:51:47 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	public:
		PowerFist(); /* canon 1 */
		PowerFist(const PowerFist &p); /* canon 2 */
		virtual ~PowerFist(); /* canon 3 */
		PowerFist &operator=(const PowerFist &p); /* canon 4 */
		void attack(void) const;
};

#endif
