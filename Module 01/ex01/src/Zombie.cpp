/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:04:33 by clcarrer          #+#    #+#             */
/*   Updated: 2023/09/13 11:46:18 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie() {
	std::cout << name << "A new zombie was created" << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
	std::cout << name << " was created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " was destroyed" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
