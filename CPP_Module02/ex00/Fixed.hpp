/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 22:51:04 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int	fpv;
		static const int nofb = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &fixed);
		Fixed &operator=(const Fixed &right);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif