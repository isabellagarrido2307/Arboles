#pragma once
using namespace std;
#include <iostream>
#include <string>

class Materia
{
	private:
		string codigoMateria;
		string nombreMateria;
		double notaFinal;

	public:
		// Constructor
		Materia(string codigoMateria, string nombreMateria, double notaFinal);

		// Getters
		string getCodigoMateria();
		string getNombreMateria();
		double getNotaFinal();

		// Setters
		void setCodigoMateria(string codigoMateria);
		void setNombreMateria(string nombreMateria);
		void setNotaFinal(double notaFinal);
};

