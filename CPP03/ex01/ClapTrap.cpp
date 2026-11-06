/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:48:59 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 14:55:16 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
/*
	The constructors and destructor must also display a message, so your peer-evaluators
can easily see that they have been called.
*/
ClapTrap::ClapTrap() : 
m_hit_points(10), 
m_energy_points(10), 
m_attack_damage(10), 
m_name("blank")
{
	std::cout << "ClapTrap Default constructor called \n";
}
/*
	Overloaded constructor
*/
ClapTrap::ClapTrap(std::string name) : 
m_hit_points(10), 
m_energy_points(10), 
m_attack_damage(0), 
m_name(name)
{
	std::cout << "ClapTrap Parameterized constructor called \n";
}
ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor called for ClapTrap : " << m_name << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) :
m_hit_points(other.m_hit_points), 
m_energy_points(other.m_energy_points), 
m_attack_damage(other.m_attack_damage), 
m_name(other.m_name)
{
	std::cout << "ClapTrap Copy constructor called \n";
}
//i think its supposed to return a claptrap object?
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignment operator called \n";
	/*
		reminder : `this` is a pointer that holds an address. `other` is a reference to an object. `&other` evaluates to the address of the object that `other` refers to, allowing us to compare the two addresses.
	*/
	if (this != &other)
	{
		m_attack_damage = other.m_attack_damage;
		m_energy_points = other.m_energy_points;
		m_hit_points = other.m_hit_points;
		m_name = other.m_name;
	}
	return (*this);
}

/*
	parameters will not refer to another instance of ClapTrap
*/

/*
	- Attacking and repairing each cost 1 energy point
	- ClapTrap cannot do anything if it has no hitpoint or energy point
*/
void ClapTrap::attack(const std::string& target)
{
	if (m_hit_points <= 0)
	{
		std::cout << m_name << " is down and cannot attack \n";	
		return ;
	}
	else if (m_energy_points <= 0)
	{
		std::cout << m_name << " ran out of energy points and cannot attack \n";	
		return ;
	}	
	else
	{
		m_energy_points--;
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage <<" points of damage!, it has " << m_energy_points << " energy left \n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > m_hit_points)
		m_hit_points = 0;
	else	
		m_hit_points -= amount;

	std::cout << m_name << " loses " << amount << " hit points , it has " << m_hit_points << " points left \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energy_points < 0 || m_energy_points < amount )
	{
		std::cout << m_name << " does not have enough energy points and cannot be repaired \n";	
		return;
	}
	else 
	{
		m_hit_points += amount;
		m_energy_points -= amount;
		std::cout << m_name << " repairs itself and now has " << m_hit_points << " hit points , it has " << m_energy_points << " energy left \n";
	}

}
