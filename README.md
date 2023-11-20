# OOP HANGMAN

Para mi proyecto decidí realizar un juego de ahorcados, el cual trata de palabras acerca de C++, para poder conocer acerca de palabras clave de este lenguaje de programación sobre lo que se ve en clase.


## Bases del juego

Mi juego consta de un total de 10 palabras clave.
 - [ ] Setters
 - [ ] Getters
 - [ ] Clases
 - [ ] Herencias
 - [ ] Constructores
 - [ ] Encapsulamiento
 - [ ] Diagramas
 - [ ] Abstraccion
 - [ ] Composicion
 - [ ] Objetos
 
Para ganar el juego el jugador deberá adivinar correctamente la palabra secreta.
Para cada palabra tendrá un total de 6 intentos.

## Reglas del juego

- El jugador contará con un total de 6 intentos para adivinar cada palabra.
- Al finalizar los 6 intentos el juego acabará.
- Para ganar el juego el jugador deberá adivinar la palabra asignada.
- Las palabras deben escribirse todas en minúsculas y sin acentos


## Avance del juego

Por ahora el código proporcionado en el main.cpp simplemente compila para que el jugador adivine solo 1 palabra la cual es:
- encapsulamiento
  
Cada palabra incorrecta al jugador se le resta 1 intento y al finalizar si el jugador no logra adivinar la palabra se le mostrará la palabra.

## Librerías del juego

1.  **iostream:** Para la entrada y salida estándar. 
Contiene objetos como `cin` (entrada estándar) y `cout` (salida estándar).
    
3.  **string:** Para trabajar con objetos de cadena de caracteres (`std::string`).
    
4.  **vector:** Para utilizar la clase `vector`, que proporciona una implementación de un contenedor dinámico para almacenar elementos.
