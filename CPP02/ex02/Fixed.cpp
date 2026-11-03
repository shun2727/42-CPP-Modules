/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:29:57 by syee              #+#    #+#             */
/*   Updated: 2026/11/03 17:53:05 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

Fixed::Fixed() : m_fixed_point(0)
{

}
/*
	copy constructor, also copies the values but does not return anything
	used when Fixed b(a), so contents of a (other) is asigned ot b
*/
Fixed::Fixed(const Fixed &other)
{
	m_fixed_point = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
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
	//does noting for now
} 
/*
	ex01 onwards
*/
Fixed::Fixed(const int integer_num)
{
	m_fixed_point = integer_num << (m_fractional_bits);
}

Fixed::Fixed(const float float_num)
{
	m_fixed_point = roundf(float_num * (1 << m_fractional_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << m_fractional_bits));
} 

int Fixed::toInt(void) const 
{
	return (getRawBits() / (1 << m_fractional_bits));
}

std::ostream& operator<<(std::ostream& os , const Fixed& other) //the parameterhas to 
{
	os << other.toFloat();
	return (os);
}

/*
	ex02 onwards
*/
//============== comparison ==============
bool Fixed::operator<(const Fixed& that) const
{
	return (this->getRawBits() < that.getRawBits());
}
bool Fixed::operator>(const Fixed& that) const
{
	return (that < *this);
}
bool Fixed::operator<=(const Fixed& that) const
{
	return (!(*this > that));
}
bool Fixed::operator>=(const Fixed& that) const
{
	return (!(*this < that));
}

bool Fixed::operator==(const Fixed& that) const
{
	return(this->getRawBits() == that.getRawBits());
}
bool Fixed::operator!=(const Fixed& that) const
{
	return (!(*this == that));
}

//============== arthimethic ==============
/*
	You are returning an object with those values initilizaed
	unsure ; does it take up memory how is the initilizaiton of the Fixed obect made? 
*/
Fixed Fixed::operator+(const Fixed& that)const 
{
	return Fixed((float)this->toFloat() + that.toFloat());
}

Fixed Fixed::operator-(const Fixed& that)const 
{
	return Fixed((float)this->toFloat() - that.toFloat());
}

/*
	a.operator(&a, that);
	assuming 
	(c*(a*b)) <- cannot return int;
*/
Fixed Fixed::operator*(const Fixed& that)const 
{
	return Fixed((float)this->toFloat() * that.toFloat());
}

Fixed Fixed::operator/(const Fixed& that)const 
{
	return Fixed((float)this->toFloat() / that.toFloat());
}
//============== pre and post increment ==============
/*
	Here i need to return the Fixed& back because you're manipulatig the value
	i think theres no need to pass in a parameter
*/

//pre, + / - then run the code
Fixed Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1); //might not be right because it s
	return (*this);
}

Fixed Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}


/*
	Format is based off cpp formula, 
	int is an unused parameter
	you call the prefix to increment this
*/
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	Fixed::operator++();
	return (old);
	
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	Fixed::operator--();
	return (old);
}

//============== min and max ==============

Fixed& Fixed::min(Fixed &fixed_point_a, Fixed &fixed_point_b)
{
	if (fixed_point_a < fixed_point_a)
		return (fixed_point_a);
	return (fixed_point_b);
}

//if you accept const int then you have to return const as well to prevent it from being modified upon return
const Fixed& Fixed::min(const Fixed &fixed_point_a, const Fixed &fixed_point_b)
{
	if (fixed_point_a < fixed_point_a)
		return (fixed_point_a);
	return (fixed_point_b);
}

Fixed& Fixed:: max(Fixed &fixed_point_a, Fixed &fixed_point_b)
{
	if (fixed_point_a > fixed_point_a)
		return (fixed_point_a);
	return (fixed_point_b);
}
const Fixed& Fixed::max(const Fixed &fixed_point_a, const Fixed &fixed_point_b)
{
	if (fixed_point_a > fixed_point_a)
		return (fixed_point_a);
	return (fixed_point_b);
}
