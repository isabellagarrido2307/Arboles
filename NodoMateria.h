#pragma once
#include "Materia.h"

class NodoMateria
{
	private:
		Materia* materia;
		NodoMateria* siguiente;
		NodoMateria* anterior;
	public:
		// Constructor
		NodoMateria(Materia* materia);

		// Getters
		Materia* getMateria();
		NodoMateria* getSiguiente();
		NodoMateria* getAnterior();

		// Setters
		void setMateria(Materia* materia);
		void setSiguiente(NodoMateria* siguiente);
		void setAnterior(NodoMateria* anterior);
};

