/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/22 15:29:22 by pollo            ###   ########.fr       */
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
		Fixed(const Fixed& other);
		
		int getRawBits( void ) const;
		void setRawBits ( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		float operator+(const Fixed& other);
		float operator-(const Fixed& other);
		float operator*(const Fixed& other);
		float operator/(const Fixed& other);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed min(const Fixed& first, const Fixed& second);
		static Fixed max(const Fixed& first, const Fixed& second);
		// función miembro estática:
		// 	- No tiene acceso a los miembros no estáticos (atributos o funciones) de la clase que no sean estáticos.
		// 	- Puede ser llamada utilizando el nombre de la clase:: sin crear una instancia de la clase.
		// 	- No tiene "this".
		// 	- No está asociada con objetos.
		// 	- Compartida entre todas las instancias.
};

std::ostream& operator<<(std::ostream& out, const Fixed& floatValue);

#endif