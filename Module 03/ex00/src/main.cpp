/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/08/30 16:28:21 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap RedCat("Lulu");
    ClapTrap WhiteCat("Flavia");
    ClapTrap LuluClone(RedCat);

    ClapTrap::getValues(LuluClone);
    ClapTrap::getValues(WhiteCat);
    WhiteCat.attack("Lulu");
    RedCat.takeDamage(15);
    RedCat.beRepaired(1);
    WhiteCat.beRepaired(1);
    WhiteCat = RedCat;
    WhiteCat.attack("Lulu's Clone");
    ClapTrap::getValues(RedCat);
    ClapTrap::getValues(WhiteCat);

	return 0;
}