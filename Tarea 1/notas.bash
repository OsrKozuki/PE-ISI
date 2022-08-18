Lenguaje alto.- Python por ejemplo, son mas automaticos y suelen realizar varias tareas por el mismo

Paradigma Estructurada para un lenguaje estructurado:
- Modular
- Jerarquia o "Top Down"
- Estructuras de datos 
- Flujo de control

¿Estructurado?
Los archivos .C se someten a un compilador el cual da un archivo ejecutable:
- .o
- .exe
- "Sin extension"
En caso de fallo no genera algun archivo
Para Linux se puede usar el siguiente comando
gcc main.c -o ejemplo.extension

"Estructura de datos"
La fraccion minima del codigo binario es un BIT el cual es solo un 1 o un 0. 
En el sistema binario funciona de la siguiente manera:
0 - 1
1 -2
10 - 3
11 -4
100 -5
101 -6
111 - 7
1000 - 8
Al requerir un nuevo digito se requiere un bit. 
La cantidad de bits que se hay es que tan grande se puede representar un numero
Se usa 2^x
... [128] [64] [32] [16] [8] [4] [2] [1]


 "Conversiones"
 Ejemplo, representar el 256

 [256] [128] [64] [32] [16] [8] [4] [2] [1]

 Cada 8 bits se hace un Byte
 Si tomas paquetes de 4 bits se puede crear el sistema HEXADECIMAL

Por lo tanto hay 16 digitos
1 2 3 4 5 6 7 8 9 A B C D E F

Si se habla en decimal se debe de poner un subindice '10' o si es un hexadecimal un subindice '16'

Para representar en decimal o hexadecimal en computadoras que no se pueden poner subindices
se pone una "b" antes o un "0x" para hexadecimal

"Conversion de binario a decimal"
Ejemplo: 100110

[1] [0] [0] [1] [1] [0]
 32  16  8   4    2   1

 La suma dadas por las posiciones de los 1 da 38
 
 Para pasr de 78 decimal a hexadecimal primero pasamos a bits
 1.- Primero pasamos a binario con el metodo conocido
[] [1] [0] [0] [1] [1] [1] []
128 64 32  16   8   4   2  1
 2.-
 [0] [] [0] [] | [1] [1] [1] [1] PENDIENTE DE TERMINAR
  8  4  2  1     8  4  2  1
 Por cada paquete 4 bits se pueden guardar hasta el numero 15
 4 bits = 15




 


