/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:34:42 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/25 14:51:51 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>


class HumanA {
	private:
		std::string weapon;
		std::string name;
	public:
		HumanA(str::string weapon) {}
		~HumanA(){};
	void	attack();
};

#endif