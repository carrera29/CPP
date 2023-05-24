/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:03:08 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/24 15:58:47 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){
	Zombie *Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i] = Zombie(name);
	return Horde;
}