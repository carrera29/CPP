/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:09:40 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/17 10:43:55 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array {

    private:

        T*				data;
        unsigned int    n;
        
    public:
    
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
		~Array();

        Array& operator=(const Array& copy);
		T& operator[](const unsigned int i);

		unsigned int size() const;

};

#include "Array.tpp"

#endif