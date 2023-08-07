/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:27:54 by pollo             #+#    #+#             */
/*   Updated: 2023/08/07 20:26:41 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	ptrToFuntion[0] = &Harl::debug;
	ptrToFuntion[1] = &Harl::info;
	ptrToFuntion[2] = &Harl::warning;
	ptrToFuntion[3] = &Harl::error;
}

void	Harl::debug( void ) {
	std::cout << "\n[ DEBUG ]\n"
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle- special-ketchup burger.\nI really do!\n"
	<< std::endl;
}

void	Harl::info( void ) {
	std::cout << "\n[ INFO ]\n" 
	<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n"
	<< std::endl;
}

void	Harl::warning( void ) {
	std::cout << "\n[ WARNING ]\n" 
	<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n"
	<< std::endl;
}

void	Harl::error( void ) {
	std::cout << "\n[ ERROR ]\n"
	<< "This is unacceptable! I want to speak to the manager now.\n"
	<< std::endl;
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	
	int index = -1;
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			index = i;
	if (index != -1)
		for (int i = index; i < 4; i++)
			(this->*ptrToFuntion[i])();
	else {
		std::cout << 
		"\n[ Probably complaining about insignificant problems ]\n" 
		<< std::endl;
	}
}
