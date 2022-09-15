#include <stdio.h>
 int validador_de_fiesta(int tequilas, int quien);

int main()
{

    int calif;
    scanf("%d", &calif);
    printf("\n");
    switch (calif)
    {
    case 10:
        printf("BIEN \n");
        break;
    case 9:
        printf("bien \n");
        break;
    case 8:
        printf("Pasable\n");
        break;
    case 7:
        printf("Meh \n");
        break;
    case 6:
        printf("Apenitas \n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("No pasaste, reprobado");
        break;
    
    default:
        printf("Numero no valido");
        break;
    }

    return 0;
}