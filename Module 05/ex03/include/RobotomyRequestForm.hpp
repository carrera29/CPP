/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:02:19 by pollo             #+#    #+#             */
/*   Updated: 2024/03/26 22:13:04 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib> 
#include <time.h>

class RobotomyRequestForm : public AForm {

	private:

		const std::string	target;
	
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target_);
		~RobotomyRequestForm();
		
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		const std::string	getTarget(void);
		void				execute(Bureaucrat const & executor) const;

};
