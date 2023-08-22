/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/22 15:35:40 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void) {
	Fixed a(10);
	Fixed b(10.5f);
	Fixed c(a);

	if (a < b)
		std::cout << b << " > " << a << std::endl;
	if (a == c)
		std::cout << a << " == " << c << std::endl;
	if (b >= c)
		std::cout << b << " >= " << c << std::endl;
	if (b != c)
		std::cout << b << " != " << c << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << c << " * " << b << " = " << c * b << std::endl;
	std::cout << a << " / " << c << " = " << a / c << std::endl;

	Fixed d;
	std::cout << "d is " << d << std::endl;
	std::cout << "++d is " << ++d << std::endl;
	std::cout << "d++ is " << d++ << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "--d is " << --d << std::endl;
	std::cout << "d-- is " << d-- << std::endl;
	std::cout << "d is " << d << std::endl;

	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "e is " << e << std::endl;

	std::cout << "btw " << a << " & " << e << " min is " << Fixed::min( a, e ) << std::endl;
	std::cout << "btw " << a << " & " << e << " max is " << Fixed::max( a, e ) << std::endl;

	return (0);
}
