/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/08/30 17:05:31 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ScavTrap	whiteCat("Flavia");
	whiteCat.guardGate();
	FragTrap	blackCat("Lulu");
	blackCat.highFivesGuys();
	
	blackCat.attack("Flavia");
	whiteCat.takeDamage(20);
	whiteCat.attack("Lulu");
	blackCat.takeDamage(100);
	blackCat.attack("Flavia");

	ClapTrap::getValues(whiteCat);
	ClapTrap::getValues(blackCat);

	return 0;
}