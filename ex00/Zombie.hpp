/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:20:51 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/05 15:21:04 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie(std::string name);

	~Zombie();

	void announce() const;

private:
	std::string _name;

};

Zombie *newZombie(std::string name);

void randomChump(std::string name);


#endif
