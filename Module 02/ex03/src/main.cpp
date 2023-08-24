/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/24 17:23:05 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {

	// Triangle points
	Point A(2.0f, 6.0f); Point B(7.0f, 2.0f); Point C(9.0f, 8.0f);

	// Testing points
	Point Inside1(5.0f, 5.0f); Point Inside2(8.0f, 7.0f);
	Point OnEdge1(2.0f, 6.0f); Point OnEdge2(8.0f, 5.0f);
	Point Outside1(9.0f, 2.0f); Point Outside2(2.0f, 7.0f);


	std::cout << "\nTesting Inside points\n"
		<< "-------------------------------------------" << std::endl;
	if (Point::bsp(A, B, C, Inside1))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;

	if (Point::bsp(A, B, C, Inside2))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;


	std::cout << "\nTesting edge points\n"
		<< "-------------------------------------------" << std::endl;
	if (Point::bsp(A, B, C, OnEdge1))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;

	if (Point::bsp(A, B, C, OnEdge2))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;


	std::cout << "\nTesting outside points\n"
		<< "-------------------------------------------" << std::endl;
	if (Point::bsp(A, B, C, Outside1))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;

	if (Point::bsp(A, B, C, Outside2))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;

	return (0);
}
