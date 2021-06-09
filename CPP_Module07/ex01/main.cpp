/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:20:05 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/19 05:49:41 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
//     public:
//         Awesome(void): _n(42) {return ;}
//         int get(void) const {return this->_n;}
//     private:
//         int _n;
// };
// std::ostream    &operator<<(std::ostream &o, const Awesome &rhs) {o << rhs.get(); return o;}

// int main(void)
// {
// 	int tab[] = {0,1,2,3,4};
// 	Awesome tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return (0);
// }

// int main()
// {
// 	char	array[5] = {'a', 'b', 'c', 'd', 'e'};
// 	int		nums[5] = {1, 2, 3, 4, 5};
	
// 	std::cout << "\nchars" << std::endl;
// 	// iter(array, 3, increment);
// 	iter(array, 3, print);

// 	std::cout << "\nnums" << std::endl;
	
// 	// iter(nums, 4, increment);
// 	iter(nums, 4, print);
// 	std::cout << std::endl;
// 	return (0);
// }

int main()
{
	std::string array[4] = {"abc", "qwe", "asd", "fqw"};
	iter(array, 4, print);
}