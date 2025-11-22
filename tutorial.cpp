//Autor: JaviMGG
#include <iostream>
#include <string>

//esto es un comentario de una linea

/*esto
es un
comentario
de varias 
lineas
*/



//############################################ EXTRACCION E INSERCION DE DATOS (PRINT Y SCANNER) ##################################################

/**
 * Dos tipos de operadores:
 * cout << ... (extraccion) /un print
 * cin  >> ... (insercion)  /un scanner
*/

void funcionDeInsercionYExtraccion(){
	using namespace std;
	string nombre, apellido;
	cout << "como te llamas" <<endl;
	cin >> nombre;	//si no deja escribir el nombre, HAY QUE IR A: configuracion -> code runner ->"run in terminal" y activarlo
	cout << "te llamas " << nombre << endl;

	cout << " y que apellido tienes\n";
	getline(cin>>ws, apellido);	//esta funcion lo que hace es que coge el string que se escriba, que escribe/recibe desde el primer parametro (el ws es para evitar fallos) y lo guarda en el segundo

}



//############################################ TIPO DE DATOS Y CONVERSION DE TIPOS ##################################################

void funcionDeTipos() {

    // ENTEROS (int)
    int x = 0;

    // REALES (double)
    double y = 1.0;

    // BOOLEANOS (bool)
    bool z = true;

    // FLOAT (float)
    float f = 22220;

    // CARÁCTERES (char)
    char c = 'c';

    // TEXTOS (string)
    std::string s = "Hola";

    // DATOS CONSTANTES (const)
    const double pi = 3.14; //no se puede modificar/cambiar el valor que tienen asignado

    // Conversion de tipos
    double primera = 3.4;
    std::cout << "valor de primera en double: " << primera << std::endl;
    int segunda = static_cast<int>(primera);
    std::cout << "valor de primera en int: " << segunda << std::endl;

    int caracter = 100;
    std::cout << "valor de la variable caracter: " << caracter << std::endl;
    char caracterReal = static_cast<char>(caracter);
    std::cout << "valor de la variable caracter EN LA TABLA ASCII: " << caracterReal << std::endl;
}



//############################################ NAMESPACE ################################################################

//Similar a crear funciones
namespace primero{
	int x = 1;
}

namespace segundo{
	int x = 2;
}

/*
 el más "famoso" es std, 
 si ponemos using namespace std, 
 en lugar de tener std::cout<<...
 podremos tener directamente cout<<....

 SE PUEDE SUSTITUIR POR:
 using std::cout
 AUNQUE SE TENDRIA QUE VOLVER A PONER EN TODOS EL std:: delante EXCEPTO EN LOS cout
*/

void funcionNamespace(){
	using namespace primero;
	using namespace segundo;
	using namespace std; //necesario para el endl, sino habría que poner: std::endl
	//using std::cout; 	 //si usaramos este, podriamos poner directamente: cout<<...
	int x = 0; 
	
	std::cout << "Valor de X originalmente: " << x << endl;
	std::cout << "Valor de X en el namespace 'primero': "<< primero::x << endl;
	std::cout << "Valor de X en el namespace 'segundo': "<< segundo::x << endl;
	/*
	SI elimino la variable x y pongo 
	using namespace primero, se usa la X de PRIMERO,
	PERO, SI LO PONGO Y no lo borro, LA VARIABLE NO SE CAMBIA
	---------------------------------------------------------
	using namespace primero
	int x = 0;
	cout << X
	X valdrá 0
	*/
}



//############################################ TYPEDEF y USING ################################################################

//Sirve para "renombrar elementos"/crea identificadores
//(typedef) (tipo de dato que se sustituira) (nuevo nombre)
typedef std::string textoRenombrado;

//ahora no hace falta poner std::string sino "textoReenombrado"
textoRenombrado nombre = "Joselito";

typedef int Entero;
Entero nuevoValor = 0;

