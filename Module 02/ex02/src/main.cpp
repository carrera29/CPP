/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/10/27 11:27:56 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void) {
	Fixed a(10);
	Fixed b(42.42f);
	Fixed c(a);

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << "343,345 + 342,452 = " << 343.345f + 342.452f << std::endl;
	std::cout << "343,345 - 342,452 = " << 343.345f - 342.452f << std::endl << std::endl;

	Fixed e( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "e is " << e << std::endl;
	std::cout << "0,08333 * 0,06444 = " << 0.08333f * 0.06444f << std::endl;
	std::cout << e << " * " << a << " = " << e * a << std::endl << std::endl;

	std::cout << "0,75233 / 0,36500 = " << 0.75233f / 0.36500f << std::endl;
	std::cout << "0,08333 / 0,06444 = " << 0.08333f / 0.06444f << std::endl;
	std::cout << e << " / " << a << " = " << e / a << std::endl << std::endl;

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
