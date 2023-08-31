/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 16:20:52 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap	whiteCat("Flavia");
	DiamondTrap	blackCat("Lulu");

	whiteCat.whoAmI();
	blackCat.whoAmI();
	ClapTrap::getValues(whiteCat);
	ClapTrap::getValues(blackCat);
	blackCat.ScavTrap::attack("Flavia");
	whiteCat.FragTrap::takeDamage(20);
	ClapTrap::getValues(blackCat);
	ClapTrap::getValues(whiteCat);

	return 0;
}