using Entero = int; //Equivale a un typedef



//############################################ OPERADORES ##################################################

/**
 * Tipos de operadores aritméticos:
 * 1- Suma
 * 2- Resta
 * 3- Multiplicar
 * 4- Dividir
 * 5- Modulo (%)
 * 
 * LOS OPERADORES TIENEN ORDEN DE PRIORIDAD EN LAS OPERACIONES:
 * 1- LAS OPERACIONES ENTRE ()
 * 2- LAS MULTIPLICACIONES * Y DIVISIONES /
 * 3. LAS SUMAS + Y LAS RESTAS -
 * 
 * 
 * Tipos de operadores lógicos:
 * 1- and	(&&)
 * 2- or	(||)
 * 3- not	(!)
*/


//Operadores aritméticos

//Suma
void pruebaAritmeticosSUMA(){

	int valor = 20;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticos: " << valor << std::endl;
	valor++;	//ES LO MISMO QUE HACER: valor = valor + 1;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosSUMA despues de hacer un ++: " << valor << std::endl;
	valor+=2;   //ES LO MISMO QUE HACER: valor = valor + 2;	
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosSUMA despues de hacer un +=2: " << valor << std::endl;
	
}

//Resta
void pruebaAritmeticosRESTA(){

	int valor = 20;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosRESTA: " << valor << std::endl;
	valor--;	//ES LO MISMO QUE HACER: valor = valor - 1;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosRESTA despues de hacer un --: " << valor << std::endl;
	valor-=2;   //ES LO MISMO QUE HACER: valor = valor - 2;	
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosRESTA despues de hacer un -=2: " << valor << std::endl;
	
}

//Multiplicar
void pruebaAritmeticosMULTIPLICAR(){

	int valor = 20;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosMULTIPLICAR: " << valor << std::endl;
	valor *= 2; //ES LO MISMO QUE HACER: valor = valor * 2;	
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosMULTIPLICAR despues de hacer un *=2: " << valor << std::endl;
	
}

//Dividir
void pruebaAritmeticosDIVIDIR(){

	int valor = 20;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosDIVIDIR: " << valor << std::endl;
	valor /= 2; //ES LO MISMO QUE HACER: valor = valor / 2;	
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosDIVIDIR despues de hacer un /=2: " << valor << std::endl;
	
}

//Modulo
void pruebaAritmeticosMODULO(){

	int valor = 20;
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosMODULO: " << valor << std::endl;
	valor %= 2; //ES LO MISMO QUE HACER: valor = valor % 2;	
	std::cout << "Valor de la Variable en la funcion pruebaAritmeticosMODULO despues de hacer un %=2: " << valor << std::endl;
	
}


//Operadores Lógicos

//and
bool pruebaAND(){
	return 2 < 3 and 8 > 23;	//devuelve true si 2 < 3 Y SI 8 > 23, si no se cumple alguna de las 2, devuelve false
}

//or
bool pruebaOR(){
	return 2 < 3 and 8 > 23;	//devuelve true si 2 < 3 O SI 8 > 23, si se cumple alguna de las 2, devuelve true
}

//not
bool pruebaNOT(){
	bool verdadero = true;
	return !verdadero;			//devuelve false porque la not invierte el valor
}




//############################################ STRING Y ALGUNOS DE SUS METODOS ##################################################

/**
 * Metodos:
 * ------------------------------------------------------------------------
 * length()			=> longitud del String/texto, cuenta los caracteres Y LOS ESPACION EN BLANCO
 * empty()			=> Devuelve 1 (TRUE) si la cadena de texto está vacia, 0 (FALSE) en caso contrario
 * clear()			=> Vacia la cadena de texto
 * append("X")		=> Añade "X" a la cadena de texto. ES UTIL cuando queremos que una persona SE REGISTRE
 * at(X)			=> Devuelve lo que hay en la posicion X de la cadena de texto
 * insert(2, "X")	=> Inserta en la posicion 2 el caracter "X" 
 * find("X")		=> Devuelve la primera posicion del caracter "X"
 * erase(x, y)		=> elimina de la cadena de texto lo que hay desde x hasta y, si Y vale -1, irá hasta el final
 * 
*/

