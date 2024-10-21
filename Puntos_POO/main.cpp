#include <iostream>
#include "Puntos.h"
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int escalar,escalar2;
	
	Puntos p;
	Puntos q(-1,7);
	
	std::cout << "p: " + p.to_string() << "q: " + q.to_string() << std::endl;
	
	std::cout << "Teclear un numero entero: " ;
	std::cin >> p;
	
	std::cout << "p: " << p.to_string() << "q.desplazar( " << escalar << ")" << q.to_string() ;
	
	return 0;
}
