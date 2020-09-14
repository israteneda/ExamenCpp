#include <iostream>

int32_t main()
{

 /*
Se declara var como un puntero a una función, la cual recibe como parámetro 
la dirección de referencia de una constante entera y la función retorna la
referencia a un array de 10 punteros, luego a un array de 10 enteros
*/

   

    int (*(&(*(*var)())(const int&))[10])[10];

    return EXIT_SUCCESS;
}
S
