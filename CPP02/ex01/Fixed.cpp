/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:29:57 by syee              #+#    #+#             */
/*   Updated: 2026/10/31 23:55:35 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int m_fractional_bits = 8;
//have to be shifted by 8 bits? (one byte has 8 bits)

Fixed::Fixed() : m_fixed_point(0)
{
	
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
	//std::cout << "getRawBits member function called \n";
	return (m_fixed_point);
}

Fixed& Fixed::operator=(const Fixed &other)
{
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
	m_fixed_point = integer_num << (m_fractional_bits - 1);
}

/*
	It converts float to the corresponding fixed-point value
	current fixed point :  00000000 00000000 00000000(exponent) . 00000000(mantisa)
											^ (need to convert to)
	floats : 0 (signed) 00000000 (exponent) . 00000000 00000000 0000000 (mantisa)
	
*/
Fixed::Fixed(const float float_num) //float to fixed float (so move the decimal point to the right)
{
	m_fixed_point = (int)float_num / (15 - 1); //ot sure but its assuming it since int to fixed /8 , this will add ontop of the 8 b
}
//it should be int to fixed point to float
/*
	converts fixed_point value to float
*/
float Fixed::toFloat(void) const //it will not change the values that were taken from the getter
{
	return (getRawBits() << 15);
} 

/*
	converts fixed_point value to integer
*/
int Fixed::toInt(void) const 
{
	return (getRawBits() / (1 << 8)); //1 << 8 is just 256 due to 1 00000000
}

/*
	An overload of the insertion («) operator that inserts a floating-point representation
	of the fixed-point number into the output stream object passed as a parameter.
	

	try to overload the << of the std
*/
void std::operator<<(const Fixed& other) //the parameterhas to 
{
	//if it takes the floating point to a fixed point then whey is it only the whole numbers shown 
	std::cout << other.getRawBits();
}
