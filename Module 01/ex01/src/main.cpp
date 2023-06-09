/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:09:45 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/25 14:22:44 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void){
	Zombie	*HordaZ;

	HordaZ = Zombie::zombieHorde(10, "UltraSur");
	for (int i = 0; i < 10; i++){
		HordaZ[i].announce();
	}
	delete[] HordaZ;
	return 0;
}