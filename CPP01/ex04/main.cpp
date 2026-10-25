/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:30:50 by syee              #+#    #+#             */
/*   Updated: 2026/10/25 17:06:45 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
/*
	Objective :
		takes in three paremeters in order : filename, s1, s2
		replaces every occurence of s1 in the file with s2
		produces a file <filename>.replace
*/
int main(int argc, char **argv)
{
	std::string str;
	std::string file_name;
	
	if (argc != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return(1);
	}
	
	/*
		creates an object of fstream , second parameter can be ios::in(for input) or ios::out (for output)
		fstream accepting std::string is only avialabel in c++ 11
	*/
	std::fstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "invalid file" << std::endl;
		return(1);
	}
		
	/*
		ofstream (o as in open)
		c-style file manipulaiton is not allowed but for str its allowed
		c_str() <- ofstream accepts it because it becomes char[] rather than char* , allowing for runtime compilaiton
	*/
	std::string old_file = argv[1];
	std::string new_file_name = old_file.append(".replace");
	std::ofstream new_file(new_file_name.c_str());
	
	/*
		getline() <- reads everything until '\n'
	*/
	while (std::getline(file, str))
	{
		replaceString(str, argv[2], argv[3]);
		new_file << str << std::endl;
	}
	
	return (0);
}