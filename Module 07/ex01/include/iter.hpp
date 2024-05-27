/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:09:40 by clcarrer          #+#    #+#             */
/*   Updated: 2024/05/27 17:41:50 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>

void    printer(T x) {
    
    std::cout << x << std::endl;
}


template<typename T, typename N,typename F>

void    iter(T *array, N lenght, F funtion) {
    
    for (N i = 0; i < lenght; i++) {
        funtion(array[i]);
    }
}

#endif