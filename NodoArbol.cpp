#include "NodoArbol.h"

//Constructor
NodoArbol::NodoArbol(Estudiante* estudiante)
{
	this->der = nullptr;
	this->izq = nullptr;
}

//Setters
void NodoArbol::setDer(NodoArbol* der)
{
	this->der = der;
}
void NodoArbol::setIzq(NodoArbol* izq)
{
	this->izq = izq;
}

//Getters
NodoArbol* NodoArbol::getIzq()
{
	return izq;
}
NodoArbol* NodoArbol::getDer()
{
	return der;
}