#ifndef PALABRARELACIONADA_H
#define PALABRARELACIONADA_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de una clase base para almacenar palabras relacionadas
class PalabraRelacionada {
protected:
    vector<string> palabras;

public:
    // Constructor que inicializa la lista de palabras relacionadas
    PalabraRelacionada(const vector<string>& palabras) : palabras(palabras) {}

    // Método para obtener las palabras almacenadas
    vector<string> obtenerPalabra() const {
        return palabras;
    }
};
#endif
