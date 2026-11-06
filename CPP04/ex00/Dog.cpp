/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:05:02 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:48:53 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor called for Dog" << std::endl;
	type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
}
Dog& Dog::operator=(Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
}

void Dog::makeSound()
{
	std::cout << "Woof arf arf" << std::endl;
}