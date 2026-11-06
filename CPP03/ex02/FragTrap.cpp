/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:16:38 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:31:45 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	m_hit_points = 100;
	m_energy_points = 100; 
	m_attack_damage = 30; 
	m_name = "blank";
	std::cout << "FragTrap Default constructor called \n";
}

FragTrap::FragTrap (std::string name) : ClapTrap::ClapTrap(name)
{
	m_hit_points = 100;
	m_energy_points = 100; 
	m_attack_damage = 30; 
	std::cout << "FragTrap Parameterized constructor called \n";
}
FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap : " << m_name << "\n";
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap::ClapTrap(other)
{
	this->m_hit_points = 100;
	this->m_energy_points = 100; 
	this->m_attack_damage = 30; 
}
//have to explicictly call the operator 
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); // Assign the inherited members
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (m_hit_points <= 0 || m_energy_points <= 0)
	{
		ClapTrap::attack(target);
		return ;
	}
	else
	{
		m_energy_points--;
		std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage <<" points of damage!, it has " << m_energy_points << " energy left \n";
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << m_name << " requests for a high five!\n";
}