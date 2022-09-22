#include <stdio.h>

int imprimir()
{
    int numeroMes;
    printf("Dame un numero de un mes, los numeros son validos solo del 1 al 12 \n");
    scanf("%d", &numeroMes);
    return numeroMes;
}

int Febrero()
{
    int FebreroM;
    int anioF;
    printf("Dame el anio \n");
    scanf("%d", &anioF);

    anioF = anioF % 4;
    if(anioF == 0)
    {
        printf("Febrero tiene 29 dias \n");
    }
    else
        printf("Febrero tiene 28 dias \n");

}


int main()
{
    int numeroM;
    int FebreroM;


    numeroM = imprimir();

    switch (numeroM)
    {
    case 1:
        printf("Tu mes es Enero y tienes 31 dias \n");
        break;
    case 2:
        Febrero(FebreroM);
        break;
    case 3:
        printf("Tu mes es Marzo y tiene 31 dias \n");
        break;
    case 4:
        printf("Tu mes es Abril y tiene 30 dias \n");
        break;
    case 5:
        printf("Tu mes es Mayo y tiene 31 dias \n");
        break;
    case 6:
        printf("Tu mes es Junio y tiene 30 dias \n");
        break;
    case 7:
        printf("Tu mes es Julio y tiene 31 dias");
        break;
    case 8:
        printf("Tu mes es Agosto y tiene 31 dias");
        break;
    case 9:
        printf("Tu mes es Septiembre y tiene 30 dias \n");
        break;
    case 10:
        printf("Tu mes es Octubre y tiene 31 dias");
        break;
    case 11:
        printf("Tu mes es Noviembre y tiene 30 dias");
        break;
    case 12:
        printf("Tu mes es Diciembre y tiene 31 dias");
        break;
           
    default:
        printf("Eso no fue un numero valido mi loco");
        break;
    }
return 0;
}