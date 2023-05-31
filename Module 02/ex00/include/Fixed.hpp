/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/30 11:46:25 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int					value;
		static const int	NUM_BITS_FRAC = 8;
	public:
		Fixed();
		~Fixed();
        Fixed(const Fixed& obj);
		Fixed& operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

#endif