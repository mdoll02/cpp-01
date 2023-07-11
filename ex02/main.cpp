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

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address of string: \t\t" << &string << std::endl;
	std::cout << "Address held by stringPTR: \t" << stringPTR << std::endl;
	std::cout << "Address held by stringREF: \t" << &stringREF << std::endl;

	std::cout << "Value of string: \t\t" << string << std::endl;
	std::cout << "Value pointed to by stringPTR: \t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: \t" << stringREF << std::endl;
}