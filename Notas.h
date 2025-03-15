#pragma once
using namespace std;
#include <iostream>
#include <string>

class Notas
{
	private:
		string fechaEvaluacion;
		double notaObtenida;
		double ponderacionEval;

	public:
		// Constructor
		Notas(string fechaEvaluacion, double notaObtenida, double ponderacionEval);

		// Getters
		string getFechaEvaluacion();
		double getNotaObtenida();
		double getPonderacionEval();

		// Setters
		void setFechaEvaluacion(string fechaEvaluacion);
		void setNotaObtenida(double notaObtenida);
		void setPonderacionEval(double ponderacionEval);
};

