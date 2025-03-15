#include "Materia.h"

// Constructor
Materia::Materia(string codigoMateria, string nombreMateria, double notaFinal)
{
	this->codigoMateria = codigoMateria;
	this->nombreMateria = nombreMateria;
	this->notaFinal = notaFinal;
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
