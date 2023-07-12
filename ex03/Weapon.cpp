/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:13 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:56:29 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	if (type.empty())
		_type = "hands";
	else
		_type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string newType)
{
	if (newType.empty())
		_type = "hands";
	else
		_type = newType;
}