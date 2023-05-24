/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/24 13:59:07 by clcarrer         ###   ########.fr       */
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
		Zombie(std::string name) {
			this->name = name;
		}
		~Zombie() {
			std::cout << "Zombie " << name << " was destroyed" << std::endl;
		}

		void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif