/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:33:24 by syee              #+#    #+#             */
/*   Updated: 2026/11/03 17:21:43 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int m_fixed_point;
		static const int m_fractional_bits = 8;
		
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		//ex01
		int toInt(void) const;
		float toFloat(void) const;
		Fixed(const int integer_num);
		Fixed(const float float_num);
	
		friend std::ostream& operator<<(std::ostream& os , const Fixed& other);	
		
		//ex02
		/*
			comparison operator
		*/
		bool operator<(const Fixed& that) const;
		bool operator>(const Fixed& that) const;
		bool operator<=(const Fixed& that) const;
		bool operator>=(const Fixed& that) const;
		bool operator==(const Fixed& that) const;
		bool operator!=(const Fixed& that) const;
		
		/*
			arthimethic operators, it want to overload it and i assume its to accept fixed
		*/
		Fixed operator+(const Fixed& that) const;
		Fixed operator-(const Fixed& that) const;
		Fixed operator*(const Fixed& that) const;
		Fixed operator/(const Fixed& that) const;
		
		/*
			increment and decrement operators
			pre and post...? should any of these return anything ?
		*/
		//pre
		Fixed operator++();
		Fixed operator--();
		
		//post
		Fixed operator++(int);
		Fixed operator--(int);
		
		/*
			public overloaded member funcitons
			
			static member function means the funciton belongs to the class
		*/
		static Fixed& min(Fixed &fixed_point_a, Fixed &fixed_point_b); //returns the reference to the smaller fixed-point number
		static const Fixed& min(const Fixed &fixed_point_a, const Fixed &fixed_point_b);
		static Fixed& max(Fixed &fixed_point_a, Fixed &fixed_point_b);
		static const Fixed& max(const Fixed &fixed_point_a,const Fixed &fixed_point_b);

};