/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:34 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 15:03:58 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "\nTesting ScavTrap initilization:" << std::endl;
	{
		ScavTrap *bingus = new ScavTrap("bingus");
		ScavTrap a;
		a = *bingus;
		delete bingus;
	}
	std::cout << "\nTesting ScavTRap moves:" << std::endl;
	{
		ScavTrap john = ScavTrap("john");

		std::cout << "\nbasic attack :" << "\n";
		john.attack("blank");

		std::cout << "\ndraining hit points :" << "\n";
		john.takeDamage(100);

		std::cout << "\nattacking when its down :" << "\n";
		john.attack("blank");

		std::cout << "\nrepairing when its down :" << "\n";
		john.beRepaired(49);

		std::cout << "\nrepairing when theres no points :" << "\n";
		john.beRepaired(1);

		std::cout << "\nattacking when theres no points :" << "\n";
		john.attack("blank");
		
		std::cout << "\nGate Keeper Mode :" << "\n";
		john.guardGate();
		
		std::cout << "\nDestructors called :" << "\n";
	}
}

