/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:37:15 by pollo             #+#    #+#             */
/*   Updated: 2024/03/25 20:47:36 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Bureaucrat {

	private:

		const std::string	name;
		int					grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string Name, const int Grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);

		const std::string&	getName() const;
		int 				getGrade() const;

		class GradeTooHightException {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException {
			public:
				const char* what() const throw();
		};

		void incrementGrade(const int increment);
		void decrementGrade(const int decrement);

		void signForm(Form& form) const;

	friend std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

};
