/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:25:18 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/25 13:29:06 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main(void){
	std::string		s = "HI THIS IS BRAIN";
	std::string*	stringPTR = &s;
	std::string&	stringREF = s;

	std::cout << "Memory address of string:	" << &s << std::endl;
	std::cout << "Memory address of stringPTR:	" << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:	" << &stringREF << std::endl;

	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl;
    
    return 0;
}