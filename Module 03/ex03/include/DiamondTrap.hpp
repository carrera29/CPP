/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:14:56 by pollo             #+#    #+#             */
/*   Updated: 2023/08/31 16:18:54 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ClapTrap, public ScavTrap, public FragTrap {
	private:
		std::string	Name;
	public:
		DiamondTrap(std::string Name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);

		void whoAmI();
};
