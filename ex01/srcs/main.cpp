/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:20:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 18:23:17 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// // Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;

	// // Proof of deep copy
	std::cout << "-------------------" << std::endl;
	Dog medor;
	Cat fifi;
	Dog medorCopy = medor;
    Cat fifiCopy = fifi;

	std::cout << std::endl;
	
    std::cout << "Modifying original dog's brain" << std::endl;
    medor.setIdeas(0, "New idea for Medor");
    
    std::cout << "Original dog's idea: " << medor.getIdeas(0) << std::endl;
    std::cout << "Copied dog's idea: " << medorCopy.getIdeas(0) << std::endl;

    std::cout << std::endl;

	std::cout << "-------------------" << std::endl;
	// // Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

}
