/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:40:49 by pollo             #+#    #+#             */
/*   Updated: 2024/10/27 17:40:50 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <string>

class RPN {

	private:

		std::stack<int> operands;

	public:
	
		RPN(const std::string input);
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);

		int operation();

};

#endif
