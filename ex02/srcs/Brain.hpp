#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define WHITE "\033[1;37m"
#define RED "\033[1;31m"
#define RESET "\033[0m"


class Brain
{
	private :
		std::string ideas[100];
	
	public :
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);
};


#endif