#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

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

		const std::string	getName() const;
		int 				getGrade() const;

		class GradeTooHightException {

			public:
				const char* what() const throw() {
					return "\033[31mError: Grade is too hight";
				}

		};

		class GradeTooLowException {

			public:
				const char* what() const throw() {
					return "\033[31mError: Grade is too low";
				}

		};

		class GradeNotValid {

			public:
				const char* what() const throw() {
					return "\033[31mError: Grade not valid";
				}

		};

		void incrementGrade(const int increment);
		void decrementGrade(const int decrement);

	friend std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
		
    	os << "\033[34m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    	return os;
	}

};

#endif
