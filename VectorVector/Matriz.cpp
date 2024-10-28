#include "Matriz.h"
#include <cstdlib>

Matriz::Matriz(int filas, int cols)
{
	int numero;
	std::vector<int> fila;
	this-> filas = filas;
	this-> cols = cols;
	
	for(int i = 0 ; i < filas ; i++)
	{
		fila.clear();
		for(int j = 0 ; j < cols ; j++)
		{
			numero = std::rand() % 100;
			fila.push_back(numero);
		}
		this->m.push_back(fila);
	}
}

Matriz::~Matriz()
{
	
}

std::otream & operator<<(std::ostream &os ,const Matriz &m){
	
}
