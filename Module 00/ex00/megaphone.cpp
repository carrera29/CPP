/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:51:26 by pollo             #+#    #+#             */
/*   Updated: 2023/05/12 22:14:34 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>
#include <unistd.h>

std::string	ft_Trim(const std::string& s){
	size_t first = s.find_first_not_of(" \t\n\r");
	if (first == std::string::npos)
		return s;
	size_t last = s.find_last_not_of(" \t\n\r");
	return s.substr(first, last - first + 1);
}

void	ft_ToUpperCase(char *s){
	for (int i = 0; s[i] != '\0'; i++)
		s[i] = std::toupper(s[i]);
}

int	main(int argc, char **argv){
	if (argc == 1)
		write(1, "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 40);
	else {
		for (int i = 1; i < argc; i++) {
			ft_ToUpperCase(argv[i]);
            std::string trimmed = ft_Trim(argv[i]);
            if (i != argc - 1)
                std::cout << trimmed << " ";
            else
                std::cout << trimmed << "\n";
		}
	}
	return (0);
}
