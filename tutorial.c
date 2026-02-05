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
double matriz[3][3];        // Matriz de 3x3

// Valores constantes
const float PI = 3.14159;   // Constante de tipo flotante
const int MAX_VALOR = 100;  // Constante de tipo entero
#define MAX_TAMANO 50       // Constante definida con #define



// ################################# Valores static ################################################
// lo que tenga "static" previamente, UNICAMENTE puede ser accedido desde este archivo, NO desde cualquier parte

static void funcionConStatic()
{
    static int variable = 0;
}



// ################################# Mostrar por pantalla valores ##################################
int entero = 0;
float flotante = 0.0f;
double doble = 0.0;
char caracter = ' ';
char cadena[100] = ""; // Cadena de caracteres con espacio para 100 caracteres
bool booleano = false; // Valor booleano inicializado a false

void mostrarValores() 
{
    printf("Valor del entero: %d\n", entero);
    printf("Valor del flotante: %.2f\n", flotante);
    printf("Valor del doble: %.2lf\n", doble);
    printf("Valor del caracter: %c\n", caracter);
    printf("Valor de la cadena: %s\n", cadena);
    printf("Valor del booleano: %d\n", booleano); // Imprime 0 o 1 dependiendo del valor booleano
}



// ################################# Bucles ########################################################
/**
 * Estructura del bucle for:
 * for (inicialización; condición; incremento) {
 *     // Código a ejecutar en cada iteración
 * }
 * 
 * 
 * Estructura del bucle while:
 * while (condición) {
 *     // Código a ejecutar mientras la condición sea verdadera
 * }
 * 
 * 
 * Estructura del bucle do-while:
 * do {
 *     // Código a ejecutar al menos una vez
 * } while (condición);
*/

void mostrarBucles()
{
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        printf("Valor de i: %d\n", i);
    }
    
    int i = 0;
    while (i < count)
    {
        printf("Valor de i: %d\n", i);
        i++;
    }
    

    int i = 0;
    do
    {
        printf("Valor de i: %d\n", i);
        i++;
    } while (i < count);
    
}



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
