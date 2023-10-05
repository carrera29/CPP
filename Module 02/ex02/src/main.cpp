/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/10/03 16:34:03 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void) {
	Fixed a(10);
	Fixed b(42.42f);
	Fixed c(a);
	
	Fixed e( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << e << " * " << b << " = " << e * b << std::endl;
	std::cout << e << " * " << a << " = " << e * a << std::endl << std::endl;
	std::cout << b << " / " << c << " = " << b / c << std::endl;
	std::cout << a << " / " << a << " = " << a / a << std::endl << std::endl;
	if (a < b)
		std::cout << b << " > " << a << std::endl;
	if (a == c)
		std::cout << a << " == " << c << std::endl;
	if (b >= c)
		std::cout << b << " >= " << c << std::endl;
	if (b != c)
		std::cout << b << " != " << c << std::endl << std::endl;

	Fixed d;
	std::cout << "d is " << d << std::endl;
	std::cout << "++d is " << ++d << std::endl;
	std::cout << "d++ is " << d++ << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "--d is " << --d << std::endl;
	std::cout << "d-- is " << d-- << std::endl;
	std::cout << "d is " << d << std::endl << std::endl;

	std::cout << "btw " << a << " & " << e << " min is " << Fixed::min( a, e ) << std::endl;
	std::cout << "btw " << a << " & " << e << " max is " << Fixed::max( a, e ) << std::endl;
	
	return (0);
}
