/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/10/27 20:06:57 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap RedCat("Lulu");
    ClapTrap WhiteCat("Flavia");
    ClapTrap OtherCat("Other cat");

    OtherCat = RedCat;
    ClapTrap::getValues(RedCat);
    ClapTrap::getValues(WhiteCat);
    ClapTrap::getValues(OtherCat);

    WhiteCat.attack("Lulu");
    RedCat.takeDamage(0);

    ClapTrap::getValues(RedCat);
    ClapTrap::getValues(OtherCat);

	return 0;
}