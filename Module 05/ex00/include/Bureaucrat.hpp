#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

	private:

		const std::string	name;
		int					range;

	public:

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);

		const std::string	getName();
		int 				getRange();

};

#endif
