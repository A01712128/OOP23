#ifndef JUEGOAHORCADO_H
#define JUEGOAHORCADO_H
#include <iostream>
#include <string>
#include <vector>
#include "Jugador.h"

using namespace std;

// Definición de la clase JuegoAhorcado
class JuegoAhorcado {
private:
    string palabraSecreta;
    string palabraAdivinada;
    vector<char> letrasIncorrectas;
    Jugador jugador;

public:
    // Constructor que inicializa la palabra secreta, la palabra adivinada y el jugador
    JuegoAhorcado(const string& palabraSecreta, const Jugador& jugador)
        : palabraSecreta(palabraSecreta), palabraAdivinada(string(palabraSecreta.length(), '_')), jugador(jugador) {}

    // Método para adivinar una letra en la palabra secreta
    bool adivinarLetra(char letra) {
        bool letraCorrecta = false;

        // Verifica si la letra está en la palabra secreta y actualiza la palabra adivinada
        for (int i = 0; i < palabraSecreta.length(); ++i) {
            if (palabraSecreta[i] == letra) {
                palabraAdivinada[i] = letra;
                letraCorrecta = true;
            }
        }

        // Si la letra no está en la palabra secreta, se incrementan los intentos y se registra la letra incorrecta
        if (!letraCorrecta) {
            jugador.incrementarIntentos();
            letrasIncorrectas.push_back(letra);
        }

        return letraCorrecta;
    }

    // Método para verificar si se ha ganado el juego
    bool haGanado() const {
        return palabraAdivinada == palabraSecreta;
    }

    // Método para verificar si se ha perdido el juego
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
#endif
