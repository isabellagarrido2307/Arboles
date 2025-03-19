#include "ListaDobleMaterias.h"

// Constructor
ListaDobleMaterias::ListaDobleMaterias()
{
	this->inicio = nullptr;
	this->fin = nullptr;
	this->tamano = 0;
}
// Otros metodos

bool ListaDobleMaterias::estaVacia()
{
	return inicio == nullptr;
}
void ListaDobleMaterias::agregarMateria(Materia* materia)
{
    NodoMateria* nuevaMateria = new NodoMateria(materia);
    if (estaVacia()) 
    {
        inicio = nuevaMateria;
    }
    else 
    {
        NodoMateria* actual = inicio;
        while (actual->getSiguiente() != nullptr) 
        {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevaMateria);
        nuevaMateria->setAnterior(actual);
    }
}

bool ListaDobleMaterias::eliminarMateria(string codigoMateria)
{
    NodoMateria* actual = inicio;
    while (actual != nullptr) {
        if (actual->getMateria()->getCodigoMateria() == codigoMateria) {
            if (actual->getAnterior() != nullptr) {
                actual->getAnterior()->getSiguiente() = actual->siguiente;
            }
            else {
                inicio = actual->siguiente;
            }
            if (actual->getSiguiente() != nullptr) {
                actual->siguiente->anterior = actual->anterior;
            }
            delete actual;
            return true;
        }
        actual->setSiguiente(actual);
    }
    return false;
}

void ListaDobleMaterias::buscarMateria(string codigo) {
    NodoMateria* actual = inicio;
    while (actual != nullptr) {
        if (actual->materia.codigo == codigo) {
            return actual;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaDobleMaterias::mostrarMaterias() {
    NodoMateria* actual = inicio;
    if (actual == nullptr) {
        cout << "No hay materias inscritas." << endl;
        return;
    }
    while (actual != nullptr) {
        cout << "Codigo: " << actual->materia.codigo << ", Nombre: " << actual->materia.nombre
            << ", Nota Final: " << actual->materia.notaFinal << endl;
        actual = actual->siguiente;
    }
}