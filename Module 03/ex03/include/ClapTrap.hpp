/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:51:46 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 14:11:47 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	Hit;
		unsigned int	Energy;
		unsigned int	Attack;
	public:
		ClapTrap(std::string newName);
		~ClapTrap();
		ClapTrap(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		static void getValues(const ClapTrap& name);
		static void getName(const ClapTrap& name);
};
