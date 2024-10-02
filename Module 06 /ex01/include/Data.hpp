/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:06:34 by pollo             #+#    #+#             */
/*   Updated: 2024/10/02 20:06:38 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>

class Data {

	public:
	
		Data();
		~Data();
		Data(const Data& other);
		Data& operator=(const Data& other);

		char	charValue;
		int		intValue;
		float	floatValue;
		double	doubleValue;

};

#endif
