/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:40:14 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 22:12:17 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>

class Span {

	private:

		unsigned int		size;
		std::vector<int>	numbers;

	public:
	
		Span(const unsigned int Size);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);

		void	addNumber(const int number);
        
        template <typename InputIterator>
        void    addNumbers(InputIterator begin, InputIterator end) {
            for (InputIterator it = begin; it != end; ++it)
                this->addNumber(*it);
        }
		
		int		shortestSpan();
		int		longestSpan();

		class SpanIsFull {
			public:
				const char* what() const throw();
		};

		class NotSpanFound {
			public:
				const char* what() const throw();
		};
		
};

#endif
