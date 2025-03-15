#pragma once
#include "NodoNotas.h"

class ListaSimpleNotas
{
	private:
		NodoNotas* inicio;
		int tamano;
	public:
		// Constructor
		ListaSimpleNotas();

		// Otros metodos
		bool estaVacia();
		void ingresarNota(Notas* nota);
		void calcularNotaPonderada()
};

