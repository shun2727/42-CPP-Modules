/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:33:24 by syee              #+#    #+#             */
/*   Updated: 2026/10/29 18:39:18 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int m_fixed_pount;
		static const int m_fractional_bits;
		
	public:
		Fixed(); //constructor
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other); //copy constructor
		Fixed &operator=(const Fixed &other); //operation copy constructor
		~Fixed(); //destructor
		
		float toFloat(void) const; //i forgot what the float behind is for
		int toInt(void) const;
		
		//this is for bit shifting
		void operator<<();
	
};