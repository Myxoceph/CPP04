/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:06:09 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 18:14:08 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

class Animal
{
	protected :
		std::string type;
		
	public :
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};


#endif
