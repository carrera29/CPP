/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:31:08 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/26 11:55:16 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon{
	private:
		std::string type;
	public:
		Weapon(const std::string& newType);
		~Weapon() {}
		const std::string&	getType();
		void				setType(const std::string& newType);
};

#endif