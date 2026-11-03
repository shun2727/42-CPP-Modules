/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:33:24 by syee              #+#    #+#             */
/*   Updated: 2026/11/01 21:34:36 by syee             ###   ########.fr       */
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
};