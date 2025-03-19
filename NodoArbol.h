#pragma once
#include "Estudiante.h"
class NodoArbol
{
	private:
		Estudiante* estudiante;
		NodoArbol* izq;
		NodoArbol* der;
	public:
		//Constructor
		NodoArbol(Estudiante* estudiante);

		//Setters
		void setIzq(NodoArbol* izq);
		void setDer(NodoArbol* der);

		//Getters
		NodoArbol* getIzq();
		NodoArbol* getDer();

};
