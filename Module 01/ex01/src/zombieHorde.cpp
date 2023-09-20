/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:03:08 by clcarrer          #+#    #+#             */
/*   Updated: 2023/09/13 13:54:03 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	Zombie::zombieHorde( int N, std::string name ){
	Zombie* Horde;

	if (N < 1) {
		std::cout << "The number of zombies is not even one" << std::endl;
		return NULL;
	}
	Horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		Horde[i].name = (name + std::to_string(i+1)) ;
	}
	return Horde;
}