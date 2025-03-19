#include "ListaSimpleNotas.h"

// Constructor
ListaSimpleNotas::ListaSimpleNotas()
{
	this->inicio = nullptr;
	this->tamano = 0;
}
// Otros metodos
bool ListaSimpleNotas::estaVacia()
{
	return inicio == nullptr;
}

void ListaSimpleNotas::ingresarNota(Notas* nota)
{
    NodoNotas* nuevaNota = new NodoNotas(nota);
    if (estaVacia())
    {
        inicio = nuevaNota;
    }
    else {
        NodoNotas* actual = inicio;
        while (actual->getSiguiente() != nullptr)
        {
            actual = actual->getSiguiente();
        }
        nuevaNota->setSiguiente(actual);
    }
}

void ListaSimpleNotas::mostrarNotas() {
    NodoNotas* actual = inicio;
    while (actual != nullptr) {
        cout << "Nota: " << actual->getNota()
            << ", Ponderacion: " << actual->getNota()->getPonderacionEval() << "%"
            << ", Nota Ponderada: " << actual->notaPonderada << endl;
        actual = actual->getSiguiente();
    }
}

float ListaSimpleNotas::calcularNotaFinal()
{
    float total = 0.0f;
    NodoNotas* actual = inicio; //Mira Cabeza
    while (actual != nullptr) {
        total += actual->notaPonderada;
        actual = actual->siguiente;
    }
    return total;
}

//void ListaSimpleNotas::eliminarNotas()
//{
//    NodoNotas* actual = inicio;
//    while (actual != nullptr) {
//        NodoNota* temp = actual;
//        actual = actual->siguiente;
//        delete temp;
//    }
//    cabeza = nullptr;
//}
void ListaSimpleNotas::mostrarNotas()
{
	if (!estaVacia())
	{
		NodoNotas* aux = inicio;
		while (aux != nullptr)
		{
			aux->getNota()->mostrarNota();
			aux = aux->getSiguiente();
		}
	}
}