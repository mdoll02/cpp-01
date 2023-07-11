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

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce() const;
		void setName(std::string name);

	private:
		std::string _name;

};

Zombie*    zombieHorde( int N, std::string name );

#endif
