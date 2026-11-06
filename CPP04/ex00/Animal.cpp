/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:04:24 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:47:27 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor called for Animal" << std::endl;
	type = "just an animal";
}
Animal::~Animal()
{
	std::cout << "Destructor called for Animal" << std::endl;
}
Animal& Animal::operator=(Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return;
}
Animal::Animal(const Animal& other)
{
	this->type = other.type;	
}
	
void Animal::makeSound()
{
	std::cout << "I'm an animal" << std::endl;
}