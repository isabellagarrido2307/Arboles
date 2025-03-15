#include "NodoMateria.h"

// Constructor
NodoMateria::NodoMateria(Materia* materia)
{
	this->materia = materia;
	this->siguiente = nullptr;
	this->anterior = nullptr;
}

// Getters
Materia* NodoMateria::getMateria()
{
	return materia;
}

NodoMateria* NodoMateria::getSiguiente()
{
	return siguiente;
}

NodoMateria* NodoMateria::getAnterior()
{
	return anterior;
}

// Setters
void NodoMateria::setMateria(Materia* materia)
{
	this->materia = materia;
}

void NodoMateria::setSiguiente(NodoMateria* siguiente)
{
	this->siguiente = siguiente;
}

void NodoMateria::setAnterior(NodoMateria* anterior)
{
	this->anterior = anterior;
}
