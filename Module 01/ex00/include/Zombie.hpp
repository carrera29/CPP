/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/26 08:11:16 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name) : name(name) {}
		~Zombie() {
			std::cout << "Zombie " << name << " was destroyed" << std::endl;
		}
		void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif