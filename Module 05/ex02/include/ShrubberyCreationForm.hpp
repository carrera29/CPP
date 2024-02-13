/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:05:14 by pollo             #+#    #+#             */
/*   Updated: 2024/02/13 16:18:16 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {

	private:

		const std::string	target;
	
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

		const std::string	getTarget(void);
		void				execute(Bureaucrat const & executor) const;

};
