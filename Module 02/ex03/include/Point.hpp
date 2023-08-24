/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:50:03 by pollo             #+#    #+#             */
/*   Updated: 2023/08/23 09:58:44 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <cmath>
# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y; 
	public:
		Point();
		~Point();
		Point (const Point& other);
		Point(const float x, const float y);
		Point& operator=(const Point& other);
		static bool bsp( Point const a, Point const b, Point const c, Point const point);
		static Fixed triangleArea(const Point& a, const Point& b, const Point& c);
};

#endif
