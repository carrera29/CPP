/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:46:59 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 16:38:59 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	protected:
		std::string Name;
	public:
		ScavTrap(std::string newName);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);

		void attack(const std::string& target);

		void guardGate(void);
};
