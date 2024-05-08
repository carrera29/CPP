/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:47:31 by pollo             #+#    #+#             */
/*   Updated: 2024/05/08 20:19:27 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
    
    // std::cout << "\033[1mchar value examples : \033[0m" << std::endl;
    // ScalarConverter::convert("a");
    // ScalarConverter::convert("+");
    // ScalarConverter::convert("`");

    // std::cout << "\n\033[1mint value examples : \033[0m" << std::endl;
    // ScalarConverter::convert("123");
    // ScalarConverter::convert("-123");
    // ScalarConverter::convert("+123");
    // ScalarConverter::convert("0");
    
    // std::cout << "\n\033[1mdouble value examples : \033[0m" << std::endl;
    // ScalarConverter::convert("123.45");
    // ScalarConverter::convert("123.45e2");
    // ScalarConverter::convert("123.45e-2");
    // ScalarConverter::convert("123.45e+2");

    // std::cout << "\n\033[1mfloat value examples : \033[0m" << std::endl;
    // ScalarConverter::convert("123.45");
    // ScalarConverter::convert("-123.45e2f");
    // ScalarConverter::convert("123.45e-2f");
    // ScalarConverter::convert("-123.45e+2f");

    // std::cout << "\n\033[1mnot valid examples : \033[0m" << std::endl;
    // ScalarConverter::convert("123.");
    // ScalarConverter::convert("123.f");
    // ScalarConverter::convert("1233f");
    // ScalarConverter::convert("123.3f24");
    // ScalarConverter::convert("123e34");
    // ScalarConverter::convert("123.3e/24");
    // ScalarConverter::convert("123.3e+");
    // ScalarConverter::convert("123.3e-");
    // ScalarConverter::convert("123.3e");
    // ScalarConverter::convert("-in.f");

    // std::cout << "\n\033[1mpseudo literals examples : \033[0m" << std::endl;
    // ScalarConverter::convert("-inff");
    // ScalarConverter::convert("-inff");
    // ScalarConverter::convert("nanf");
    // ScalarConverter::convert("-inf");
    // ScalarConverter::convert("+inf");
    // ScalarConverter::convert("nan");

    std::cout << "\n\033[1mnot valid int values : \033[0m" << std::endl;
    // ScalarConverter::convert("23434534534534");
    // ScalarConverter::convert("-434534535345345");
    ScalarConverter::convert("434534535345345.56");
    // ScalarConverter::convert("-434534535345345.56");
    // ScalarConverter::convert("434534535345345.56f");
    // ScalarConverter::convert("-434534535345345.56f");
    
    return 0;
}