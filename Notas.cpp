#include "Notas.h"

// Constructor
Notas::Notas(string fechaEvaluacion, double notaObtenida, double ponderacionEval)
{
	this->fechaEvaluacion = fechaEvaluacion;
	this->notaObtenida = notaObtenida;
	this->ponderacionEval = ponderacionEval;
}

// Getters
string Notas::getFechaEvaluacion()
{
	return fechaEvaluacion;
}

double Notas::getNotaObtenida()
{
	return notaObtenida;
}

double Notas::getPonderacionEval()
{
	return ponderacionEval;
}

// Setters
void Notas::setFechaEvaluacion(string fechaEvaluacion)
{
	this->fechaEvaluacion = fechaEvaluacion;
}

void Notas::setNotaObtenida(double notaObtenida)
{
	this->notaObtenida = notaObtenida;
}

void Notas::setPonderacionEval(double ponderacionEval)
{
	this->ponderacionEval = ponderacionEval;
}
void Notas::mostrarNota()
{
	cout << "----------------------------------------" << endl;
	cout << "Fecha: " << fechaEvaluacion << endl;
	cout << "Nota: " << notaObtenida << endl;
	cout << "Ponderacion: " << ponderacionEval << endl;
	cout << "Puntos obtenidos: " << ponderacionEval*notaObtenida << endl;
	cout << "----------------------------------------" << endl;
}