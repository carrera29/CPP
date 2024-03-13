/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:21:19 by pollo             #+#    #+#             */
/*   Updated: 2024/02/16 16:13:19 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {

	protected:
	
		std::string type;

		AAnimal();
		AAnimal(const std::string AAnimal_type);

	public:
		
		virtual ~AAnimal() = 0;
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);

		std::string getType() const;

		virtual void makeSound() const;

};

#endif
