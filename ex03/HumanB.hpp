/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:25:00 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:25:06 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);

	~HumanB();

	void attack() const;

	void setWeapon(Weapon &newWeapon);

private:
	std::string _name;
	Weapon *_weapon;
};


#endif
