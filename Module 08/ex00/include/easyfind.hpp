/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:40:14 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 19:30:19 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class ValueNotFound : public std::exception {
    public:
        const char* what() const throw() {
            return "Value not found in container";
        }
};

template <typename T>
typename T::iterator easyfind(T& container, const int value);

#include "easyfind.tpp"

#endif
