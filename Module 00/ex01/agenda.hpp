/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:28:23 by pollo             #+#    #+#             */
/*   Updated: 2023/05/16 09:51:37 by pollo            ###   ########.fr       */
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
		std::string name;
		std::string last;
		std::string nick;
		int long	num;
		std::string secret;
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