/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/21 11:48:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed b( a );
	Fixed c;

	b.setRawBits(1000000);
	b.setRawBits(10);
	c = b;	
	std::cout << "a -> " << a.getRawBits() << std::endl;
	std::cout << "b -> " << b.getRawBits() << std::endl;
	std::cout << "c -> " << c.getRawBits() << std::endl;
	return 0;
}