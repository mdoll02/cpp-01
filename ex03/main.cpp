/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:38:43 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:56:37 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Dry stick");
		HumanA franz("Franz", club);
		franz.attack();
		club.setType("Wet noodle");
		franz.attack();
	}
	{
		Weapon club = Weapon("Axe");
		HumanB jeff("Jeff");
		jeff.setWeapon(club);
		jeff.attack();
		club.setType("sword");
		jeff.attack();
	}
	{
		Weapon club = Weapon("Keyboard");
		HumanA Hans("Hans", club);
		Hans.attack();
		club.setType("");
		Hans.attack();
	}
	return 0;
}
