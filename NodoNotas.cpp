#include "NodoNotas.h"

// Constructor
NodoNotas::NodoNotas(Notas* nota)
{
	this->nota = nota;
	this->siguiente = nullptr;
}

// Getters
Notas* NodoNotas::getNota()
{
	return nota;
}

NodoNotas* NodoNotas::getSiguiente()
{
	return siguiente;
}

// Setters
void NodoNotas::setNota(Notas* nota)
{
	this->nota = nota;
}

void NodoNotas::setSiguiente(NodoNotas* siguiente)
{
	this->siguiente = siguiente;
}
