/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:53 by pollo             #+#    #+#             */
/*   Updated: 2024/10/19 20:38:04 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {

	private:

		std::map<std::string, float> dataPrice;

	public:
	
		BitcoinExchange(const std::string& filePath);
		~BitcoinExchange();

		void	extDataBase(void);
		// void	theRightPrice(const std::string& FilePath);

};

#endif
