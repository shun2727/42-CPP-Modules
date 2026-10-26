/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:35:39 by syee              #+#    #+#             */
/*   Updated: 2026/10/26 07:57:37 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl{

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
		void complain(std::string level);
		
};
#endif