/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:37:21 by pollo             #+#    #+#             */
/*   Updated: 2024/06/07 09:52:18 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form {

	private:

		const std::string	name;
		bool				isSigned;
		int					requiredToSign;
		int					requiredToExecute;

	public:

		Form();
		Form(const std::string Name, const int toSign, const int toExecute);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);

		const std::string	getName() const;
		bool 				getSigned() const;
		int 				getRequiredtosign() const;
		int 				getRequiredtoexecute() const;

		void				beSigned(const Bureaucrat& buro);

		class GradeTooHighException {
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException {
			public:
				const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const Form& form);
