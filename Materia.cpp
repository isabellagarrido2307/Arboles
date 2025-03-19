#include "Materia.h"

// Constructor
Materia::Materia(string codigoMateria, string nombreMateria, double notaFinal, ListaSimpleNotas* listaNotas)
{
	this->codigoMateria = codigoMateria;
	this->nombreMateria = nombreMateria;
	this->notaFinal = notaFinal;
	this->listaNotas = listaNotas;
}

// Getters
string Materia::getCodigoMateria()
{
	return codigoMateria;
}

string Materia::getNombreMateria()
{
	return nombreMateria;
}

double Materia::getNotaFinal()
{
	return notaFinal;
}
ListaSimpleNotas* Materia::getListaNotas()
{
	return listaNotas;
}

// Setters
void Materia::setCodigoMateria(string codigoMateria)
{
	this->codigoMateria = codigoMateria;
}

void Materia::setNombreMateria(string nombreMateria)
{
	this->nombreMateria = nombreMateria;
}

void Materia::setNotaFinal(double notaFinal)
{
	this->notaFinal = notaFinal;
}
void Materia::setListaNotas(ListaSimpleNotas* listaNotas)
{
	this->listaNotas = listaNotas;
}