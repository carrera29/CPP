/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:09:45 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/24 15:58:05 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	*HordaZ;

	HordaZ = zombieHorde(10, "Ultrasur");
	for (int i = 0; i < 10; i++)
		HordaZ[i].announce();
	delete HordaZ;
	system("Leaks zombieland");
	return 0;
}