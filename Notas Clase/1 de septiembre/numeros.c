#include <stdio.h>

int main ()
{

int primero;
int segundo;
int tercer;

printf("Dame 3 numeros aleatorios sin decimales");
printf("\n");
 scanf("%d \n %d \n %d", &primero, &segundo, &tercer);

    if (primero > segundo && primero > tercer && (primero != segundo && primero != tercer && tercer != segundo))
        {
          printf("El numero mayor es %d \n", primero);
        }
    else if (segundo > primero && segundo > tercer && (primero != segundo && primero != tercer && tercer != segundo))
        {
            printf("El numero mayor es %d \n", segundo);
        }
    else if (tercer > primero && tercer > segundo && (primero != segundo && primero != tercer && tercer != segundo))
        {
            printf("El numero mayor es %d \n", tercer);
        }
    else
        {
            if (primero == segundo && primero != tercer)
                {
                    printf("El primero y segundo numero son iguales");
                }
            else if (primero == tercer && primero != segundo)
                {
                    printf("El primer y el tercer numero son iguales");
                }
                

            else if (segundo == tercer && segundo != primero)
                {
                    printf("El segundo y el tercer numero son iguales");
                }         
            else if ((primero == segundo) && (primero == tercer))
                {
                    printf("Todos los numeros son iguales wacho");
                }
            else
                {
                    printf("No deberias estar aqui");
                }
                
        }


    return 0;
}