/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:29:57 by syee              #+#    #+#             */
/*   Updated: 2026/11/02 18:14:27 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

Fixed::Fixed() : m_fixed_point(0)
{
	std::cout << "Default constructor called \n";
}
/*
	copy constructor, also copies the values but does not return anything
	used when Fixed b(a), so contents of a (other) is asigned ot b
*/
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called \n";
	m_fixed_point = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return (m_fixed_point);
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called \n";
	if (this != &other)
	{
		m_fixed_point = other.getRawBits();
	}
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	m_fixed_point = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called \n";
	return;
} 
/*
	ex01 onwards
*/

/*
	It converts int to the corresponding fixed-point value
*/
Fixed::Fixed(const int integer_num)  //int to fixed float
{
	std::cout << "Int constructor called \n";
	m_fixed_point = integer_num << (m_fractional_bits);
	
}


Fixed::Fixed(const float float_num) //float to fixed float (so move the decimal point to the right)
{
	std::cout << "Float constructor called \n";
	m_fixed_point = roundf(float_num * (1 << m_fractional_bits));

}

/*
	converts fixed_point value to float, assuming all values passed in is fixed point
*/
float Fixed::toFloat(void) const //it will not change the values that were taken from the getter
{
	return ((float)getRawBits() / (1 << m_fractional_bits));
} 

/*
	converts fixed_point value to integer
*/
int Fixed::toInt(void) const 
{
	return (getRawBits() / (1 << m_fractional_bits)); //1 << 8 is just 256 due to 1 00000000
}

/*
	An overload of the insertion («) operator that inserts a floating-point representation
	of the fixed-point number into the output stream object passed as a parameter.
*/
std::ostream& operator<<(std::ostream& os , const Fixed& other) //the parameterhas to 
{
	os << other.toFloat();
	return (os);
}

