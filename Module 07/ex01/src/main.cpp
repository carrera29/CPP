/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:55:50 by clcarrer          #+#    #+#             */
/*   Updated: 2024/05/27 17:45:56 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iter.hpp>


int main(void) {

    int	arr[] = {1, 42, 3, -4, 5345};
    size_t length = sizeof(arr) / sizeof(arr[0]);
    iter(arr, length, printer<int>);

    char	str[] = "Hellow, World!";
    iter(str, sizeof(str) - 1 , printer<char>);

    return 0;

}