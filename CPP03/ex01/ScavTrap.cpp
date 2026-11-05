/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:01:12 by syee              #+#    #+#             */
/*   Updated: 2026/11/05 22:06:56 by syee             ###   ########.fr       */
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
        m_guard_gate = other.m_guard_gate; // Assign ScavTrap's own member
    }
    return *this;
}