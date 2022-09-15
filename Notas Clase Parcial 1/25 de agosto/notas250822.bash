"Comando para compilar en C"
gcc main.c -o main

"Descripcion de programa"
#include <stdio.h> // Agrega las liberias
int main() # Todo archvio debe tener una funcion main, toda funcion debe tener un tipo de dato
{
    printf ("Hola Mundo \n");
    return 0; # Regresamos cero porque estamos diciendo que regresamos un int
}

"ES IMPORTANTE DOCUMENTAR AL PROGRAMAR"
Para C usar doble diagonal "//" para comentar y esto sera ignorado por el compilador
Como tal no agarra memoria, la que toma es insignificante.

Un comentario grande o de varias lineas se abre con diagonal asterisco "/*" y se cierra con asterisco diagonal "*/"

"Variables INT en printf"
Para colocar variables dentro de un printf, se usa '%d' que es solo para numeros enteros 
y despues de las comillas van los argumentos

- Se le debe dar un '%' a cada variable, tantos '%' como variables en argumentos.

"Variables float en printf"
Se usa '%f' para imprimir floats en printf

"Variables en ASCII"
Se usa '%c' para imprimir el ASCII Usando el numero