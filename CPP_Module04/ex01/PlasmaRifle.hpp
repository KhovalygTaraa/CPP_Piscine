/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:08:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:51:35 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle(); /* canon 1 */
		PlasmaRifle(const PlasmaRifle &p); /* canon 2 */
		virtual ~PlasmaRifle(); /* canon 3 */
		PlasmaRifle &operator=(const PlasmaRifle &p); /* canon 4 */
		void attack(void) const;
};

#endif
