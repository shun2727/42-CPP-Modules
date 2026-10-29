/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:34:08 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 11:49:10 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

/*
	do a test to check if wiht copy constructor and without a copy constructor 
	fixed point values are initilized to 0 
*/
int main (void)
{
	

	std::cout << "Expect default constructor for A: ";
	Fixed a; //default constructor 
	std::cout << "Expect default constructor for B (will default constructor be calle for this?): ";
	Fixed b (a); //copy constructor is called here ()
	std::cout << "Expect default constructor for C :";
	Fixed c;

	c = b; //copy assignment operator to be called here (i think when this is done i should be using the getraw bits fuction )
	std::cout << a.getRawBits()<< std::endl;
	std::cout << b.getRawBits()<< std::endl;
	std::cout << c.getRawBits()<< std::endl;
	
	return 0;
}

/*
getraebits isnt called 
copyassignment isnt called (dependent)
getreawbits member funciton isnt called 

getrawbits memebr funciton isnt called before an existing one 
*/