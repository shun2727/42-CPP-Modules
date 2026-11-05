/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:15 by syee              #+#    #+#             */
/*   Updated: 2026/11/05 15:49:15 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string m_name;
		int m_hit_points; //ClapTrap health
		int m_energy_points;
		int m_attack_damage;

	public:
		ClapTrap();//constructor
		~ClapTrap();//destructor
		ClapTrap(const ClapTrap& other); //copy constructor
		ClapTrap& operator=(const ClapTrap& other);//copy assignment

		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif