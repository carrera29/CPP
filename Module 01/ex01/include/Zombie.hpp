/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/24 15:52:00 by clcarrer         ###   ########.fr       */
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
		Zombie() {}
		Zombie(std::string name) {
			this->name = name;
		}
		~Zombie() {
			std::cout << "Zombie " << name << " was destroyed" << std::endl;
		}

		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif