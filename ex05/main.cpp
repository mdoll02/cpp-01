/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:38:43 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/12 08:33:02 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "------ Debug Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << "------ Info Level ------" << std::endl;
	harl.complain("INFO");
	std::cout << "------ False Level ------" << std::endl;
	harl.complain("CALM");
	std::cout << "------ Warning Level ------" << std::endl;
	harl.complain("WARING");
	std::cout << "------ Error Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << "------ Empty Level ------" << std::endl;
	harl.complain("");
}
