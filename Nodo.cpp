#include "Nodo.h"

//Constructor
Nodo::Nodo(int dato)
{
	this->dato = dato;
	this->der = nullptr;
	this->izq = nullptr;
}

//Setters
void Nodo::setDato(int dato)
{
	this->dato = dato;
}
void Nodo::setDer(Nodo* der)
{
	this->der = der;
}
void Nodo::setIzq(Nodo* izq)
{
	this->izq = izq;
}

//Getters
int Nodo::getDato()
{
	return dato;
}
Nodo* Nodo::getIzq()
{
	return izq;
}
Nodo* Nodo::getDer()
{
	return der;
}