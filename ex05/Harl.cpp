/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:59:56 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/12 12:00:39 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug() const {
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special- ketchup burger. "
				 "I really do!" << std::endl;
}

void Harl::_info() const {
	std::cout << "I cannot believe adding extra bacon "
				 "costs more money. You didn’t put enough bacon in my "
				 "burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning() const {
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started working here since "
				 "last month." << std::endl;
}

void Harl::_error() const {
	std::cout << "This is unacceptable! I want to speak "
				 "to the manager now." << std::endl;
}

void Harl::complain(std::string level) const {
	std::string levels[4] = {"DEBUG", "INFO", "WARING", "ERROR"};
	void (Harl::*fptr[4])() const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int i = 0;

	while (i < 4) {
		if (levels[i] == level) {
			(this->*fptr[i])();
			return;
		}
		i++;
	}
	std::cout << "No valid argument give, Harl won´t complain" << std::endl;
}