void funcionStrings(){
	using namespace std;
	string nombre;

	nombre = "Juan";

	//length
	int longitud = nombre.length();	
	
	//empty
	bool vacia = nombre.empty();		//devuelve 0 porque "Nombre" NO ESTÁ VACIA
	
	//clear
	nombre.clear();

	//append
	nombre.append("Alberto");			//ahora nombre vale "Alberto"

	//at
	char x = nombre.at(2);				//devuelve "a"

	//insert
	nombre.insert(0, "Dia");			//ahora nombre vale "DiaAlberto"

	//find
	int posicion = nombre.find("berto");
	//cout << "la posicion primera de berto es " << posicion << endl;

	//erase
	nombre.erase(5, -1);
	//cout << nombre;

}



//############################################ FUNCIONES ÚTILES EN C++ ##################################################

/**
 * max(x, y)		=> devuelve el máximo de los parametros x e y 	=> x e y puede ser valores o variables
 * min(x, y)		=> devuelve el minimo de los parametros x e y	=> x e y puede ser valores o variables
 * 
 * libreria cmath	=> #include <cmath>
 * algunos de sus metodos:
 * 
 * pow(x, y)		=> eleva el parametro x a y (potencia)
 * sqrt(x)			=> calcula la raiz cuadrada de x
 * abs(x)			=> valor absoluto de x
 * round(x)			=> aproxima x (hace ponderacion/redondea)
 * ceil(x)			=> redondear x hacia arriba
 * floor(x)			=> redondear x hacia abajo
 * 
 * libreria time	=> #include <ctime>
 * algunos de sus metodos:
 * 
 * randomizar numeros
 * 
*/

#include <ctime> //las librerias NO PUEDEN IR DENTRO DE METODOS

void funcionesVarias(){
	//#include <cmath>
	double x = 2.6;
	double y = 3;
	double z;
	using namespace std;
	/**
	 * z = std::max(x,y);
	 * z = std::min(x,y);
	 * z = pow(x,y);
	 * z = sqrt(x);
	 * z = abs(x);
	 * z = round(3.65);
	*/
	srand(time(NULL));

	int numRandom = rand();	//numero muy grande
	int dado = rand() % 6;	//tocará desde 0 hasta 6, si fuera desde 1 hasta 6, habria que sumarle a todo 1
	cout << dado << endl;
}



//############################################ FUNCIONES #########################################
//SIEMPRE CON LA MISMA "ESTRUCTURA": tipo_de_retorno nombre_de_la_funcion(parametros){...}

void funcion(){
	std::cout << "Hola" << std::endl;
	//no es necesario un RETURN
}

int funcion2(int x){
	return x;
	//es necesario un RETURN que devuelva un ENTERO
}

double funcion3(double x){
	return x;
	//es necesario un RETURN que devuelva un DOUBLE
}

std::string funcion4(std::string x){
	return x;
	//es necesario un RETURN que devuelva un STRING
}

//############################################ FUNCIONES SOBRECARGADAS #########################################

void funcionSobrecargada(){
	std::cout << "Hola1" << std::endl;	
}

void funcionSobrecargada(std::string x){
	std::cout << "Hola2 " << x << std::endl;	
}

void funcionSobrecargada(std::string x, std::string y){
	std::cout << "Hola3 " << x << " " << y << std::endl;	
}

/**
 * PUEDEN HABER MÁS DE UNA FUNCION CON EL MISMO NOMBRE, PERO LOS PARAMETROS DEBEN SER DIFERENTES.
 * SI NO SON DIFERENTES, SE SOLAPAN
*/

