/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:37:21 by pollo             #+#    #+#             */
/*   Updated: 2024/01/28 21:52:59 by pollo            ###   ########.fr       */
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

	protected:

		void	setSigned(bool value);

	public:

		AForm();
		AForm(const std::string Name, const int toSign, const int toExecute);
		virtual ~AForm() = 0;
		AForm(const AForm& other);
		virtual AForm& operator=(const AForm& other) = 0;

		virtual const std::string	getName() const = 0;
		virtual bool 				getSigned() const = 0;
		virtual int 				getRequiredtosign() const = 0;
		virtual int 				getRequiredtoexecute() const = 0;

		virtual void				beSigned(const Bureaucrat& buro) = 0;

		class GradeTooHighException {
			public:
				virtual const char* what() const throw() = 0;
		};
		
		class GradeTooLowException {
			public:
				virtual const char* what() const throw() = 0;
		};

		class GradeNotValid {
			public:
				virtual const char* what() const throw() = 0;
		};

		friend std::ostream& operator<<(std::ostream& os, AForm& form);

};
