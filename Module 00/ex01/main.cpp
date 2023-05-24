/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarrer <clcarrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:24:13 by pollo             #+#    #+#             */
/*   Updated: 2023/05/24 11:56:21 by clcarrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

std::string	ft_parrot(const std::string& question){
	std::string	input;

	while (true) {
		std::cout << question << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT" || input == "exit")
			exit (0);
		if (!input.empty())
			return (input);
	}
	return (0);
}

std::string truncateString(const std::string& s) {
    if (s.length() > 10) {
        return s.substr(0, 9) + '.';
    }
    return s;
}

void	ContactList(const Contact *contacts){
	std::cout << std::setw(10) << std::setfill(' ') << "Index" << " | "
				<< std::setw(10) << std::setfill(' ') << "Name" << " | "
				<< std::right << std::setw(10) << std::setfill(' ') << "Last Name" << " | "
				<< std::right << std::setw(10) << std::setfill(' ') << "Nickname" << " | "
				<< std::endl;
	for (int i = 0; i < 8; i++){
		if (!contacts[i].name.empty() && !contacts[i].last.empty() && !contacts[i].nick.empty()) {
			std::cout	<< std::right << std::setw(10) << std::setfill(' ') << i << " | "
						<< std::right << std::setw(10) << std::setfill(' ') << truncateString(contacts[i].name) << " | "
						<< std::setw(10) << std::setfill(' ') << truncateString(contacts[i].last) << " | "
						<< std::right << std::setw(10) << std::setfill(' ') << truncateString(contacts[i].nick) << " | "
						<< std::endl << std::endl;
		}
	}
}

void	PhoneBook::searchContact(void){
	std::string	input;

	ContactList(contacts);
	if (!contacts[0].name.empty() && !contacts[0].last.empty())
		while (true){
			int i = std::stoi(ft_parrot("Please, insert the index number:"));
			if (i >= 0 && i < 8 && !contacts[i].name.empty() && !contacts[i].last.empty()){
				std::cout << std::endl 
				<< std::left << std::setw(20) << "Name: " << contacts[i].name << std::endl
				<< std::left << std::setw(20) << "Last name: " << contacts[i].last << std::endl
				<< std::left << std::setw(20) << "Nickname: " << contacts[i].nick << std::endl
				<< std::left << std::setw(20) << "Phone num.: " << contacts[i].num << std::endl
				<< std::left << std::setw(20) << "The darkest secr..: " << contacts[i].secret << std::endl
				<< std::endl; std::getline(std::cin, input);
				break ;
			}
			else
				std::cout << "The index number does not match any existence contact" << std::endl;
		}
}

void	PhoneBook::addContact(void){
	int i = 0;
	std::string	num;
	bool valid = false;

	if (numContact < 8)
		i = numContact;
	else
		numContact = 0;
	contacts[i].name = ft_parrot("\nPlease, enter the name:");
	contacts[i].last = ft_parrot("Enter the last name:");
	contacts[i].nick = ft_parrot("Enter the nickname:");
	while (!valid){
		valid = true;
		if ((num = ft_parrot("Enter the phone number:")).length() > 18) {
			std::cout << "Phone number is too long." << std::endl, valid = false;
			continue;
		}
		for (size_t j = 0; j < num.length() && valid; j++){
			if (!std::isdigit(num[j])){
				std::cout << "Invalid phone number format." << std::endl;
				valid = false;
			}
		}
	}
	contacts[i].num = std::stoll(num);
	contacts[i].secret = ft_parrot("Finally, enter their darkest secret..;) :");
	numContact++;
}

int	main(void){
	PhoneBook Book;
	std::string input;

	while (1){
		std::cout << "\nPlease, insert some of these comands:" << std::endl
		<< " * ADD" << std::endl 
		<< " * SEARCH" << std::endl
		<< " * EXIT\n" << std::endl;
		while (true){
			std::cout << "> ";
			std::getline(std::cin, input);
			if (input == "ADD" || input == "add"){
				Book.addContact();
				break ; }
			else if (input == "SEARCH" || input == "search"){
				Book.searchContact();
				break ; }
    		else if (input == "EXIT" || input == "exit")
				return (write(1, "	BYE\n", 5), 0) ;
			else
				std::cout << "\nSorry, the command you have written does not correspond to any option" 
				<< std::endl;
		}
	}
	return (0);
}