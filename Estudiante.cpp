#include "Estudiante.h"

// Constructor
Estudiante::Estudiante(string nombre, int ID, string carrera)
{
	this->nombre = nombre;
	this->ID = ID;
	this->carrera = carrera;
}

// Getters
string Estudiante::getNombre()
{
	return nombre;
}

int Estudiante::getID()
{
	return ID;
}

string Estudiante:: getCarrera()
{
	return carrera;
}

// Setters
void Estudiante::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Estudiante::setID(int ID)
{
	this->ID = ID;
}

void Estudiante::setCarrera(string carrera)
{
	this->carrera = carrera;
}

// Otros metodos
void Estudiante::mostrarEstudiante()
{
	cout << "----------------------------------------" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "ID: " << ID << endl;
	cout << "Carrera: " << carrera << endl;
	cout << "----------------------------------------" << endl;
}
