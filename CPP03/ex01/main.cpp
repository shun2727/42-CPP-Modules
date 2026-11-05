/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:34 by syee              #+#    #+#             */
/*   Updated: 2026/11/05 21:54:56 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	{
		ScavTrap *bingus = new ScavTrap("bingus");
		ScavTrap a;
		a = *bingus;
		delete bingus;
	}
	std::cout << std::endl;
	{
		//ScavTrap john = ScavTrap("JEADEN");

	}
	
}