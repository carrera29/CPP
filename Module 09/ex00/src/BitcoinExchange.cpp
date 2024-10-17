/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:40 by pollo             #+#    #+#             */
/*   Updated: 2024/10/15 19:35:43 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

bool	itIsValidDate(const std::string& date) {

	int	year, month, day;

	if (date.length() != 10 || date[4] != '-' || date[7] != '-') return false;
	
	std::stringstream	ss(date.substr(0, 4));
	ss >> year;
	if (ss.fail() || year < 1000 || year > 2024) return false;

	ss.clear(); ss.str(date.substr(5, 2)); ss >> month;
	if (ss.fail() || month < 1 || month > 12) return false;
		
	ss.clear(); ss.str(date.substr(8, 2)); ss >> day;
	if (ss.fail() || day < 1 || day > 31) return false;

	return true;
}

bool	itIsValidAmount(const int amount) {

	if (amount < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (amount > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}


std::string trim(const std::string& str) {

	std::string::size_type	start = 0;
	std::string::size_type	end = str.length();

	while (start < end && std::isspace(str[start]))
		++start;
	while (end > start && std::isspace(str[end - 1]))
		--end;
	return str.substr(start, end - start);
}


BitcoinExchange::BitcoinExchange(const std::string& filePath) {
	
	// std::ifstream		dataBase("../data.csv");
	std::ifstream		file(filePath);

	if (!file.is_open())
		throw std::runtime_error("Error: The file couldn't be open");

	std::string	line;
	// while (std::getline(dataBase, line)) {

	// 	std::stringstream	ss(line);
	// 	std::string			historicalDate;
	// 	float				historicalPrice;

	// 	if (std::getline(ss, historicalDate, ',') && (ss >> historicalPrice))
	// 		dataPrice[historicalDate] = historicalPrice;	
	// 	else 
	// 		throw std::runtime_error("Error: Wrong data format");
	// 	ss.clear();
	// }
	// dataBase.close();

	while (std::getline(file, line)) {
		
		std::stringstream	ss(line);
		float				amount;
		
		std::string date = line.substr(0, 10);
		if (itIsValidDate(date) == false)
			std::cout << "Error: bad input => " << date << std::endl;
		if (trim(line.substr(11, 13)) != "|")
			std::cout << "Error: Wrong format" << std::endl;
		// else if (itIsValidAmount(amount)) {
		// 	if (dataPrice.find(date) != dataPrice.end())
		// 		std::cout << date << " => " << amount << " = " << dataPrice[date] * amount << std::endl;
		// }
		else {
			std::cout << "OK -> " << date << std::endl;
			ss >> amount;
		}
		ss.clear();
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange() {}

// void	BitcoinExchange::theRightPrice(const std::ifstream& file) {
	
	
	
// }
