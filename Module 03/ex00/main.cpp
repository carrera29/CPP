/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:06 by pollo             #+#    #+#             */
/*   Updated: 2023/05/12 14:24:07 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap clapTrap("Lulu");
    clapTrap.attack("Flavia");
    clapTrap.takeDamage(2);
    clapTrap.beRepaired(2);

	return (0);
}