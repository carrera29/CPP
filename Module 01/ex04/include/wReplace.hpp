/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wReplace.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:34:42 by clcarrer          #+#    #+#             */
/*   Updated: 2023/05/29 10:06:31 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WREPLACE_HPP
# define WREPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class	File {
	private:
		std::string		file_name;
		std::fstream	file;
	public:
		File(const std::string name, size_t i);
		~File();
		std::fstream& getFile();
};

void		wReplace(File *in_file, File *out_file, const std::string& s1, const std::string& s2);
std::string	getFileExtension(std::string *name);

#endif