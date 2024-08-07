/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:37:21 by pollo             #+#    #+#             */
/*   Updated: 2024/06/07 10:13:14 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class AForm {

	private:

		const std::string	name;
		bool				isSigned;
		int					requiredToSign;
		int					requiredToExecute;

	public:

		AForm();
		AForm(const std::string Name, const int toSign, const int toExecute);
		virtual ~AForm() = 0;
		AForm(const AForm& other);
		virtual AForm& operator=(const AForm& other);

		virtual const std::string	getName() const;
		virtual bool 				getSigned() const;
		virtual int 				getRequiredtosign() const;
		virtual int 				getRequiredtoexecute() const;

		virtual void				beSigned(const Bureaucrat& buro);
		virtual void				execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException {
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException {
			public:
				virtual const char* what() const throw();
		};

		class FormNotsigned {
			public:
				virtual const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const AForm& form);
