/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:35:16 by pollo             #+#    #+#             */
/*   Updated: 2024/03/31 21:35:17 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte() {
	std::cout << "ScalarConverte Default constructor called" << std::endl;
}

ScalarConverte::~ScalarConverte() {
	std::cout << "ScalarConverte Default destructor called" << std::endl;
}

ScalarConverte::ScalarConverte(const ScalarConverte& other) {
	std::cout << "ScalarConverte Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

ScalarConverte& ScalarConverte::operator=(const ScalarConverte& other) {
	std::cout << "ScalarConverte Copy assignment called" << std::endl;
	(void)other;
	return *this;
}

static void convert(const std::string& literal) {
	if 
}
