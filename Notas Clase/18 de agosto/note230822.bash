char ==> 8 bits --> 1B  
int ==> 32 bits --> 4B
float ==> 32 bits --> 4B
double ==> 64 bits --> 8B

"PREFIJOS":
[short, long, unsigned, signed]

"USOS PREFIJOS":
En un char cabe desde el [-125] hasta el [128], se toma la mitad de bits para los numeros negativos. Si 
fuesen solo positivos serian 255. Para ello el primer caso es usando 'unsigned', para el segundo 'signed'.

Al bits mas pegado al cero se le llama el "bit menos significativo", el otro extremo
se llama el "bit mas significativo"

1 = negativos
0 = positivo 

- Short parte el entero a la mitad por lo que un un 'short int = 16 bits -> 2B'
- Long da 4B, en int lo convertiria en un double



