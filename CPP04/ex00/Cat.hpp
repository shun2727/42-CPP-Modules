/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:05:04 by syee              #+#    #+#             */
/*   Updated: 2026/11/06 19:45:01 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT.HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{	
	public :
		Cat();
		~Cat();
		Cat& operator=(Cat& other);
		Cat(const Cat& other);
		
		void makeSound() override;
};

#endif