/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:30:11 by pollo             #+#    #+#             */
/*   Updated: 2024/10/27 18:50:54 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	if (this != &other)
		*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	return *this;
}

int validateNumber(const int number) {

	if (number >= 0)
		return (1);
	return (0);
}

int divisionPare(const unsigned int first, const unsigned int second) {

	std::vector<unsigned int> sorted;
	
	if (first > second)
		sorted.push_back(first), sorted.push_back(second);
	else
		sorted.push_back(second), sorted.push_back(first);
}
