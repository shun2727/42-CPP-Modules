/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:00:23 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 13:15:01 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

static const int m_fractional_bits = 8;
/*
	theres fractional value and fied point bits and im not sure which is which
*/
Fixed::Fixed() : m_fixed_point(0) 
{
	std::cout << "Default constructor called \n";
}

/*
	(shit i needed ai to help understand this...)
	creates seperate object (but nothing is returned like damn look at the funtion)
	Class a(b) <- here a isnt intilizaed yet 
*/
Fixed::Fixed(const Fixed& other) 
{
	std::cout << "Copy constructor called \n";

	m_fixed_point = other.m_fixed_point; //this is trying to initialize the value with its own memoery
}

/*
	copies exsiting object form one to the another (no new memory)
	x = y;
	lhs is assigned to the value of the rhs
*/
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called \n";

	if (this != &other) //guards against self assignment
	{
		//reassign it i guess?? i still dont know why i need to write it here 
		// this->m_fixed_point = other.m_fixed_point; //im not sure why this works
	}
	return (*this); //the this here is referting to the object on the left hand side 
	//the lhs is the one being changed, this will become other and therefore 
}

Fixed::~Fixed() //desructor
{
	std::cout << "Destructor called \n";
}

/*
	returns raw value of fixed point vlaue
*/
int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called \n";
	return (m_fixed_point);
}

/*
	sets the raw value of fixed point value 
*/
void Fixed::setRawBits(int const raw) 
{
	m_fixed_point = raw;
	
}
	