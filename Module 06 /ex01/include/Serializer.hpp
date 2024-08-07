/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:16:13 by pollo             #+#    #+#             */
/*   Updated: 2024/05/14 08:29:04 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include <cstdint> 
# include "Data.hpp"

class Serializer {

	private:

		Serializer();

	public:
	
		~Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
