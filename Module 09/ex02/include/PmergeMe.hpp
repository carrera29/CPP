/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:29:57 by pollo             #+#    #+#             */
/*   Updated: 2024/10/30 18:38:41 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

	std::vector<int>	fordJohnsonWithVector(std::vector<int> input);
	std::list<int>		fordJohnsonWithList(std::list<int> input);
	void				printer(std::vector<int> inputV, std::list<int> inputL, int numbers);

#endif
