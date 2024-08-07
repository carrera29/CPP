/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:40:12 by pollo             #+#    #+#             */
/*   Updated: 2024/08/06 22:27:26 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {

    std::srand(static_cast<unsigned int>(std::time(0)));

    try {

        Span sp(15);

        // Usar un std::vector
        std::vector<int> vec;
        vec.push_back(0);
        vec.push_back(2);
        vec.push_back(5);
        vec.push_back(10);
        vec.push_back(15);

        sp.addNumbers(vec.begin(), vec.end());

        std::list<int> lst;
        lst.push_back(20);
        lst.push_back(25);
        lst.push_back(30);
        lst.push_back(35);
        lst.push_back(40);
        sp.addNumbers(lst.begin(), lst.end());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::vector<int> vec2;
        for (int i = 0; i < 10000; ++i)
            vec2.push_back(std::rand() % 10000);
            
        Span bg(vec2.size());
        bg.addNumbers(vec2.begin(), vec2.end());

        std::cout << bg.shortestSpan() << std::endl;
        std::cout << bg.longestSpan() << std::endl;

    } catch(const Span::SpanIsFull& e) {
        std::cout << e.what() << std::endl;
    } catch(const Span::NotSpanFound& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
