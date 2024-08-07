/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:40:09 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 21:14:39 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T& container, const int value) {
    
    typename T::iterator i = std::find(container.begin(), container.end(), value);
    if (i == container.end())
        throw ValueNotFound();

    return i;
}

#endif
