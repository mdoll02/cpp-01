/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:38:43 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/05 15:38:47 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {

	std::cout << "--- Creating horde ---" << std::endl;
	Zombie *horde = zombieHorde(5, "Hans");

	std::cout << "--- Announcing horde ---" << std::endl;
	int i = 0;
	while (i < 5) {
		horde[i].announce();
		i++;
	}
	delete[] horde;
}