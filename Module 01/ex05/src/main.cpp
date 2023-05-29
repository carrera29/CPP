/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:30:51 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/29 13:54:26 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Harl obj;
		obj.complain(argv[1]);
	}
	else
		std::cout << "Wrong number of arguments\n";
	return 0;
}
