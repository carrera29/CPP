/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:25:18 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/26 13:00:22 by pollo            ###   ########.fr       */
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
	std::cout << "Memory address of stringREF:	" << &stringREF << std::endl << std::endl;

	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl << std::endl;

	*stringPTR = "FUCK U, I CHANGED THE LINE";
	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl << std::endl;

	stringREF = "AND NOW ME JAJAJ";
	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl << std::endl;

	for (int i = 0; (*stringPTR)[i]; i++)
		(*stringPTR)[i] = '*';
	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl << std::endl;

	for (int i = 0; stringREF[i]; i++)
		stringREF[i] = '|';
	std::cout << "Content of string:	" << s << std::endl;
	std::cout << "Content of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Content of stringREF:	" << stringREF << std::endl << std::endl;

	return 0;
}