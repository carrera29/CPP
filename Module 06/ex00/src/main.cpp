/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:47:31 by pollo             #+#    #+#             */
/*   Updated: 2024/04/15 23:23:38 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
    
    ScalarConverter::convert("a");
    ScalarConverter::convert("123");
    ScalarConverter::convert("123.45");
    ScalarConverter::convert("123.45e2");
    ScalarConverter::convert("123.45e-2");
    ScalarConverter::convert("123.45e+2");
    ScalarConverter::convert("123.45e2f");
    ScalarConverter::convert("123.45e-2f");
    ScalarConverter::convert("123.45e+2f");
    ScalarConverter::convert("123.");
    ScalarConverter::convert("123e34");
    ScalarConverter::convert("123.3e");
    ScalarConverter::convert("1233f");
    ScalarConverter::convert("123.3f24");
    ScalarConverter::convert("123.3e/24");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("+inf");
     ScalarConverter::convert("nan");
    
    return 0;
}