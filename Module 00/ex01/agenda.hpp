/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:28:23 by pollo             #+#    #+#             */
/*   Updated: 2023/05/24 11:00:03 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGENDA_HPP
# define AGENDA_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

class Contact {
	public:
		std::string 	name;
		std::string 	last;
		std::string 	nick;
		int long long	num;
		std::string 	secret;
};

class PhoneBook {
	private:
		Contact contacts[8];
		int numContact;
	public:
		PhoneBook() : numContact(0) {}
		void addContact(void);
		void searchContact(void);
};

#endif