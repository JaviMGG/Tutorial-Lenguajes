#include <iostream>
#include <string>

//esto es un comentario de una linea

/*esto
es un
comentario
de varias 
lineas
*/



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

/*
SI EXISTIERA PREVIAMENTE EL "using namespace std"
habria que poner:
string s = "Hola";
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



//############################################ OPERADORES ARITMETICOS ##################################################
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
*/


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



//############################################ ENTRADA/SALIDA DE DATOS ##################################################

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

