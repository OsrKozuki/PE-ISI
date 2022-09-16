/* Autores:
    # Dafne Yamile García Castañeda
    # Getsemani Sarahi Monreal Tapia
    # Oscar Alberto Alor Santiago
*/

#include <stdio.h> // Libreria principal
#include <stdlib.h> // Libreria para la generación del numero random
#include <time.h> // Libreria para la modificacion del tiempo en la ejecucion del codigo

/// #### Funcion Principal #### ///

int funcion(int numrandom)
{
    // INICIO: 
   ///  #### Variables para la separacion de bits del numero random generado #### ///

    int andsoldados = numrandom & 15; //* Se recorren bits *//
    int andoro = numrandom & 496; //* Se recorren bits *//
        andoro = andoro >> 4; //* Se recorren bits *//
    int andcomida = numrandom & 32256; //* Se recorren bits *//
        andcomida = andcomida >> 9; //* Se recorren bits *//
    int andheridos = numrandom & 32768; //* Se recorren bits *//
        andheridos = andheridos >> 15; //* Se recorren bits *//
    // FIN



    // INICIO
    /// #### Variables para la generacion de las velas #### ///
    int vela4 = numrandom & 61440; //* Se recorren bits *//
        vela4 = vela4 >> 12; //* Se recorren bits *//
    int vela3 = numrandom & 3840; //* Se recorren bits *//
        vela3 = vela3 >> 8; //* Se recorren bits *//
    int vela2 = numrandom & 240; //* Se recorren bits *//
        vela2 = vela2 >> 4; //* Se recorren bits *//
    int vela1 = numrandom & 15; //* Se recorren bits *//
    // FIN



    // INICIO 
    /// #### Impresion en pantalla, resultados #### ////

    printf("------------------------------ \n");

    printf("el numero aleatorio es %d \n", numrandom);

    printf("el numero aleatorio en hexa es %X \n", numrandom);

    printf("------------------------------\n");

    printf("soldados = %d \n", andsoldados, andsoldados );
    printf("oro = %d \n", andoro);
    printf("comida = %d \n", andcomida);
    printf("heriddos = %d \n", andheridos);

    printf("------------------------------\n");

    printf("VELA 1 = %X \n", vela4);
    printf("VELA 2 = %X \n", vela3);
    printf("VELA 3 = %X \n", vela2);
    printf("VELA 4 = %X \n", vela1);

    printf("------------------------------\n");
    // FIN



    // INICIO
    /// #### Condicionales para arribar del barco ### ///
    if(andheridos>0 && andsoldados < andoro){
        printf("RGB");
    }
    else if(andsoldados == 0){
        printf("RB");

    }else if(andoro > andcomida && andsoldados <= 6){
        printf("RBG");

    }else if(andcomida < andsoldados/2 ){
        printf("NOUP");
    }else if(andoro > andsoldados){
        printf("RBG");
    }else if(andsoldados == 0 && andoro > 10){
        printf("NOUP");
    }else if(andheridos > 0 && andcomida < andoro){
        printf("RB");
    }else{
        printf("NOUP");
    }
    // FIN


}


/* ### FUNCION PRINCIPAL ###  */
int main(){

    int numrandom; // Declaracion de numero random, variable principal

    srand(time(NULL)); // Se reinicia tiempo tomado por el programa para que se genere un numero aletorio diferente en cada ejecucion //
    numrandom=rand()% 65536; // Se envia un numero random de maximo valor 65536

    funcion(numrandom); // Se llama a la funcion principal enviandole el valor del numero random

    return 0;
}
