/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:53:48 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/17 22:20:14 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main()
// {
// 	Awesome a(5);
// 	Awesome b(17);
// 	Awesome c(100);
// 	Awesome d(1);

// 	std::cout << "\nBefore" << std::endl;
// 	std::cout << a << ' ' << b << std::endl << '\n';

// 	swap(a, b);
	
// 	std::cout << "After" << std::endl;	
// 	std::cout << a << ' ' << b << std::endl << '\n';

// 	std::cout << c <<  "vs"  << d << " min: " << min(c, d) << std::endl;
// 	std::cout << c <<  "vs" << d << " max: " << max(c, d) << std::endl << '\n';
// 	return (0);
// }


// int main( void ) {
// 	int a = 2;
// 	int b = 3;
	
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
	
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
// 	return 0;
// }

int main()
{
	int a = 5;
	int b = 17;
	int c = 100;
	int d = 1;

	std::cout << "\nBefore" << std::endl;
	std::cout << a << ' ' << b << std::endl << '\n';

	swap(a, b);
	
	std::cout << "After" << std::endl;	
	std::cout << a << ' ' << b << std::endl << '\n';

	std::cout << c <<  "vs"  << d << " min: " << min(c, d) << std::endl;
	std::cout << c <<  "vs" << d << " max: " << max(c, d) << std::endl << '\n';
	return (0);
}
