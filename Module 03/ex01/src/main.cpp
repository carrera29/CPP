/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/08/30 16:46:42 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ScavTrap	euroCat("Lulu");
	ScavTrap	whiteCat("Flavia");

	euroCat.guardGate();
	euroCat.attack("a red cat");
	euroCat.beRepaired(1);
	whiteCat.takeDamage(10);
	ClapTrap::getValues(euroCat);
	ClapTrap::getValues(whiteCat);

	return 0;
}