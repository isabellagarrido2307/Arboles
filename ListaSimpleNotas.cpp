#include "ListaSimpleNotas.h"

// Constructor
ListaSimpleNotas::ListaSimpleNotas()
{
	this->inicio = nullptr;
	this->tamano = 0;
}
// Otros metodos
bool ListaSimpleNotas::estaVacia()
{
	return inicio == nullptr;
}

void ListaSimpleNotas::ingresarNota(Notas* nota)
{
	NodoNotas* nuevoNodo = new NodoNotas(nota);
	if (estaVacia())
	{
		inicio = nuevoNodo;
	}
	else
	{
		NodoNotas* aux = inicio;
		while (aux->getSiguiente() != nullptr)
		{
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevoNodo);
	}
	tamano++;
}
void ListaSimpleNotas::mostrarNotas()
{
	if (!estaVacia())
	{
		NodoNotas* aux = inicio;
		while (aux != nullptr)
		{
			aux->getNota()->mostrarNota();
			aux = aux->getSiguiente();
		}
	}
}