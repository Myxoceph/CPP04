#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

class WrongAnimal
{
	protected :
		std::string type;
	
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		void makeSound() const;
		std::string getType() const;

};

#endif
