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
long numeroLong = 234567654322;
float flotante = 0.0f;
double doble = 0.0;
char caracter = ' ';
char cadena[100] = ""; // Cadena de caracteres con espacio para 100 caracteres
bool booleano = false; // Valor booleano inicializado a false
enum diasSemana {      // tipo de dato con un conjunto de constantes nombradas
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo
};

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

int devuelveUno(){return 1;}

int funcionReturnFuncion()
{
    return devuelveUno();
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



// ################################# Punteros #######################################################
// variable que contiene la direccion de otra variable

void explicacionPunteros()
{
    double a[4] = {1.1,2.2,3.3,4.4};
    double *z;      //Si no se le asigna nada, es puntero nulo
    double **w;     //puntero a un puntero (el ultimo puntero es el que tiene la direccion de memoria del dato)
    double *p,x;    //En la declaración se añade * antes del nombre de la variable
    p = &a[2];      //El operador & devuelve la dirección de una variable
    x = *p;
    *p = 0.0;
    p = a; /* &a[0] */
}



// ################################# Hilos ##########################################################

#include <pthread.h> //libreria necesaria para crear hilos
void funcionDeHilos()
{
    printf("hola mundo");
}
void Hilos()
{
    int data = 0;
    pthread_t hilo; //crea una entidad "hilo"

    pthread_create(&hilo, NULL, &funcionDeHilos, &data); //con esto creamos los hilos (sus parametros), TODOS ejecutan "funcionDeHilos", la variable data es compartida por los hilos

    pthread_join(hilo, NULL); //el hilo principal espera a que terminen antes de continuar con la siguiente instrucción del main
}



// ################################# Fork ##########################################################
#include <unistd.h> //libreria necesaria para usar fork
void funcionDeFork()
{
    printf("hola mundo");
}
void Fork()
{
    /**
     * El proceso padre y el proceso hijo ejecutan el mismo código a partir de la llamada a fork(), pero con un PID diferente.
     * El proceso padre recibe el PID del proceso hijo como valor de retorno de fork(), mientras
     * que el proceso hijo recibe 0 como valor de retorno de fork(). Esto permite que ambos procesos puedan ejecutar código diferente dependiendo de su rol (padre o hijo) después de la llamada a fork().
     * 
     * Ejemplo:
    */
    pid_t pid = fork(); //crea un proceso hijo, el proceso padre y el proceso hijo ejecutan el mismo codigo a partir de esta linea, pero con un PID diferente (pid del proceso padre es el PID del proceso hijo, y el PID del proceso hijo es 0)
    if (pid == 0) {
        // Código del proceso hijo
        funcionDeFork();
    } else if (pid > 0) {
        // Código del proceso padre
        funcionDeFork();
    } else {
        // Error al crear el proceso
        perror("Error al crear el proceso");
    }
}