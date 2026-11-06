/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:34 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 15:45:33 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "\nTesting FragTrap initilization:" << std::endl;
	{
		FragTrap *bingus = new FragTrap("bingus");
		FragTrap a;
		a = *bingus;
		delete bingus;
	}
	std::cout << "\nTesting FragTrap moves:" << std::endl;
	{
		FragTrap john = FragTrap("john");

		std::cout << "\nbasic attack :" << "\n";
		john.attack("blank");

		std::cout << "\ndraining hit points :" << "\n";
		john.takeDamage(100);

		std::cout << "\nattacking when its down :" << "\n";
		john.attack("blank");

		std::cout << "\nrepairing when its down :" << "\n";
		john.beRepaired(99);

		std::cout << "\nrepairing when theres no points :" << "\n";
		john.beRepaired(1);

		std::cout << "\nattacking when theres no points :" << "\n";
		john.attack("blank");
		
		std::cout << "\nhighFivesGuys :" << "\n";
		john.highFivesGuys();
		
		std::cout << "\nDestructors called :" << "\n";
	}
}

