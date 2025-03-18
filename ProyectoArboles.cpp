// ProyectoArboles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaSimpleNotas.h"

void mostrarOpciones() 
{
	cout << "1. Agregar Nota." << endl;
	cout << "2. Mostrar Notas." << endl;
	cout << "3. Salir." << endl;
}

void agregarNota(ListaSimpleNotas* listanotas) {
	string fechaEvaluacion;
	double notaObtenida;
	double ponderacionEval;
	cout << "Fecha de la evaluacion: ";
	cin >> fechaEvaluacion;
	system("cls");
	cout << "Nota obtenida: ";
	cin >> notaObtenida;
	cout << "Ponderacion: ";
	cin >> ponderacionEval;
	system("cls");
	Notas* nota = new Notas(fechaEvaluacion, notaObtenida, ponderacionEval);
	listanotas->ingresarNota(nota);
	cout << "Nota ingresada." << endl;
}
void mostraNotas(ListaSimpleNotas* listanotas) {
	if (listanotas->estaVacia()) {
		cout << "No hay notas ingresadas" << endl;
	}
	else
	{
		listanotas->mostrarNotas();
	}
}
void procesarOpcion(int op, ListaSimpleNotas* listanotas) {
	switch (op)
	{
	case 1:
		agregarNota(listanotas);
		break;
	case 2:
		mostraNotas(listanotas);
		break;
	case 3:
		break;
	default:
		cout << "Opcion no valida" << endl;
		break;
	}
}

int main()
{
	ListaSimpleNotas* listaSimpleNotas = new ListaSimpleNotas();
	int opcion;
	do
	{
		system("cls");
		mostrarOpciones();
		cout << "Opcion: ";
		cin >> opcion;
		system("cls");
		procesarOpcion(opcion, listaSimpleNotas);
		system("pause");
	} while (opcion != 3);
	delete listaSimpleNotas;
	cout << "Programa finalizado." << endl;
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
