/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:00:23 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 17:26:23 by syee             ###   ########.fr       */
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
	
	This receives reference(&) to prevent infinite recursion
	
*/
Fixed::Fixed(const Fixed& other) //const here will accpet both const and non const
{
	std::cout << "Copy constructor called \n";

	m_fixed_point = other.getRawBits(); //this is trying to initialize the value with its own memoery
}

/*
	copies exsiting object form one to the another (no new memory)
	x = y;
	lhs is assigned to the value of the rhs
*/
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called \n";

	if (this != &other) // if this is not equals to other then assign
	{
		//examples show delete here but it depends on whats called
		m_fixed_point = other.getRawBits(); //private resticts access by class and not object
	}
	return (*this); //this is mainy for chained assignments, it returns itself
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
	