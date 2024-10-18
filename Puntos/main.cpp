#include <iostream>
#include "Puntos.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Puntos p;
	Puntos q(-1,7);
	
	std::cout << "p: " + p.to_string() << "q: " + q.to_string() << std::endl;
	
	return 0;
}
