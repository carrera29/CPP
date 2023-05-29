/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:34:42 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/29 13:01:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>

class	Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl() {}
		~Harl() {}
		void complain( std::string level );
};

#endif
