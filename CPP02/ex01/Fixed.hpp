/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:33:24 by syee              #+#    #+#             */
/*   Updated: 2026/10/31 22:01:29 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int m_fixed_point;
		static const int m_fractional_bits;
		
	public:
		Fixed(); //constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed &operator=(const Fixed &other); //operation copy constructor
		~Fixed(); //destructor
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		int toInt(void) const;
		float toFloat(void) const; //i forgot what the float behind is for
		Fixed(const int integer_num);
		Fixed(const float float_num);
		void operator<<(const Fixed &other);
	
};