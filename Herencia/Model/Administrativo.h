#ifndef _ADMINISTRATIVO_H
#define _ADMINISTRATIVO_H

#include <string>
using namespace std;
#include "Empleado.h"

class Administrativo: public Empleado {
public: 
    
/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
Administrativo(string Nombre, float Peso, float Altura, string Empresa, float Sueldo,Empleado Jefe);
    
string to_string();
protected: 
	Empleado Jefe;
};

#endif //_ADMINISTRATIVO_H
