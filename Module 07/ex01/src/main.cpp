/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:55:50 by clcarrer          #+#    #+#             */
/*   Updated: 2024/07/16 10:07:46 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iter.hpp>


int main(void) {

    int	    arr[] = {1, 42, 3, -4, 5345};
    char	str[] = "Hellow, World!";
    size_t  length = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Print numbers:" << std::endl;
    iter(arr, length, printer<int>);
    std::cout << "\nAdd 10 to numbers:" << std::endl;
    iter(arr, length, addTen<int>);

    std::cout << "\nPrint char:" << std::endl;
    iter(str, sizeof(str) - 1 , printer<char>);

    return 0;

}