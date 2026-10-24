/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:45:39 by syee              #+#    #+#             */
/*   Updated: 2026/10/24 22:27:09 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	
}
HumanB::HumanB(std::string name): name_(name), weapon_(NULL)
{
	
}

void HumanB::attack()
{
	std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
}
/*
	if an object is passed in then how do you assign it to the member variable
*/
void HumanB::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}
