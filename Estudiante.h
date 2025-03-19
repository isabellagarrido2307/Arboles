#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "ListaDobleMaterias.h"

class Estudiante
{
	private:
		string nombre;
		string ID;
		string carrera;
		ListaDobleMaterias* listaMaterias;

	public:
		// Constructor
		Estudiante(string nombre, string ID, string carrera, ListaDobleMaterias* listaMaterias);

		// Getters
		string getNombre();
		string getID();
		string getCarrera();
		ListaDobleMaterias* getListaMaterias();

		// Setters
		void setNombre(string nombre);
		void setID(string ID);
		void setCarrera(string carrera);
		void setListaMaterias(ListaDobleMaterias* listaMaterias);
		void mostrarEstudiante();
};

