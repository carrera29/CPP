#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>

class Form {

	private:

		const std::string	name;
		bool				Signed;
		const int			requiredToSign;
		const int			requiredToExecute;

	public:

		Form();
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);

		const std::string	getName() const;
		bool 				getSigned() const;
		const int 			getRequiredtosign() const;
		const int 			getRequiredtoexecute() const;

};

#endif
