/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:53 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/11 11:56:54 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weaponType);

	~HumanA();

	void attack() const;

private:
	std::string _name;
	Weapon &_weapon;
};


#endif
