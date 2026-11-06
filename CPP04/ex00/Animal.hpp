/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:03:39 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:42:26 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL.HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string type;
		virtual void makeSound();
		
	public : //orthodox canonical form
		Animal();
		~Animal();
		Animal& operator=(Animal& other);
		Animal(const Animal& other);
		

};

#endif