//funcionSobrecargada(); //devuelve hola1
//funcionSobrecargada("hola"); //devuelve hola2 hola
//funcionSobrecargada("hola", "adios"); //devuelve hola3 hola adios



//############################################ AMBITO DE LAS VARIABLES##########################################

/**
 * Variables locales:
 * ------------------------------------------------------------------------
 * Son aquellas que se declaran dentro de una funcion y solo pueden ser usadas dentro de ella
 * 
 * Variables globales:
 * ------------------------------------------------------------------------
 * Son aquellas que se declaran fuera de una funcion y pueden ser usadas en cualquier funcion
*/
using namespace std;

int x = 1;
void ejemploVariableLocal(){
	int x = 2; //esto es una VARIABLE LOCAL
	cout << "Variable local: " << x << endl; //devuelve un 2
	variableCompartidaLocal(x); //envio la variable local a la funcion
}

void variableCompartidaLocal(int x){
	//int x = 3; PODRIAMOS REDECLARARLA PUESTO QUE ES EL MISMO TIPO Y NOMBRE QUE EL PARAMETRO QUE SE RECIBE
	cout << "Variable compartida local: " << x << endl; //devuelve un 2. Si la redeclaramos devuelve un 3
}

void ejemploVariableGlobal(){
	cout << "Variable global: " << x << endl; //devuelve un 1
}	



//############################################ CONDICIONALES  ##################################################

/**
 * Tres tipos de condicionales:
 * ------------------------------------------------------------------------
 * 1- if, else if, else     => if(condicion){cosa a ejecutar} else if(condicion "secundaria"){cosa a ejecutar} else{cosa a ejecutar si no se cumple las condiciones}
 * 2- switch                => switch(variable que determina los casos){case X: cosa a ejecutar si variable vale X...}
 * 3- operadores ternarios  => (comparacion) ? (si se cumple la comparacion) : (si no se cumple la comparacion)
*/

void funcionCondicionales(){
	using namespace std;
	int edad;
	cout << "Dime tu edad"<< endl;
	cin >> edad;

	//if, else if, else
	if(edad < 18){
		cout << "Eres menor de edad" << endl;
	}
	else if(edad > 18){
		cout << "Eres mayor de edad" << endl;
	}
	else{
		cout << "Tienes " << edad << " años" << endl;
	}

	//switch
	cout << "dime tu mes de nacimiento" << endl;
	int mes;
	cin >> mes;
	switch(mes){
		case 1:
			cout << "Enero" << endl;
		break;	//NECESARIO PARA SALIR DEL CASE
		case 2:
			cout << "Febrero" << endl;
		break;
		default:
			cout << "Otro mes" << endl;
				//NO HACE FALTA EL CASE PORQUE ES EL CASO POR DEFECTO
	}

	//Operador ternario
	cout << "Escribe de nuevo tu edad, que se me ha olvidado" << endl; 
	cin >> edad;
	string VerificarEdad = edad >= 18 ? "Eres mayor de edad" : "Eres menor de edad"; //ESTE ES EL OPERADOR TERNARIO
	cout << VerificarEdad;

}



//############################################ BUCLES ##################################################

/**
  * Tres tipos de bucles:
  * ------------------------------------------------------------------------
  * for                      => for(desde donde comienzo; cuando pararé; como avanzo)
  * while                    => desde donde comienzo; while(condicion de parada){... como avanzo}
  * do while                 => desde donde comienzo; do {...como avanzo}while(condicion de parada) 
  * ------------------------------------------------------------------------
  * IMPORTANTE: 
  * el bucle do{}while(); SI QUE SE EJECUTA AL MENOS UNA VEZ, 
  * EL bucle while(){} SI INICIALMENTE NO CUMPLE LA CONDICION, NO SE EJECUTA, el do{}while(); SI
*/

