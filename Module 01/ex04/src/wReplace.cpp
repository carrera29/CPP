/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wReplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:24:35 by pollo             #+#    #+#             */
/*   Updated: 2023/08/07 16:49:34 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wReplace.hpp"

File::File(const std::string name, size_t i) : file_name(name) {
	if (!i)
		file.open(name, std::fstream::in);
	else
		file.open(name, std::fstream::out);
	if (!(file.is_open())) {
		std::cout << "Error: The file " << file_name << " could not be opened\n";
		file.close();
	}
}

File::~File() {
	file.close();
}

std::fstream& File::getFile() {
	return file;
}

void	wReplace(File *in_file, File *out_file, const std::string& s1, const std::string& s2) {
	std::string line;
	while (getline(in_file->getFile(), line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
				out_file->getFile() << line.substr(0, pos) << s2;
				line.erase(0, pos + s1.length());
				pos += s1.length();
		}
		out_file->getFile() << line << std::endl;
	}
}