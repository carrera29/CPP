#pragma once

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string Name);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	
		const std::string	getName() const override;
		bool 				getSigned() const override;
		int 				getRequiredtosign() const override;
		int 				getRequiredtoexecute() const override;

		void				beSigned(const Bureaucrat& buro) override;

		class GradeTooHighException {
			public:
				const char* what() const throw() override;
		};
		
		class GradeTooLowException {
			public:
				const char* what() const throw() override;
		};

		class GradeNotValid {
			public:
				const char* what() const throw() override;
		};

		friend std::ostream& operator<<(std::ostream& os, ShrubberyCreationForm& form);

};
