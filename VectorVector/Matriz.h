#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <vector>

class Matriz
{
	int filas,cols;
	std::vector<std::vector<int>> m;
	
	friend std::ostream & operator<<(std::ostream &,const Matriz&);
	
	
	public:
		Matriz(int=10,int=10);
		void set(int f,int c,int val){ this->m.at(f).at(c) = val;}
		int get(int f ,int c){return this->m.at(f).at(c);}
		std::vector<int> getDiagonal();
		~Matriz();
	protected:
};

#endif
