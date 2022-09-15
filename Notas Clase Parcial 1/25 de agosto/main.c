#include <stdio.h> 
int main() 
{
    // Las variables de esta clase
    int a = 80;
    int b = 10;
    int c = 60;
    float d = 10.5;
    int e = d;
    char g = 68;

    int dato;
    int suma = a + b;
    int resta = a - b;
    int multi = a * b;
    float div = a / b;
    int mod = a % b; // Nos da el residuo de una division
    printf("Esto vale a %d \n", a);
    a++;
    printf("Esto vale a %d \n", a);

    dato += 10; // dato = dato + 10;



   // Esta es una funcion para imprimir
   printf ("Hola Mundo %d %i %05d \n", a, b, c);

   // Esto imprime variables en int
   printf("Este es un numero en Hex %x %X \n", c, c);

   //Esto imprime variables en float
   printf("Esto es de un float %.2f \n", d);

   //Se usa el valor del float y se igual en una variable int, no se toman los decimales
   printf("Pasamos de un float a un int %d \n", e);

   // Esto es una suma
   printf("Esto es una suma de a + b = %d \n", a+b);

   // Vamos a imprimir en codigo ASCII
   printf("En char usando ASCII %c \n", g);

   //Se usa para recibir un dato
   printf("Escribe un dato numerico entero aqui: \n");
   fflush(stdout); //
   scanf("%d", &dato);
   printf("El dato que escribiste es: %d \n", dato);

    // Operadores de bits
    int and = a & b;
    int or = a | b;
    int lshift = a << 3;
    int rshift = a >> 2;

    // Operadores comparativos
   if (a == b) //? TRUE, FALSE;
   if (a > b)
   if (a < b)
   if (a <= b)
   if (b >= b)

   /* Programa donde pidas el valor de un gansito
   * en la tienda y 
   * luego pidas el dinero que tienes
   * te calcule de a cuantos te alcanza
   * ver gansito.c
   */


  


    return 0;
}