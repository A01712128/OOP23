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

El código presentado consta de una clase padre la cual es "PalabrasRelacionadas".
Esta es la clase base de la jerarquía de herencias. Las otras clases no tienen una jerarquía de herencia directa más allá de esta clase base; sin embargo, las clases:
- "PalabrasOOP"
- "Jugador"
- "JuegoAhorcado"
Utilizan o se relacionan con la clase "PalabrasRelacionadas" de diferentes maneras.
- "PalabrasOOP" es la clase hija de "PalabrasRelacionadas". (Esta clase tiene un constructor que inicializa la lista de palabras)
- "Jugador" y "JuegoAhorcado" no heredan de ninguna clase, pero "JuegoAhorcado" utiliza un objeto de tipo "Jugador".
La clase JuegoAhorcado utiliza un objeto de tipo Jugador a través de una composición. La composición significa que un objeto de una clase es un miembro de otra clase.


## Librerías del juego

1.  **iostream:** Para la entrada y salida estándar. 
Contiene objetos como `cin` (entrada estándar) y `cout` (salida estándar).
    
3.  **string:** Para trabajar con objetos de cadena de caracteres (`std::string`).
    
4.  **vector:** Para utilizar la clase `vector`, que proporciona una implementación de un contenedor dinámico para almacenar elementos.
