#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

	private:

		const std::string	name;
		int					grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string Name, int Grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);

		const std::string	getName();
		int 				getGrade();

		class GradeTooHightException {

			public:
				const char* what() const throw() {
					return "Grade is too hight";
				}

		};

		class GradeTooLowException {

			public:
				const char* what() const throw() {
					return "Grade is too low";
				}

		};

		void incrementGrade(const int increment);
		void decrementGrade(const int decrement);

	friend std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat) {
    	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    	return os;
	}

};

#endif
