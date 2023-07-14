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
#include <fstream>
#include <sstream>

static void replaceLine(std::string line, const std::string &s1, const std::string &s2, std::ostream &replaceFile) {
	unsigned long pos;

	while ((pos = line.find(s1)) != std::string::npos) {
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	replaceFile << line;
	if (line.find('\n'))
		replaceFile << '\n';
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong input! It must be ./sed <filename> <toReplace> <replacement>" << std::endl;
		return 1;
	}

	std::string inFile(argv[1]);
	std::ifstream file(inFile);
	if (!file.good()) {
		std::cout << inFile << " does not exist!" << std::endl;
		return 1;
	} else if (file.peek() == std::ifstream::traits_type::eof()) {
		std::cout << "The file is empty!" << std::endl;
		file.close();
		return 1;
	}

	std::ofstream replaceFile(inFile + ".replace");
	if (!replaceFile.good()) {
		std::cout << "could not open " << replaceFile << " does not exist!" << std::endl;
		file.close();
		return 1;
	}

	std::string line;
	std::cout << "Replacing " << argv[2] << " with " << argv[3] << std::endl;
	while (std::getline(file, line)) {
		replaceLine(line, argv[2], argv[3], replaceFile);
	}

	file.close();
	replaceFile.close();
	return 0;
}
