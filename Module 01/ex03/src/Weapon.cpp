/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:34:08 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/07 12:09:35 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& newType) {
	setType(newType);
}

const std::string&	Weapon::getType() {
	return type;
}

void	Weapon::setType(const std::string& newType) {
	type = newType;
}