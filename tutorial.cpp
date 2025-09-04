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

void funcionDeTipos(){

//ENTEROS (int)
int x = 0;

//REALES (double)
double y = 1.0;

//BOOLEANOS (bool)
bool z = true;

//FLOAT (float)
float f = 22220;

//CARÁCTERES (char)
char c = 'c';

//TEXTOS (string)
std::string s = "Hola";

/** 
 * SI EXISTIERA PREVIAMENTE EL "using namespace std"
 * habria que poner:
 * string s = "Hola";
*/

//DATOS CONSTANTES (const)
const double pi = 3.14;
/*al poner el "const" delante, SOLAMENTE ES DE LECTURA, no se puede editar*/


//Conversion de tipos

//con los numeros
double primera = 3.4;
std::cout << "valor de primera en double: " << primera << std::endl;
int segunda = (int) primera;
std::cout << "valor de primera en int: " << segunda << std::endl;

//con los chars
int caracter = 100;
std::cout << "valor de la variable caracter: " << caracter << std::endl;
char caracterReal = (char) caracter;
std::cout << "valor de la variable caracter EN LA TABLA ASCII (el valor que le corresponde): " << caracterReal << std::endl;




//NO PUEDEN HABER 2 VARIABLES CON EL MISMO NOMBRE Y DISTINTO VALOR, solamente se puede con un NAMESPACE
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
*/

void funcionesVarias(){
	#include <cmath>
	double x = 2.6;
	double y = 3;
	double z;

	z = std::max(x,y);
	z = std::min(x,y);
	z = pow(x,y);
	z = sqrt(x);
	z = abs(x);
	z = round(3.65);
}



//############################################ CONDICIONALES  ##################################################
/**
Tres tipos de condicionales:
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
	int edad; 
	cin >> edad;
	string VerificarEdad = edad >= 18 ? "Eres mayor de edad" : "Eres menor de edad";
	cout << VerificarEdad;

}



//############################################ FUNCION MAIN y LLAMADA A METODOS ##################################################

int main() {
	int x; //declaracion
	x = 0; //asignacion

	funcionDeTipos();
	funcionNamespace();
	pruebaAritmeticosSUMA();
	pruebaAritmeticosRESTA();
	pruebaAritmeticosMULTIPLICAR();
	pruebaAritmeticosDIVIDIR();
	pruebaAritmeticosMODULO();
	
	
	return 0; //al ser una funcion int, tiene que devolver un entero, las funciones VOID NO NECESITAN EL RETURN
}

