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

	std::cout << "--- Normal Zombie ---" << std::endl;
	Zombie zombie("Zombie");
	zombie.announce();

	std::cout << "--- newZombie ---" << std::endl;

	Zombie *Hans = newZombie("newZombie");
	Hans->announce();

	std::cout << "--- randomChump ---" << std::endl;

	randomChump("randomChump");

	delete Hans;
}