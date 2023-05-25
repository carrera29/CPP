/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:13:41 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/25 14:49:45 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class	Zombie {
	private:
		std::string name;
	public:
		Zombie() {}
		Zombie(std::string name) : name(name) {}
		~Zombie() {
			std::cout << name << " was destroyed" << std::endl;
		}
		void announce( void );
		static Zombie* zombieHorde( int N, std::string name );
};

#endif