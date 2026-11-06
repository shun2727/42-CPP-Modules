/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:49:51 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:28:32 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

/*
	inherits constructor and destructor from claptrap but will print different messages
*/
class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		ScavTrap(const ScavTrap& other);
		
		ScavTrap(std::string name);
		void guardGate(void);
		void attack(const std::string& target);
		
};

#endif
