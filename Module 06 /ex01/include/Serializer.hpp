/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:16:13 by pollo             #+#    #+#             */
/*   Updated: 2024/10/02 10:20:02 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer {

	private:

		Serializer();

	public:
	
		~Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

};

#endif
