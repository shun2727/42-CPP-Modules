/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:38:55 by syee              #+#    #+#             */
/*   Updated: 2026/10/24 22:26:26 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
	private: 
		std::string name_;
		Weapon *weapon_;

	public:
		HumanB();
		HumanB (std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif