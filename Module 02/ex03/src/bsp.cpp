/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:50:11 by pollo             #+#    #+#             */
/*   Updated: 2023/08/22 18:58:17 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed Point::triangleArea(const Point& a, const Point& b, const Point& c) {
	Fixed area = (
		((b.getXvalue() - a.getXvalue()) * (c.getYvalue() - a.getYvalue())) - 
		((b.getYvalue() - a.getYvalue()) * (c.getXvalue() - a.getXvalue()))) / 2;
	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	
}