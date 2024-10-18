#ifndef PUNTOS_H
#define PUNTOS_H

#include <string>

class Puntos
{
	int x,y;
	
	public:
		Puntos();
		Puntos(int,int);
		std::string to_string() const; // funciona para obj constantes y no
		void desplazar(int);
		Puntos desplazarCopia(int);
		~Puntos();
	protected:
};

#endif
