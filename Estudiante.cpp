#include "Estudiante.h"

// Constructor
Estudiante::Estudiante(string nombre, string ID, string carrera, ListaDobleMaterias* listaMaterias)
{
	this->nombre = nombre;
	this->ID = ID;
	this->carrera = carrera;
	this->listaMaterias = listaMaterias;
}

// Getters
string Estudiante::getNombre()
{
	return nombre;
}

string Estudiante::getID()
{
	return ID;
}

string Estudiante:: getCarrera()
{
	return carrera;
}
ListaDobleMaterias* Estudiante::getListaMaterias()
{
	return listaMaterias;
}

// Setters
void Estudiante::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Estudiante::setID(string ID)
{
	this->ID = ID;
}

void Estudiante::setCarrera(string carrera)
{
	this->carrera = carrera;
}
void Estudiante::setListaMaterias(ListaDobleMaterias* listaMaterias)
{
	this->listaMaterias = listaMaterias;
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
