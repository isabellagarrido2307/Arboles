#include "NodoArbol.h"

//Constructor
NodoArbol::NodoArbol(int dato)
{
	this->dato = dato;
	this->der = nullptr;
	this->izq = nullptr;
}

//Setters
void NodoArbol::setDato(int dato)
{
	this->dato = dato;
}
void NodoArbol::setDer(NodoArbol* der)
{
	this->der = der;
}
void NodoArbol::setIzq(NodoArbol* izq)
{
	this->izq = izq;
}

//Getters
int NodoArbol::getDato()
{
	return dato;
}
NodoArbol* NodoArbol::getIzq()
{
	return izq;
}
NodoArbol* NodoArbol::getDer()
{
	return der;
}