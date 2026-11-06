/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:05:02 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:44:53 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor called for Cat" << std::endl;
	type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
}

//should'nt be calling the base copy constructor or else it will init ot the animal
Cat& Cat::operator=(Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
}

void Cat::makeSound()
{
	std::cout << "Meow mew mew" << std::endl;
}