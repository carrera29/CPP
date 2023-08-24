/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:50:11 by pollo             #+#    #+#             */
/*   Updated: 2023/08/24 17:21:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed Point::triangleArea(const Point& A, const Point& B, const Point& C) {
	//	Area = [ A.x(B.y – C.y) + B.x(C.y – A.y) + C.x(A.y - B.y) ] / 2
	Fixed area =
        (	A.x.getRawBits() * ( B.y.getRawBits() - C.y.getRawBits()) +
			B.x.getRawBits() * ( C.y.getRawBits() - A.y.getRawBits()) +
			C.x.getRawBits() * ( A.y.getRawBits() - B.y.getRawBits()))	/ 2;
	if (area < 0)
		area = area * -1;
	return area;
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed totalArea = Point::triangleArea(a, b, c);
	Fixed area1 = Point::triangleArea(point, a, b);
	Fixed area2 = Point::triangleArea(point, a, c);
	Fixed area3 = Point::triangleArea(point, b, c);

	Fixed tolerance(0.0001f);

	if (((((area1 + area2) + area3) - totalArea) > tolerance) ||
		(area1 == 0 || area2 == 0 || area3 == 0))
		return false;
	return true;
}
