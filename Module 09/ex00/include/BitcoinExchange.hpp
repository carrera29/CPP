/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:53 by pollo             #+#    #+#             */
/*   Updated: 2024/09/13 17:47:11 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {

	private:

		std::map<std::string, float> dataPrice;

	public:
	
		BitcoinExchange(const std::string& filePath);
		~BitcoinExchange();

		// void	theRightPrice(const std::string& FilePath);

};

#endif
