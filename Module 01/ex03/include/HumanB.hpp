/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:36:32 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/26 12:14:37 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*weapon;
		std::string name;
	public:
		HumanB(std::string newName);
		~HumanB() {}
		void	attack();
		void	setWeapon(Weapon &newWeapon);
};

#endif