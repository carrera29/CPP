/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/21 16:52:58 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <cmath>
# include <iostream>
# include <string>

class Fixed
{
	private:
		int					fixedValue;
		static const int	NUM_BITS_FRAC = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& floatValue);

#endif