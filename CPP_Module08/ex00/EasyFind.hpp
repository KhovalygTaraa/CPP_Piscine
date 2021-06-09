/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:30:49 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 02:02:19 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <map>

template <typename T, typename T2>
T2 easyfind(T &cont, T2 i)
{
	typename T::iterator var;
	var = std::find(cont.begin(), cont.end(), i);
	if (var == cont.end())
		throw std::exception();
	return (*var);
}

#endif

