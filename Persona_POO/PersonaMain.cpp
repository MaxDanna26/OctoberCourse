#include <iostream>

#include "Persona.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	std::cout << "Num Personas: " << Persona::getNumPersonas();
	// Clasico
	Persona p1("Pedro",80,1.80);
	// Uso del constructor copia
	Persona p2(p1);
	// Uso del operador = (asignacion)
    Persona p3;
	
	p1.engordar();
	p1.setNombre("Lucas");
	
	std::cout << "Num Personas: " << Persona::getNumPersonas();
		
	std::cout << "Pruebas clase Persona: " << std::endl;
	std::cout << p1.to_string() << std::endl;
	return 0;
}
