#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "ListaSimpleNotas.h"

class Materia
{
	private:
		string codigoMateria;
		string nombreMateria;
		double notaFinal;
		ListaSimpleNotas* listaNotas;

	public:
		// Constructor
		Materia(string codigoMateria, string nombreMateria, double notaFinal, ListaSimpleNotas* listaNotas);

		// Getters
		string getCodigoMateria();
		string getNombreMateria();
		double getNotaFinal();
		ListaSimpleNotas* getListaNotas();

		// Setters
		void setCodigoMateria(string codigoMateria);
		void setNombreMateria(string nombreMateria);
		void setNotaFinal(double notaFinal);
		void setListaNotas(ListaSimpleNotas* listaNotas);
};

