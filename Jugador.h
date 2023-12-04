#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definicion de la clase Jugador
class Jugador {
private:
    string nombre;
    int intentos;

public:
    // Constructor que inicializa el nombre del jugador y el contador de intentos
    Jugador(const string& nombre) : nombre(nombre), intentos(0) {}

    // Metodo para obtener el nombre del jugador
    const string& getNombre() const {
        return nombre;
    }

    // Metodo para obtener el numero de intentos del jugador
    int getIntentos() const {
        return intentos;
    }

    // Metodo para incrementar el contador de intentos
    void incrementarIntentos() {
        intentos++;
    }
};
#endif
