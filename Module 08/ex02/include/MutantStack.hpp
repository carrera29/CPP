/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 08:44:31 by pollo             #+#    #+#             */
/*   Updated: 2024/08/07 10:49:01 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <stdexcept>

template < typename T, typename Container = std::deque<T> >

class MutantStack {

	private:

		Container	c;

	public:

		typedef typename Container::iterator iterator;

		MutantStack() : c() {};
		~MutantStack() {};
		MutantStack(const MutantStack& other) : c(other.c) {};
		MutantStack& operator=(const MutantStack& other) {
			if (*this != *other)
				this->c = other.c;
			return *this;
		}

		void		push(const T& value) {
			c.push_back(value);
		}

		void		pop() {
			c.pop_back();
		}

		T&			top() {
			return c.back();
		}

		bool		empty() {
			return c.empty();
		}

		size_t		size() {
			return c.size();
		}

		const T& operator[](size_t index) const {
			return this->c[index];
		}

		iterator	begin() {
			return c.begin();
		}

		iterator	end() {
			return c.end();
		}

};

#endif
