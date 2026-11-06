/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:05:09 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:46:32 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG.HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{	
	public :
		Dog();
		~Dog();
		Dog& operator=(Dog& other);
		Dog(const Dog& other);
		
		void makeSound() override;
};

#endif