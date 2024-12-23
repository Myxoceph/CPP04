#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string ideas[100];
	
	public :
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);
};


#endif
