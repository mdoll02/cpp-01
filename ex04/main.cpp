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

#include <string>
#include <iostream>
#include <fstream>

static void replaceLine(std::string line, const std::string &s1, const std::string &s2, std::ostream &replaceFile) {

	unsigned long pos;

	while ((pos = line.find(s1)) != std::string::npos) {
		line.erase(pos, s1.length());
		line.insert(pos, s2);
	}
	replaceFile << line;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong input! It must be ./sed <filename> <toReplace> <replacement>" << std::endl;
		return 1;
	}

	std::ifstream file;
	file.open(argv[1]);
	if (!file.good()) {
		std::cout << argv[1] << " does not exist!" << std::endl;
		return 1;
	}

	std::string fileName = argv[1];
	fileName.append(".replace");
	const char* fileNameChr = fileName.c_str();
	std::ofstream replaceFile(fileNameChr);
	if (!replaceFile.good()) {
		std::cout << "could not open " << replaceFile << std::endl;
		file.close();
		return 1;
	}

	std::string line;
	std::cout << "Replacing " << argv[2] << " with " << argv[3] << std::endl;
	while (std::getline(file, line)) {
		replaceLine(line, argv[2], argv[3], replaceFile);
		if (line.find('\n') && !file.eof())
			replaceFile << '\n';
	}

	file.close();
	replaceFile.close();
	return 0;
}
