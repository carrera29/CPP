/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/10/27 17:32:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {

	// Triangle points
	Point A(4.0f, 1.0f); Point B(2.0f, 5.0f); Point C(6.0f, 7.0f);

	// Testing points
	Point Inside1(4.0f, 3.0f); Point Inside2(3.0f, 5.0f); Point Inside3(5.0f, 6.0f);
	Point OnEdge1(2.0f, 5.0f); Point OnEdge2(4.0f, 6.0f); Point OnEdge3(5.0f, 4.0f);
	Point Outside1(2.0f, 2.0f); Point Outside2(6.0f, 3.0f); Point Outside3(5.0f, 7.0f);


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

	if (Point::bsp(A, B, C, Inside3))
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

	if (Point::bsp(A, B, C, OnEdge3))
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

	if (Point::bsp(A, B, C, Outside3))
		std::cout << "Point is INSIDE the triangle" << std::endl;
	else
		std::cout << "Point is NOT inside the triangle" << std::endl;

	return (0);
}
