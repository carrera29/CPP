/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:30:51 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/29 10:23:00 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wReplace.hpp"

std::string	getFileExtension(std::string *name) {
	size_t pos = name->find(".");
	if (pos == std::string::npos)
		return "";
	std::string ext = name->substr(pos, name->length());
	*name = name->substr(0, pos);
	return ext;
}

int main(int argc, char **argv) {
	if (argc == 4) {
		std::string file_name = argv[1];
		File in_file(file_name, 0);
		std::string ext = getFileExtension(&file_name);
		File out_file((file_name + ".replace" + ext), 1);
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		wReplace(&in_file, &out_file, s1, s2);
	}
	else
		std::cout << "Wrong number of arguments\n";
	return 0;
}
