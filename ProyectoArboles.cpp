// ProyectoArboles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaSimpleNotas.h"
#include "ListaDobleMaterias.h"


int opcion = 0;
int opcion2 = 0;
string opcionStaged;
bool menu = false;
NodoA Nodo = NodoEstudiante("VerstapenFan", "Gauss", "Matematicas");
Estudiante estudiante = Nodo.estudiante;

while (true) {
    cout << "Bienvenido Gauss, que deseas hacer?" << endl;
    cout << "1. Gestionar materias" << endl;
    cout << "2. Gestionar notas" << endl;
    cout << "3. Salir" << endl;
    getline(cin, opcionStaged);
    opcion = stoi(opcionStaged);

    switch (opcion) {
    case 1:
        system("cls");
        cout << "\nGestion de Materias para: " << estudiante.nombre << "\n";
        cout << "1. Inscribir materia\n";
        cout << "2. Eliminar materia por codigo\n";
        cout << "3. Listar materias\n";
        cout << "4. Actualizar nota final de una materia\n";
        cout << "5. Mostrar notas de una materia\n";
        cout << "6. Volver\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion2;
        cin.ignore(); // Agregar cin.ignore() aquí

        switch (opcion2) { // Cambiar de opcion a opcion2
        case 1: {
            string codigo, nombre;
            cout << "Ingrese codigo de la materia: ";
            getline(cin, codigo);
            cout << "Ingrese nombre de la materia: ";
            getline(cin, nombre);
            Nodo.listaMaterias.agregarMateria(codigo, nombre);
            cout << "Materia inscrita exitosamente.\n";
            break;
        }
        case 2: {
            string codigo;
            cout << "Ingrese codigo de la materia a eliminar: ";
            getline(cin, codigo);
            bool eliminada = Nodo.listaMaterias.eliminarMateria(codigo);
            if (eliminada) {
                cout << "Materia eliminada.\n";
            }
            else {
                cout << "Materia no encontrada.\n";
            }
            break;
        }
        case 3: {
            cout << "Listado de materias:\n";
            Nodo.listaMaterias.mostrarMaterias();
            break;
        }
        case 4: {
            string codigo;
            cout << "Ingrese codigo de la materia: ";
            getline(cin, codigo);
            NodoMateria* nodoMateria = Nodo.listaMaterias.buscarMateria(codigo);
            if (nodoMateria != nullptr) {
                cout << "Notas de la materia " << nodoMateria->materia.nombre << ":\n";
                nodoMateria->materia.listaNotas.mostrarNotas();
            }
            else {
                cout << "Materia no encontrada.\n";
            }
            break;
        }
        case 6:
            break;
        default:
            cout << "Opcion invalida.\n";
        }
        break;

    case 2: {
        string codigo;
        cout << "Ingrese codigo de la materia: ";
        getline(cin, codigo);
        NodoMateria* materia = Nodo.listaMaterias.buscarMateria(codigo); // Cambiar -> a .
        if (materia == nullptr) {
            cout << "Materia no encontrada.\n";
            system("pause");
            break;
        }

        do {
            system("cls");
            cout << "\nGestion de Notas para: " << materia->materia.nombre << "\n";
            cout << "1. Registrar nueva nota\n";
            cout << "2. Mostrar notas\n";
            cout << "3. Volver\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion2;
            cin.ignore();

            switch (opcion2) {
            case 1: {
                string fecha;
                float nota, ponderacion;
                cout << "Ingrese fecha de la evaluacion (dd/mm/aaaa): ";
                getline(cin, fecha);
                cout << "Ingrese nota obtenida (0-20): ";
                cin >> nota;
                cout << "Ingrese ponderacion (en %): ";
                cin >> ponderacion;
                cin.ignore();

                if (nota < 0 || nota > 20 || ponderacion < 0 || ponderacion > 100) {
                    cout << "Datos invalidos. Nota debe ser 0-20 y ponderacion 0-100%.\n";
                }
                else {
                    materia->materia.listaNotas.agregarNota(fecha, nota, ponderacion);
                    cout << "Nota registrada exitosamente.\n";
                }
                break;
            }
            case 2: {
                cout << "Listado de notas:\n";
                materia->materia.listaNotas.mostrarNotas();
                break;
            }
            case 3:
                break;
            default:
                cout << "Opcion invalida.\n";
            }
            system("pause");
        } while (opcion2 != 3);
        break;
    }

    case 3:
        return 0;

    default:
        cout << "Opcion invalida.\n";
    }
}
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
