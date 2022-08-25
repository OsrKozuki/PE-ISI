#include <stdio.h>

int main() 
{
  float PGansito;
  float dinero;

  printf ("Sistema de tienda de gansitos ultra \n");
  printf("Dame el precio del gansito al cual se va a vender: ");
  scanf("%f", &PGansito);
  printf("El precio establecido es %.2f \n", PGansito);
  printf("Inserta el dinero disponible para comprar los gansitos: ");
  scanf("%f", &dinero);

  float gansitos = dinero / PGansito;

  printf("Actualmente solo puedes obtener %.2f gansitos \n", gansitos);

    return 0;
}