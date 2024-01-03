/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:22:30 by clcarrer          #+#    #+#             */
/*   Updated: 2023/12/28 22:11:00 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	static const int Nideas = 100;
	
	public:

		std::string ideas[Nideas];
		
		Brain();
		virtual ~Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
};

#endif