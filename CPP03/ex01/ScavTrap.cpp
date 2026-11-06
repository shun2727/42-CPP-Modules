/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:01:12 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 15:36:15 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

/*
	These will print different things
		- constructors
		- destructor 
		- attack()
	
*/
/*
	need to call th 

*/
ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	m_hit_points = 100;
	m_energy_points = 50; 
	m_attack_damage = 20; 
	m_name = "blank";
	std::cout << "ScavTrap Default constructor called \n";
}

ScavTrap::ScavTrap (std::string name) : ClapTrap::ClapTrap(name)
{
	m_hit_points = 100;
	m_energy_points = 50; 
	m_attack_damage = 20; 
	std::cout << "ScavTrap Parameterized constructor called \n";
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap : " << m_name << "\n";
}

//have to explicictly call the operator 
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); // Assign the inherited members
    }
    return *this;
}


/*
	For takeDamage and beRepaired : 
	When a derived class inherits a base class and doesn't provide its own
	implementation of an inherited function, calling that function
	through the derived object will use the base class's implementation.
*/

void ScavTrap::attack(const std::string& target)
{
	if (m_hit_points <= 0 || m_energy_points <= 0)
	{
		ClapTrap::attack(target);
		return ;
	}
	else
	{
		m_energy_points--;
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage <<" points of damage!, it has " << m_energy_points << " energy left \n";
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name <<" is in gatekeeper mode\n";
}



