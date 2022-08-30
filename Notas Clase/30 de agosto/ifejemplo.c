#include <stdio.h>

float primer;
float segundo;
float tercero; 

int main()
{
 printf("Hola \n");
 printf("Bienvenido al sistema de calificaciones para examenes \n");
 printf("Dame la calificacion del primer parcial: \n");
 scanf("%f", &primer);

 printf("Dame la calificacion del segundo parcial: \n");
 scanf("%f", &segundo);

 printf("Dame la calificacion del tercer parcial: \n");
 scanf ("%f", &tercero);

 
 if (primer > 4 && segundo > 4 && tercero > 4 )
 {
         float promedio = (primer + segundo + tercero) / 3;


      if (promedio >= 6)
      {
         printf("Tienes calificacion aprobatoria /n");
      }
      else
      {
         printf("No pasaste \n");
      }
 }
 else
 {
   printf("El reprobaste, tienes un examen que no pasa el candado \n");
 }
 
 
return 0;

}