/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:29:57 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 18:48:10 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int m_fractional_bits = 8;

Fixed::Fixed()
{
	
} //constructor

Fixed::Fixed(const int num)
{
	
}
Fixed::Fixed(const float num)
{

}
Fixed::Fixed(const Fixed &other)//copy constructor
{

}

Fixed::Fixed &operator=(const Fixed &other)//operation copy constructor
{
	
}

Fixed::~Fixed()
{

} 

float toFloat(void)const //it will not change the values that were taken from the getter
{
	
} 

int toInt(void) const
{

}

//this is for bit shifting
void operator<<()
{

}