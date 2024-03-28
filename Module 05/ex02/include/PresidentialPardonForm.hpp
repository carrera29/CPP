/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:19:54 by pollo             #+#    #+#             */
/*   Updated: 2024/03/26 22:12:33 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm{

	private:

		const std::string	target;

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target_);
		~PresidentialPardonForm();
		
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

		const std::string	getTarget(void);
		void				execute(Bureaucrat const & executor) const;

};
