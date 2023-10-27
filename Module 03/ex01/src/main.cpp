/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/10/27 19:40:22 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ScavTrap	redCat("Lulu");
	ScavTrap	blkCat("Black");

	redCat.guardGate();
	redCat.attack("Black");
	blkCat.takeDamage(20);
	ClapTrap::getValues(blkCat);
	ClapTrap::getValues(redCat);
	blkCat.beRepaired(1);
	ClapTrap::getValues(blkCat);
	ClapTrap::getValues(redCat);

	return 0;
}