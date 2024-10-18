#include <iostream>
#include "Puntos.h"
#include <cmath>

Puntos::Puntos()
{
}

// Lista de iniciadores, se ejecutan antes del cuerpo
Puntos::Puntos(int x2,int y2):x(x2),y(y2){};

void Puntos::desplazar(int valor){
	//Modifica a this
	this-> x *= valor;
	this-> y *= valor; 
}

Puntos Puntos::desplazarCopia(int valor){
	//Devuelve una copia modificada, pero this se queda igual que antes.
	Puntos aux(*this);
	
	aux.desplazar(valor);
	return aux;
}

std::string to_string() const{
	return "[" + std::to_string(this-> x) + "," + std::to_string(this-> y) + "]";
}

Puntos::~Puntos()
{
}
