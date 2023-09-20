/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:38 by clcarrer          #+#    #+#             */
/*   Updated: 2023/09/12 11:12:19 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*z[5];
	
	for (int i = 0; i < 5; i++)
		z[i] = newZombie("Zombie " + std::to_string(i));
	for (int i = 0; i < 5; i++)
		z[i]->announce();
	randomChump("Lolo");
	for (int i = 0; i < 5; i++)
		delete z[i];
	return 0;
}