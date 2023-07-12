/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:53 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:57:00 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weaponType) : _name(name), _weapon(weaponType)
{
	std::cout << "A new HumanA was born!" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << _name << " has died :(" << std::endl;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}