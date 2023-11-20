#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la clase Jugador
class Jugador {
private:
    string nombre;  // Nombre del jugador
    int intentos;   // Número de intentos del jugador

public:
    // Constructor de la clase Jugador
    Jugador(const string& nombre) : nombre(nombre), intentos(0) {}

    // Método para obtener el nombre del jugador
    const string& getNombre() const {
        return nombre;
    }

    // Método para obtener el número de intentos del jugador
    int getIntentos() const {
        return intentos;
    }

    // Método para incrementar el número de intentos del jugador
    void incrementarIntentos() {
        intentos++;
    }
};

// Definición de la clase JuegoAhorcado
class JuegoAhorcado {
private:
    string palabraSecreta;      // Palabra secreta que el jugador debe adivinar
    string palabraAdivinada;    // Palabra que muestra las letras adivinadas y guiones bajos
    vector<char> letrasIncorrectas;  // Vector que almacena las letras incorrectas adivinadas
    Jugador jugador;            // Jugador que está jugando el juego

public:
    // Constructor de la clase JuegoAhorcado
    JuegoAhorcado(const string& palabraSecreta, const Jugador& jugador)
        : palabraSecreta(palabraSecreta), jugador(jugador) {
        // Inicializar palabraAdivinada con guiones bajos
        palabraAdivinada = string(palabraSecreta.length(), '_');
    }

    // Método para adivinar una letra en la palabra secreta
    bool adivinarLetra(char letra) {
        bool letraCorrecta = false;

        // Recorrer la palabra secreta para comprobar la ocurrencia de la letra
        for (int i = 0; i < palabraSecreta.length(); ++i) {
            if (palabraSecreta[i] == letra) {
                palabraAdivinada[i] = letra;
                letraCorrecta = true;
            }
        }

        // Si la letra no es correcta, incrementar los intentos y registrar la letra incorrecta
        if (!letraCorrecta) {
            jugador.incrementarIntentos();
            letrasIncorrectas.push_back(letra);
        }

        return letraCorrecta;
    }

    // Método para verificar si el jugador ha ganado el juego
    bool haGanado() const {
        return palabraAdivinada == palabraSecreta;
    }

    // Método para verificar si el jugador ha perdido el juego
    bool haPerdido() const {
        return jugador.getIntentos() >= 6;
    }

    // Método para mostrar el estado actual del juego
    void mostrarEstado() const {
        cout << "Palabra a adivinar: " << palabraAdivinada << endl;
        cout << "Letras incorrectas: ";
        for (char letra : letrasIncorrectas) {
            cout << letra << " ";
        }
        cout << endl;
        cout << "Intentos restantes: " << 6 - jugador.getIntentos() << endl;
    }
};

// Definición de la clase Menu
class Menu {
public:
    // Método para mostrar las opciones del menú
    static void mostrarOpciones() {
        cout << "1. Jugar al Ahorcado" << endl;
        cout << "2. Salir" << endl;
    }

    // Método para obtener la elección del usuario
    static int obtenerSeleccion() {
        int opcion;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        return opcion;
    }
};

// Función principal (main) del programa
int main() {
    // Mensajes de bienvenida y reglas del juego
    cout << "BIENVENIDO A OOP HANGMAN" << endl;
    cout << "DEBERAS ADIVINAR LA PALABRA SECRETA, CONTARAS CON UN TOTAL DE 6 INTENTOS." << endl;
    cout << "SI TERMINAS CON TODOS TUS INTENTOS PERDERAS EL JUEGO Y ESTE FINALIZARA." << endl;
    cout << "SI LOGRAS ADIVINAR LA PALABRA ANTES DE ACABAR LOS 6 INTENTOS GANARAS EL JUEGO." << endl;
    cout << "MUCHA SUERTE!" << endl;

    bool salir = false;

    do {
        Menu::mostrarOpciones();
        int opcion = Menu::obtenerSeleccion();

        switch (opcion) {
            case 1: {
                // Palabra secreta y nombre del jugador
                string palabraSecreta = "encapsulamiento";
                string nombreJugador;

                // Solicitar al jugador que ingrese su nombre
                cout << "Ingrese su nombre: ";
                cin >> nombreJugador;

                // Crear un objeto Jugador y un objeto JuegoAhorcado
                Jugador jugador(nombreJugador);
                JuegoAhorcado juego(palabraSecreta, jugador);

                // Bucle principal del juego
                while (!juego.haGanado() && !juego.haPerdido()) {
                    char letra;
                    // Solicitar al jugador que ingrese una letra
                    cout << "Ingrese una letra: ";
                    cin >> letra;

                    // Adivinar la letra y mostrar el estado del juego
                    if (!juego.adivinarLetra(letra)) {
                        cout << "Letra incorrecta." << endl;
                    }

                    juego.mostrarEstado();
                }

                // Mostrar mensaje de victoria o derrota
                if (juego.haGanado()) {
                    cout << "¡Felicidades, has ganado!" << endl;
                } else {
                    cout << "Lo siento, has perdido. La palabra era: " << palabraSecreta << endl;
                }

                break;
            }
            case 2: {
                salir = true;
                cout << "¡Hasta luego!" << endl;
                break;
            }
            default:
                cout << "Opción no valida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (!salir);

    return 0;
}
