/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:25:12 by pollo             #+#    #+#             */
/*   Updated: 2024/03/28 13:42:57 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class Intern {

	public:

		Intern();
		~Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);

		AForm* makeForm(const std::string formName, const std::string formTarget);

};
