#pragma once
#include "Notas.h"

class NodoNotas
{
	private:
		Notas* nota;
		NodoNotas* siguiente;
	public:
		// Constructor
		NodoNotas(Notas* nota);

		// Getters
		Notas* getNota();
		NodoNotas* getSiguiente();

		// Setters
		void setNota(Notas* nota);
		void setSiguiente(NodoNotas* siguiente);
};

