/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:09:40 by clcarrer          #+#    #+#             */
/*   Updated: 2024/05/27 18:20:17 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T, unsigned int N>

class Array {

    private:

        T arr[N];

        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array& operator=(const Array &copy);

    public:

        ~Array();


}

#endif