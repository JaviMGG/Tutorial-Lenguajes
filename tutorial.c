// Autor: JaviMGG

// Esto es un comentario de línea en C.

/**
 * Esto es un comentario
 * de bloque
 * en C.
*/



// ################################## Importar librerias ###########################################
#include <stdio.h>    //Libreria estándar de entrada y salida
#include <stdlib.h>   //Libreria estándar de utilidades
#include <string.h>   //Libreria para manejo de cadenas
// #include <mpi.h>   //Libreria para programación paralela con MPI
// #include <omp.h>   //Libreria para programación paralela con OpenMP
#include <stdbool.h>  //Libreria para tipo de dato booleano

// ################################# Tipos de datos ################################################
// estructura: <tipo de dato> nombre = <valor(opcional)>;

// Tipos de datos primitivos en C
int entero = 10;        // Entero
float flotante = 10.5f; // Número de punto flotante
double doble = 20.99;   // Doble precisión
char caracter = 'A';    // Carácter
double valorvacio;      // No tiene valor asignado, se le puede asignar uno posteriormente
bool booleano = 1;      // Booleano (0 o 1) // Requiere #include <stdbool.h>

// Cadenas de caracteres
char cadena[] = "Hola, Mundo!"; // Cadena de caracteres
int valores[];

// ################################# Funciones #####################################################
// estructura: <tipo de dato> nombre (parametros) { ... }

void funcionEjemplo()
{
    printf("Esto es un print dentro de una funcion");
    char x = "Esto es una palabra dentro de una funcion";
}

int funcionEjemploSuma(int x, int y) //al ser una funcion de tipo distinto a void, tiene que devolver una valor
{
    int z = x + y;
    return z; //Si o si tiene que devolver un entero (o una funcion que devuelva un entero)
}

// ################################# Funcion Main ##################################################
// estructura: int main() { ... }

/**
 * return  0 = indica que el programa terminó correctamente. 
 * return  1 = indica que hubo un error. 
 * return -1 = indica que hubo un error grave.
*/

int main() {

    // Imprimir en consola
    printf("Hola, Mundo!\n");

    // Llamar a una funcion
    funcionEjemplo();

    int resultado = funcionEjemploSuma(5, 10);
    printf("\nEl resultado de la suma es: %d\n", resultado);

    return 0;
}
