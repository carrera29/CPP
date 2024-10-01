/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:47:31 by pollo             #+#    #+#             */
/*   Updated: 2024/10/01 22:56:03 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
    // if (argc != 2)
    //     std::cout << "Error: wrong number of arguments" << std::endl;
    // else
    //     ScalarConverter::convert(argv[1]);
    // return (0);


    std::cout << "\033[1mchar value examples : \033[0m" << std::endl;
    ScalarConverter::convert("a");
    std::cout << std::endl;
    ScalarConverter::convert("+");
    std::cout << std::endl;
    ScalarConverter::convert("`");
    std::cout << std::endl;

    std::cout << "\n\033[1mint value examples : \033[0m" << std::endl;
    ScalarConverter::convert("123");
    std::cout << std::endl;
    ScalarConverter::convert("-123");
    std::cout << std::endl;
    ScalarConverter::convert("+123");
    std::cout << std::endl;
    ScalarConverter::convert("0");
    
    std::cout << "\n\033[1mdouble value examples : \033[0m" << std::endl;
    ScalarConverter::convert("123.45");
    std::cout << std::endl;
    ScalarConverter::convert("-123.45e2");
    std::cout << std::endl;
    ScalarConverter::convert("123.45e-2");
    std::cout << std::endl;
    ScalarConverter::convert("-123.45e+2");

    std::cout << "\n\033[1mfloat value examples : \033[0m" << std::endl;
    ScalarConverter::convert("123.45f");
    std::cout << std::endl;
    ScalarConverter::convert("-123.45e2f");
    std::cout << std::endl;
    ScalarConverter::convert("123.45e-2f");
    std::cout << std::endl;
    ScalarConverter::convert("-123.45e+2f");

    std::cout << "\n\033[1mnot valid examples : \033[0m" << std::endl;
    ScalarConverter::convert("123.");
    std::cout << std::endl;
    ScalarConverter::convert("123.f");
    std::cout << std::endl;
    ScalarConverter::convert("1233f");
    std::cout << std::endl;
    ScalarConverter::convert("123.3f24");
    std::cout << std::endl;
    ScalarConverter::convert("123e34");
    std::cout << std::endl;
    ScalarConverter::convert("123.3e/24");
    std::cout << std::endl;
    ScalarConverter::convert("123.3e+");
    std::cout << std::endl;
    ScalarConverter::convert("123.3e-");
    std::cout << std::endl;
    ScalarConverter::convert("123.3e");
    std::cout << std::endl;
    ScalarConverter::convert("-in.f");

    std::cout << "\n\033[1mpseudo literals examples : \033[0m" << std::endl;
    ScalarConverter::convert("-inff");
    std::cout << std::endl;
    ScalarConverter::convert("+inff");
    std::cout << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << std::endl;
    ScalarConverter::convert("-inf");
    std::cout << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
    ScalarConverter::convert("nan");

    std::cout << "\n\033[1mnot valid int values : \033[0m" << std::endl;
    ScalarConverter::convert("2147483648");
    ScalarConverter::convert("-2147483649");
    ScalarConverter::convert("1.0e5000f");
    ScalarConverter::convert("-1.0e5000f");
    ScalarConverter::convert("1.0e50000");
    ScalarConverter::convert("-1.0e50000");

}
