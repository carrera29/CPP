/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:29:12 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 22:06:58 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int Size) : size(Size) {};

Span::~Span() {};

Span::Span(const Span& other) {
	if (this != &other)
		*this = other;
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
		this->size = other.size;
	return *this;
}

void Span::addNumber(const int number) {
    if (this->numbers.size() >= this->size)
		throw SpanIsFull();
	this->numbers.push_back(number);
}

int Span::shortestSpan() {
	if (this->numbers.size() <= 1)
		throw NotSpanFound();
	std::vector<int> sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int shortes = *std::max_element(numbers.begin(), numbers.end());
	for (size_t i = 1; i < sortedNumbers.size(); i++) {
		int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < shortes)
			shortes = span;
	}
	return shortes;
}

int Span::longestSpan() {
	if (this->numbers.size() <= 1)
		throw NotSpanFound();
	unsigned int minNum = *std::min_element(numbers.begin(), numbers.end());
	unsigned int maxNum = *std::max_element(numbers.begin(), numbers.end());
	return (maxNum - minNum);
}

const char* Span::SpanIsFull::what() const throw() {
	return "Span is full. Can not add more numbers";
}

const char* Span::NotSpanFound::what() const throw() {
    return "Not enough numbers to find a span";
}
