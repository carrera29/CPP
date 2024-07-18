/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:09:40 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/16 09:57:11 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>

void    printer(T x) {
    
    std::cout << x << std::endl;
}


template<typename T>

void    addTen(T x) {
    
    std::cout << (x + 10) << std::endl;
}


template<typename T, typename N,typename F>

void    iter(T *array, N lenght, F funtion) {
    
    for (N i = 0; i < lenght; i++) {
        funtion(array[i]);
    }
}

#endif