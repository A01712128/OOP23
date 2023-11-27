#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definicion de la clase Menu para mostrar opciones y obtener seleccion
class Menu {
public:
    static void mostrarOpciones() {
        cout << "1. Jugar al Ahorcado" << endl;
        cout << "2. Salir" << endl;
    }

    static int obtenerSeleccion() {
        int opcion;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        return opcion;
    }
};
