/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:07:22 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/16 09:42:07 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

template<typename T>
T min(const T a, const T b) {
    if (a < b)
        return a;
    else
        return b;
}

template<typename T>
T max(const T a, const T b) {
    if (a > b)
        return a;
    else
        return b;
}


#endif