
#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Persona.h"
#include <string>
using namespace std;

class Empleado: public Persona {
public: 
    
/**
 * @param Nombre
 * @param Peso
 * @param Altura
 * @param Empresa
 * @param Sueldo
 */
Empleado(string Nombre, float Peso, float Altura, string Empresa, float Sueldo);
    
string to_string();
protected: 
    string Empresa;
    float Sueldo;
};

#endif //_EMPLEADO_H
