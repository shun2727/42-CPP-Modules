/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:30:50 by syee              #+#    #+#             */
/*   Updated: 2026/10/24 23:24:07 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream> //file manipulaiton
#include <iostream>

/*
	takes in three paremeters in order : filename, s1, s2
	replaces every occurence of s1 in the file with s2
	produces a file <filename>.replace
*/
int main(int argc, char **argv)
{
	if (argc != 4)
		return(1);
	
	//creates an object of fstream 
	std::fstream file(argv[1], out);
	if (!file.is_open())
		std::cout << "invalid file" << std::endl;
	
	//getline() <- reaed everything until eof rather then till " "
}