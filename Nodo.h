#pragma once
class Nodo
{
	private:
		int dato;
		Nodo* izq;
		Nodo* der;

	public:
		//Constructor
		Nodo(int dato);

		//Setters
		void setDato(int dato);
		void setIzq(Nodo* izq);
		void setDer(Nodo* der);

		//Getters
		int getDato();
		Nodo* getIzq();
		Nodo* getDer();

};
