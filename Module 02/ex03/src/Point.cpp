/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:53:44 by pollo             #+#    #+#             */
/*   Updated: 2023/08/22 18:49:23 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point (const Point& other) : x(other.x), y(other.y) {}

Point::Point(const float pointX, const float pointY) : x(pointX), y(pointY) {}

Point& Point::operator=(const Point& other) {
	return *this;
}

float Point::getXvalue() const {
	return this->x.toFloat();
}

float Point::getYvalue() const {
	return this->y.toFloat();
}
