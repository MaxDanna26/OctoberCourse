#include "Vector.h"
#include <iostream>
#include <algorithm>

Vector::Vector(int n)
{
	this->n = n;
	this->pos = 0;
	this->ptr = new int(n);
}

Vector::Vector(const Vector &v)
{
	//Reservar el mismo tamaño que tenga v
	this->ptr = new int[v.n];
	
	//Copiar los datos del puntero ptr a this
	std::copy(this->ptr, v.ptr+v.pos, this->ptr);
	
	//Copiar el resto de atributos
	this->n = v.n;
	this->pos = v.pos;
}

Vector & Vector::operator=(const Vector &v)
{
	//Liberar la memoria ocupada en this
	delete [] this->ptr;
	
	//Copiar los datos 
	
	
	//Devolver una ref a this
	return *this;
}

bool Vector::push(int item)
{
	if(this->pos < this->n)
	{
		this-> ptr[this->pos] = item;
		this-> pos++;
		return true;
	}
	else
	{
		return false;
	}
}



void Vector::print(){
	std::cout << "[";
	for(int i = 0; i < this-> pos; i++){
		std::cout << this->ptr[i] << " ";
	}
	std::cout << "]" << std::endl;
}	

Vector::~Vector()
{
	delete [] this->ptr;
	this->ptr = nullptr;
}
