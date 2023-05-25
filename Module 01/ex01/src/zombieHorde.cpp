/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:03:08 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/25 14:25:46 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	Zombie::zombieHorde( int N, std::string name ){
	Zombie* Horde;

	Horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		Horde[i].name = (name + std::to_string(i+1)) ;
	}
	return Horde;
}