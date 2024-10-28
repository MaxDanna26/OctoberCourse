#include "Matriz.h"
#include <cstdlib>
#include <iomanip>

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

std::ostream & operator<<(std::ostream &os ,const Matriz &mat)
{
	for(auto fila :  mat.m){
		for (int valor : fila){
			os << std::setw(2) << std:: setfill(' ') << valor  << " "; 
		}
		os << "\n";
	}
	return os;
}

std::vector<int> getDiagonal(){
	
	int numero;
	std::vector<int> diagonal;
	
	for(int i = 0; i < this->filas ; i++)
	{
		diagonal.push_back(this->m.at(i).at(i)));
	}
	return diagonal;
}
