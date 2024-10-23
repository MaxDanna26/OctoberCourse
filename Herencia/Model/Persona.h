#ifndef _PERSONA_H
#define _PERSONA_H
#include <string>
using namespace std;

class Persona {
public: 
    
/**
 * @param Nombre
 * @param Peso
 * @param Altura
 */
Persona(string Nombre, float Peso, float Altura);
    
virtual string to_string();
protected: 
    string Nombre;
    float Peso;
    float Altura;
};

#endif //_PERSONA_H
