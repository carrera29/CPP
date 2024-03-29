/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:09:45 by clcarrer          #+#    #+#             */
/*   Updated: 2023/09/13 11:39:11 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void){
	Zombie	*HordaZ;

	HordaZ = Zombie::zombieHorde(3, "UltraSur");
	for (int i = 0; i < 3; i++){
		HordaZ[i].announce();
	}
	delete[] HordaZ;
	return 0;
}