/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:25:00 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:56:46 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "A new HumanB was born!" << std::endl;
}

HumanB::~HumanB() {
	std::cout << _name << " has died :(" << std::endl;
}

void HumanB::attack() const {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	_weapon = &newWeapon;
}