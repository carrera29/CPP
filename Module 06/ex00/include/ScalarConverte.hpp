#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

# include <iostream>

class ScalarConverte {

	private:

		ScalarConverte();
		ScalarConverte(const ScalarConverte& other);
		ScalarConverte& operator=(const ScalarConverte& other);

	public:
	
		~ScalarConverte();

		static void convert(const std::string& literal);

};

#endif
