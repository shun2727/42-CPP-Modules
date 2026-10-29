/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:00:27 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 10:21:32 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{

	private: 
		int m_fixed_point; //to store a fixed poitn number value 
		static const int m_fractional_bits;; //always be integer liratal 8
	
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

};
#endif