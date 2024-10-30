/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:40 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 16:39:08 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

bool	itIsValidAmount(const double amount) {

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

void	extDataBase(std::map<std::string, float> &dataPrice) {
	
	std::ifstream	dataBase("data.csv");
	if (!dataBase.is_open())
		throw std::runtime_error("Error: The file couldn't be open");
	
	std::string			line;
	while (std::getline(dataBase, line)) {
		
		std::stringstream	ss(line);
		std::string			historicalDate;
		float				historicalPrice;
		
		if (std::getline(ss, historicalDate, ',')) {
			ss >> historicalPrice;
			dataPrice[historicalDate] = historicalPrice;
		} else
			throw std::runtime_error("Error: Wrong data format");
		ss.clear();
	}
	dataBase.close();
	
}

void	BitcoinExchange(const std::string& filePath) {
	
	std::map<std::string, float> dataPrice;
	extDataBase(dataPrice);
	
	std::ifstream	file(filePath.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: The file couldn't be open.");

	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line)) {

		std::string date = line.substr(0, 10);
		if (itIsValidDate(date) == false)
			std::cout << "Error: bad input => " << date << std::endl;
		else {
			if (trim(line.substr(10, 3)) != "|") {
				std::cout << "Error: Wrong format." << std::endl;
				continue;
			}
			char* end;
			float amount = std::strtof(trim(line.substr(13)).c_str(), &end);
			if (*end != '\0') {
				std::cout << "Error: invalid number format." << std::endl;
				continue;
			} else if (itIsValidAmount(amount) == true) {
				std::map<std::string, float>::iterator it = dataPrice.lower_bound(date);
				if (it != dataPrice.begin() && it->first != date)
					--it;
				else if (it->first != date) {
					std::cout << "No earlier date found for " << date << std::endl;
					continue;
				}
				std::cout << date << " => " << amount << " = " << amount * it->second << std::endl;	
			}
		}
	}	
	file.close();
}
