#include <iostream>
#include <string>

//esto es un comentario de una linea

/*esto
es un
comentario
de varias 
lineas
*/

//############################################ TIPO DE DATOS ##################################################

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

/*
al poner el "const" delante, SOLAMENTE ES DE LECTURA, no se puede editar
*/

//NO PUEDEN HABER 2 VARIABLES CON EL MISMO NOMBRE Y DISTINTO VALOR, solamente se puede con un NAMESPACE



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

using namespace std;
using std::cout;


//############################################ ENTRADA/SALIDA DE DATOS ##################################################

int main() {
	int x; //declaracion
	x = 0; //asignacion
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

