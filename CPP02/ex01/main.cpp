/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:27:56 by syee              #+#    #+#             */
/*   Updated: 2026/10/31 23:41:05 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main (void)
{
	Fixed a;
	Fixed const b( 10 ); //uses default constructor that takes in an int
	Fixed const c( 42.42f ); //uses default constructor that takes in a float
	Fixed const d( b ); //uses copy constructor
	a = Fixed( 1234.4321f ); //uses copy assignment operator with default constructor that takes in a float
	
	//all of these call << overloader to print in 
	std::cout << "a is " << a << std::endl; 
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	
	
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return 0;
}