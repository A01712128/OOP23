#ifndef PALABRAOOP_H
#define PALABRAOOP_H
#include <iostream>
#include <string>
#include <vector>
#include "PalabraRelacionada.h"

using namespace std;

// Clase que hereda de PalabrasRelacionadas con palabras predefinidas sobre OOP
class PalabraOOP : public PalabraRelacionada {
public:
    // Constructor que inicializa con palabras relacionadas a la programación orientada a objetos
    PalabraOOP() : PalabraRelacionada({"setters", "getters", "clases", "herencias", "constructores", "diagramas", "abstraccion", "composicion", "objetos"}) {}
};
#endif
