/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:23:03 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/26 18:49:59 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	replace_line(std::ifstream& file, std::ofstream& outfile, std::string s1, std::string s2)
{
	std::string line;
	while (std::getline(file, line))
	{
		std::string new_line = line;
		std::string tmp;
		size_t position = line.find(s1);
		while (position != std::string::npos)
		{
			tmp = new_line.substr(position + s1.size(), line.size() - 1);
			new_line = new_line.substr(0, position) + s2 + tmp;
			position = new_line.find(s1);
		}
		outfile << new_line << '\n';
	}
	return (0);
}

int	main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cout << "Usage:" << std::endl;
		return (0);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream file(filename.c_str());
	if (!file)
	{
		std::cout << "Failed to open infile" << std::endl;
		return (0);
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cout << "Failed to open outfile" << std::endl;
		return (0);
	}
	replace_line(file, outfile, s1, s2);
	file.close();
	outfile.close();
	return (0);
};
