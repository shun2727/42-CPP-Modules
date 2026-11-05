/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:20 by syee              #+#    #+#             */
/*   Updated: 2026/11/05 15:49:20 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap steve = ClapTrap("steve");
	ClapTrap john = ClapTrap("john");

	std::cout << "\nbasic attack :" << "\n";
	john.attack("steve");
	steve.takeDamage(0);
	steve.beRepaired(0);

	std::cout << "\ndraining hit points :" << "\n";
	for (int i = 0; i < 10 ; i++)
		steve.takeDamage(1);

	std::cout << "\nattacking when its down :" << "\n";
	steve.attack("john");

	std::cout << "\nrepairing when its down :" << "\n";
	steve.beRepaired(1);

	std::cout << "\ndraining energy points :" << "\n";
	for (int i = 0; i < 9 ; i++)
		john.beRepaired(1);

	std::cout << "\nrepairing when theres no points :" << "\n";
	john.beRepaired(10);

	std::cout << "\nattacking when theres no points :" << "\n";
	john.attack("steve");

}