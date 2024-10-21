#include "Vector.h"
#include <iostream>

Vector::Vector(int n)
{
	this->n = n;
	this->pos = 0;
	this->ptr = new int(n);
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