void funcionBucles(){
	using namespace std;

	//for
	for (int i = 0; i < 10; i++){
		cout << i << endl;
	}
	
	//while
	int i = 0;
	while (i < 10){
		cout << i << endl;
		i++;
	}

	i = 0; //variable de donde empezamos
	do{
		cout << i << endl;
		i++;
	} while (i < 10);

}


//############################################ ARRAYS ##################################################
/**
 * Un array es una coleccion de datos del mismo tipo
 * ----------------------------------------------------------------
 * std::string nombres[] = {"Juan", "Pedro", "Maria"}; //ARRAY CON TAMAÑO 3 CON ELEMENTOS YA DECLARADOS
 * int numeros[5]; 		//ARRAY VACIO CON TAMAÑO 5
 * double arrayVacia[]; //ARRAY VACIO CON TAMAÑO 0
 * ----------------------------------------------------------------
 * nombres.length() //devuelve el tamaño del array
 * nombres[0] //devuelve el primer elemento del array
 * nombres[1] //devuelve el segundo elemento del array
 * nombres[2] //devuelve el tercer elemento del array
 * ----------------------------------------------------------------
*/

void funcionArrays(){
	using namespace std; //si se elimina esta linea, en cada string habria que poner std::string y en cout, std::cout.

	string nombres[] = {"Juan", "Pedro", "Maria"}; //ARRAY CON TAMAÑO 3 CON ELEMENTOS YA DECLARADOS
	
	int numeros[5]; //ARRAY VACIO CON TAMAÑO 5
	cout << nombres[0] << endl; //devuelve Juan.
	cout << numeros << endl; //devuelve la DIRECCION DE MEMORIA DEL ARRAY numeros.

	//para modificar un dato concreto
	nombres[0] = "Pedro"; //ahora el array es {"Pedro", "Pedro", "Maria"}
	cout << nombres[0] << endl; //devuelve Pedro.

	//para recorrer un array
	for (int i = 0; i < nombres.length(); i++){
		cout << nombres[i] << endl; //devuelve los elementos del array, es decir: Pedro, Pedro, Maria.
	}

	//bucle foreach //se traduce como: para cada nombre en nombres{...}
	for (string nombre : nombres){
		cout << nombre << endl; //devuelve los elementos del array, es decir: Pedro, Pedro, Maria.
	}

	//para saber el tamaño de un array
	cout << "El tamaño del array es: " << sizeof(nombres) << endl; //devuelve el tamaño del array en bytes.
}

//############################################ FUNCION MAIN y LLAMADA A METODOS ##################################################

/**
 * POR DEFECTO, C++ LO LEE TODO DE ARRIBA A ABAJO, es decir, el main DEBE ESTAR ABAJO DEL TODO
 * Ahora bien, si arriba de main declaramos la funcion con un ; al final, el main BUSCARÁ LA FUNCION, es decir, "mirará" en todas direcciones
 */
void funcionNueva();

int suma(int x, int y);

int main() {
	int x; //declaracion
	x = 0; //asignacion
	/** 
	funcionDeTipos();
	funcionNamespace();
	pruebaAritmeticosSUMA();
	pruebaAritmeticosRESTA();
	pruebaAritmeticosMULTIPLICAR();
	pruebaAritmeticosDIVIDIR();
	pruebaAritmeticosMODULO();
	*/
	funcionArrays();
	funcionesVarias();
	funcionBucles();
	funcionNueva();		//esta funcion si se ejecutara por estar declarada arriba
	//funcionNueva2();	//esta funcion NO se ejecutara
	int a = 1, b = 2, c;
	c = suma(a, b);
	std::cout << "la suma de " << a << " y " << b << ": " << c;
	return 0; //al ser una funcion int, tiene que devolver un entero, las funciones VOID NO NECESITAN EL RETURN
}

void funcionNueva(){
	std::cout << "Adios"<< std::endl;
}

void funcionNueva2(){
	std::cout << "AdiosMundoCruel";
}

int suma(int x, int y){
	return x + y;
}
