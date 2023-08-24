/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:53:44 by pollo             #+#    #+#             */
/*   Updated: 2023/08/23 10:00:43 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point (const Point& other) : x(other.x), y(other.y) {}

Point::Point(const float pointX, const float pointY) : x(pointX), y(pointY) {}

Point& Point::operator=(const Point& other) {
	if (this->x == other.x)
		return *this;
	return *this;
}
