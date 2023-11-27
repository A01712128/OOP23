#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase que hereda de PalabrasRelacionadas con palabras predefinidas sobre OOP
class PalabrasOOP : public PalabrasRelacionadas {
public:
    // Constructor que inicializa con palabras relacionadas a la programación orientada a objetos
    PalabrasOOP() : PalabrasRelacionadas({"setters", "getters", "clases", "herencias", "constructores", "diagramas", "abstraccion", "composicion", "objetos"}) {}
};