#include <stdio.h>
 int validador_de_fiesta(int tequilas, int quien);

int main()
{
    int x = 6;
    if (validador_de_fiesta(x,1) == 1)
    {
        printf("Hay fiesta loco \n");  
    }else
    {
        printf("No hay fiesta, NO \n");
    }

    return 0;
}


// return 1 si si es valido
// returno 0 ai no es valido
// quien 1 == profe
// quien 2 == alumnos
 int validador_de_fiesta(int tequilas, int quien)
    {
        if(quien <= 3)
        {
            printf("NOOOO \n");
        }
    if (( tequilas >= 3 && tequilas <= 8) && quien == 1) 
    {
        return 1;
    }else
    {
        return 0;
    }
                
    }