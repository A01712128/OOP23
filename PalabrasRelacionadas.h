

// Definición de una clase base para almacenar palabras relacionadas
class PalabrasRelacionadas {
protected:
    vector<string> palabras;

public:
    // Constructor que inicializa la lista de palabras relacionadas
    PalabrasRelacionadas(const vector<string>& palabras) : palabras(palabras) {}
    
    // Método para obtener las palabras almacenadas
    vector<string> obtenerPalabras() const {
        return palabras;
    }
};