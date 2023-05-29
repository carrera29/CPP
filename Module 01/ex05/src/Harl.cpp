/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:27:54 by pollo             #+#    #+#             */
/*   Updated: 2023/05/29 13:29:32 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle- special-ketchup burger. I really do!\n";
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level ) {
	std::map <std::string, void (Harl::*)()> funtionMap;
	funtionMap["DEBUG"] = &Harl::debug;
	funtionMap["INFO"] = &Harl::info;
	funtionMap["WARNING"] = &Harl::warning;
	funtionMap["ERROR"] = &Harl::error;

	std::map <std::string, void (Harl::*)()>::iterator key;
	for (key = funtionMap.begin(); key != funtionMap.end(); key++) {
		if (key->first == level){
			std::cout << "[ " << key->first << " ]" << std::endl;
			(this->*(key->second))();
			break;
		}
	}
	if (key == funtionMap.end())
		std::cout << "Wrong argument\n";
}
