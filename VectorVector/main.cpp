#include <iostream>
#include <ctime>
#include <cstdlib>
#include <map>
#include "Matriz.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void testMatriz()
{
	std::srand(std::time(NULL));
	
	Matriz m1;
	
	std::cout << m1 << std::endl;
	
	m1.set(0,0,0);
	std::cout << std::endl;
	
	std::cout << m1 << std::endl;
	
	std::vector<int> diagonal = m1.getDiagonal();
	std::cout << std::endl << "Diagonal Principal: " << std::endl;
	
	for(int valor : diagonal)
	{
		std::cout << valor << " ";
	}
	
	std::cout << std::endl;
}

void testMap()
{
	std::map<std::string, double> precios = {{"PC",1200.00},{"Portatil Hp", 789.99},{"Movil", 500}};
	std::map<std::string,double>::iterator it;
	
	for(it = precios.begin() ; it != precios.end() ; it++){
		std::cout << it-> first << " " << it->second << std::endl;
 	}
}

int main(int argc, char** argv) {
	
	//testMatriz();
	testMap();
	return 0;
}
