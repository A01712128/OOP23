#include <iostream>
#include <string>
#include <vector>
#include "PalabrasRelacionadas.h"
#include "PalabrasOOP.h"
#include "Jugador.h"
#include "JuegoAhorcado.h"
#include "Menu.h"

using namespace std;

// Funcion principal del programa
int main() {
    // Mensajes de bienvenida e instrucciones
    cout << "BIENVENIDO A OOP HANGMAN" << endl;
    cout << "DEBERAS ADIVINAR PALABRAS RELACIONADAS" << endl;
    cout << "SI TERMINAS CON TODOS TUS INTENTOS PERDERAS EL JUEGO Y ESTE FINALIZARA." << endl;
    cout << "SI LOGRAS ADIVINAR LA PALABRA ANTES DE ACABAR LOS 6 INTENTOS GANARAS EL JUEGO." << endl;
    cout << "MUCHA SUERTE!" << endl;

    // Inicializacion de variables y juego de palabras relacionadas a OOP
    bool salir = false;
    PalabrasOOP palabrasOOP;
    vector<string> palabrasRelacionadas = palabrasOOP.obtenerPalabras();
    int indicePalabraActual = 0;

    // Ciclo principal del menú
    do {
        Menu::mostrarOpciones();
        int opcion = Menu::obtenerSeleccion();

        switch (opcion) {
            // Opcion para jugar al Ahorcado
            case 1: {
                string palabraSecreta = palabrasRelacionadas[indicePalabraActual];
                string nombreJugador;

                // Solicitud del nombre del jugador y creacion del objeto Jugador
                cout << "Ingrese su nombre: ";
                cin >> nombreJugador;

                Jugador jugador(nombreJugador);
                JuegoAhorcado juego(palabraSecreta, jugador);

                // Ciclo del juego hasta que se gane o se pierda
                while (!juego.haGanado() && !juego.haPerdido()) {
                    char letra;
                    cout << "Ingrese una letra: ";
                    cin >> letra;

                    // Intento de adivinar la letra en la palabra secreta
                    if (!juego.adivinarLetra(letra)) {
                        cout << "Letra incorrecta." << endl;
                    }

                    // Mostrar el estado actual del juego
                    juego.mostrarEstado();
                }

                // Mensaje de resultado del juego
                if (juego.haGanado()) {
                    cout << "¡Felicidades, has ganado!" << endl;
                } else {
                    cout << "Lo siento, has perdido. La palabra era: " << palabraSecreta << endl;
                }

                // Actualización del indice de la palabra para el siguiente juego
                indicePalabraActual = (indicePalabraActual + 1) % palabrasRelacionadas.size();

                break;
            }
            // Opcion para salir del juego
            case 2: {
                salir = true;
                cout << "¡Hasta luego!" << endl;
                break;
            }
            // Opcion por defecto para entrada invalida
            default:
                cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (!salir);

    return 0;
}
