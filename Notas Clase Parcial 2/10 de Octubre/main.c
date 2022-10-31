#include <stdio.h>
#include <stdlib.h>


int main(){
    srand(time(0));
    int a[5][5];
    int i;
    int j;
    int suma = 0;
    
    for(i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
           a[i][j] = rand()%10;
           // printf("En la fila %d y en la columna %d, esta :", i,j);
           if (j == 0 && i > 0)
           {
                printf(" %d  \n", a[i][j]);
           }
           else
           {
                printf(" %d ", a[i][j]);
           }
           
           suma = suma + a[i][j];

        }
        
    }

    printf(" \n La suma de la matriz es de %d \n", suma);

    return 0;
}