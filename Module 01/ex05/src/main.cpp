/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:30:51 by clcarrer          #+#    #+#             */
/*   Updated: 2023/08/07 18:48:56 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl h;

	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
	h.complain("hii");
	return 0;
}
