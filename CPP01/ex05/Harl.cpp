/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:36:36 by syee              #+#    #+#             */
/*   Updated: 2026/10/26 09:15:08 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout<<" cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<< std::endl;
}

void Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain(std::string level)
{
	std::cout << level << " : ";
	/*
		function:
			- returns void, 
			- is a funciton from Harl
			- accepts void
		The array is a pointer, im assigning the address of the funcitons to it
	*/
	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string level_arr[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4 ; i++)
	{
		/*
			specify that its this array (the functions array), need the braces next to it to pass in arguments
		*/
		if (level_arr[i] == level)
			(this->*functions[i])(); //bruh how do you call a function inside an array
	}
	
}
		