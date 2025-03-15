#pragma once
class NodoArbol
{
	private:
		int dato;
		NodoArbol* izq;
		NodoArbol* der;

	public:
		//Constructor
		NodoArbol(int dato);

		//Setters
		void setDato(int dato);
		void setIzq(NodoArbol* izq);
		void setDer(NodoArbol* der);

		//Getters
		int getDato();
		NodoArbol* getIzq();
		NodoArbol* getDer();

};
