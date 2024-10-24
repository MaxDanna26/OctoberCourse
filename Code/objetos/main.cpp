#include <iostream>
#include <climits>

#include "Persona.h"
#include "Direccion.h"
#include "Vector.h"


void testPersona(){
	Direccion dir("Gran Via");
	Persona p; // Llama al constructor por defecto	
	
	const Persona p2("Ana", 33, 1.77, dir);
	Persona p3(p2); // Salta el constructor copia!
	Persona p4 = p2;
	Persona *ptr = nullptr;
	
	p = p2; // Salta el operador =   p.operator=(p2)
	
	std::cout << "p: " << p.to_string() <<  std::endl;
	std::cout << "p2: " << p2.to_string() <<  std::endl;
	std::cout << "p3: " << p3.to_string() <<  std::endl;
	
	//p.edad++; OJO el atributo es privado solo se puede modificar desde la propia clase.
	//p2.setNombre("Ana Maria");
	p.setEdad(p.getEdad()+1);
	std::cout << "p: " << p.to_string() <<  std::endl;
	
	// Crear un objeto dinamicamente:
	ptr = new Persona("Alberto", 55, 1.78, Direccion("Callao", 45));
	std::cout << ptr->to_string() <<  std::endl;
	delete ptr;
	
	ptr = nullptr;
}


void testVector(){
	Vector v1(20);
	Vector v2(v1);
	Vector v3;
		
	
	for (int i = 0 ; i < 10 ; i++)
	{
		if (!v1.add(i*10))
			std::cout << "Array lleno ..." << std::endl;		
	}
	
	v3 = v1;
	
	v3.add(999);
	v3.add(1000);
	
	std::cout << "v3 Num elems: " << v3.len() << std::endl;
	v3.print();
	std::cout << std::endl;
	
	int *p;
	const int *ptr;
	
	ptr = v1.getPtr();
	p = const_cast<int *>(ptr);
	p[0] = 99999;
	
	
	std::cout << "v1 Num elems: " << v1.len() << std::endl;
	v1.print();
}

void testStatic(){
	std::cout << "contador: " << Persona::getContador() << std::endl;
	Persona p1;
	Persona p2;
	
	Direccion dir("Gran Via");	
	const Persona p("Ana", 33, 1.77, dir);
	
	Persona p3(p);
	
	std::cout << "contador: " << Persona::getContador() << std::endl;
}

void testOperadores()
{
	Direccion dir("Gran Via", 10);	
	Persona p("Ana", 35, 1.76, dir);
	
	Direccion dir2("Gran Via", 9);	
	Persona p2("Ana", 35, 1.76, dir2);
	
	std::cout << "Direccion: " << dir << std::endl;
	std::cout << "p: " << p << " p2: " << p2 << std::endl;
	
	if (p < p2){	
		std::cout << p.getNombre() <<  " es menor que " << p2.getNombre() << std::endl;
		
	} else if (p == p2) {
		std::cout << p2.getNombre() <<  " es igual a " << p.getNombre() << std::endl;
		
	} else {
		std::cout << " son distintos " << std::endl;
	}	
}

void testLeerEscribir()
{
	Persona per;
	Direccion dir;
	std::string cadena;
		
	std::cout << "Teclear los datos de la direccion:";
	std::cin >> dir;
	std::cin.ignore(INT_MAX, '\n'); // Limpiar el buffer de teclado
	std::cout << "Direccion: " << dir << std::endl;
	
	
	std::cout << "Teclear una frase: ";
	std::getline(std::cin, cadena);
	std::cout << "Frase: " << cadena << std::endl;
	
	std::cout << "Datos de la persona: ";
	std::cin >> per;
	std::cout << "Persona: " << per << std::endl;
}

void testSumaVector()
{
	Vector v1(10);
	Vector v2(10);
	Vector v3(10);
	
	int arr1[] = {23, 6,33,44,22};
	for (int i : arr1){
		v1.add(i);
	}
	
	int arr2[] = {4,5,1};
	for (int i : arr2){
		v2.add(i);
	}
	
	int arr3[] = {10,20,30,40,50};
	for (int i : arr3){
		v3.add(i);
	}
	
	Vector r = v1+v2+v3;
	
	v1.print();
	v2.print();
	v3.print();
	r.print();
}

void testIncPersona()
{
	Direccion dir("Gran Via", 10);	
	Persona p("Ana",30,1.8, dir);
	
	Persona aux = ++p;
	std::cout << "p: " << p << std::endl;
	std::cout << "aux: " << aux << std::endl;
	
	Persona aux2 = p++;
	std::cout << "p: " << p << std::endl;
	std::cout << "aux2: " << aux2 << std::endl;	
}

void postPre(){
	int i=0;
	
	if (i++){
		std::cout << "i != 0" << std::endl;
	} else {
		std::cout << "i == 0" << std::endl;
	}
	
	i=0;
	
	if (++i){
		std::cout << "i != 0" << std::endl;
	} else {
		std::cout << "i == 0" << std::endl;
	}
	
}

int main(int argc, char** argv) {
	//testPersona();
	//testVector();
	//testStatic();
	//testOperadores();
	//testLeerEscribir();
	//testSumaVector();
	//testIncPersona();
	postPre();
	return 0;
}
