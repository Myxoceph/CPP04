/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:09:21 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 18:10:47 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private : 
		Brain *brain;
	public :
		void makeSound() const;
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		~Cat();
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);
};

#endif
