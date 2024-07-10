/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:55:01 by clcarrer          #+#    #+#             */
/*   Updated: 2024/06/07 09:45:02 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
