#pragma once
#include "NodoMateria.h"

class ListaDobleMaterias
{
	private:
		NodoMateria* inicio;
		NodoMateria* fin;
		int tamano;

	public:

		ListaDobleMaterias();

		bool estaVacia();
		void agregarMateria(Materia* materia);
		bool eliminarMateria(string codigoMateria);
		void buscarMateria(string codigo);
		void mostrarMaterias();
}; 

