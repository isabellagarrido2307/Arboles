#pragma once
using namespace std;
#include <iostream>
#include <string>

class Estudiante
{
	private:
		string nombre;
		int ID;
		string carrera;

	public:
		// Constructor
		Estudiante(string nombre, int ID, string carrera);

		// Getters
		string getNombre();
		int getID();
		string getCarrera();

		// Setters
		void setNombre(string nombre);
		void setID(int ID);
		void setCarrera(string carrera);
		void mostrarEstudiante();
};

