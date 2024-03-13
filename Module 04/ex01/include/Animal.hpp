/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:21:19 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:13:19 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	protected:
	
		std::string type;

	public:

		Animal();
		Animal(const std::string animal_type);
		virtual ~Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);

		std::string getType() const;

		virtual void makeSound() const;

};

#endif
