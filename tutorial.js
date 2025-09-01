//AUTOR: JaviMGG
/**
 * Java es un lenguaje compilado
 * Javascript es un lenguaje interpretado
 * 
 * Compilado = se revisa todo el codigo y se transforma en lenguaje maquina
 * Interpretado = el codigo se ejecuta "TAL CUAL LO HEMOS ESCRITO", a medida que se necesita, se ejecuta (paso por necesidad)
 * 
 * Javascript usado para explorador web 
 * Java usado en la JVM (Java Virtual Machine)
 * 
 * Java es de fuertemente tipado => int x = 0;
 * Javascript es de debilmente tipado = no hace falta indicar el tipo de dato (el int sobra) => x = 0
 * Javascript es de tipado dinamico = en el futuro puedo cambiar la variable de int a String (por ejemplo)
 * 
 * Javascript sirve para crear cualquier tipo de software (backend, apps moviles, aplicaciones de escritorio...)
 */

//ANOTACION= MOTOR V8: motor para interpretar y ejecutar javascript (creado por GOOGLE)
//NodeJS es un entorno de ejecucion sin necesidad de tener un entorno web



//##################################### Escribir HolaMundo (hacer un print) ##############################################

console.log("HolaMundo") //log es la operacion para escribir por consola
//el ; es opcional
console.log('HolaMundo') //comillas simples SON VALIDAS, NO ES VALIDO mezclar " con ' 

console.log(`HolaMundo`) //acento abierto `` también es valido

console.log("24")        //muestra un texto
console.log(10)          //muestra un numero



//##################################### Variables #####################################
/**
 * tipos de variables:
 * var = forma original de declarar variables, funciona en el ambito del fichero (accesible desde cualquier funcion)
 * let = accesibles dentro de un bloque (dentro de una funcion)
 * const = accesibles dentro de un bloque (dentro de una funcion), PERO SU VALOR ES CONSTANTE, NO SE PUEDE CAMBIAR
 * 
 * EN TODAS HAY QUE HACER "lower Camel Case": cada nueva palabra de la variable, EMPIEZA POR MAYUSCULA: var holaMundoDias
 */

var helloDay = "hola dia"
console.log(helloDay) //mostrará "hola dia"

//podemos cambiar el valor de la variable
helloDay = "bienvenido a mi codigo"
console.log(helloDay) //mostrará "bienvenido a mi codigo"


//SI INTENTAMOS MOSTRAR LA VARIABLE ANTES DE DECLARARLA en las LET, SE PRODUCE UN ERROR
let helloDayM = "hola dia martes"
console.log(helloDayM) //mostrará "hola dia martes"

//podemos cambiar el valor de la variable
helloDayM = "hola dia miercoles"
console.log(helloDayM) //mostrará "hola dia miercoles"

const helloDayL = "hola dia lunes"
console.log(helloDayL)

//NO SE PUEDE MODIFICAR, ES VALOR CONSTANTE
/*helloDayL = ""
console.log(helloDayL) ERROR
*/
//TIPOS MAS USADOS: LET Y CONST, (VAR EN CASOS MUY CONCRETOS, se desaconseja)



//##################################### Tipos de datos #####################################

/**
 * Datos primitivos: datos basicos, inmutables que representan un valor (los que estan dentro del nucleo)
 * 7 tipos de datos:
 */

//String (textos)
let nombre = "Pepito"
let apellido = 'Pérez'
let segundoApellido = `Gómez`

//Numeros (number)
let altura = 2.0                //numero decimal
let edad = 25                   //numero entero

//Booleanos (verdadero o falso)
let vivo = true
let muerto = false

//Indefinido (undefined)
let valorIndefinido
console.log(valorIndefinido)    //muestra "undefined"

//Nulo (null)
let valorNulo = null
console.log(valorNulo)          //muestra "null"

//Símbolo (Symbol)
let simbolo = Symbol("simbolo") //representan valores unicos (usados para identificadores de propiedades)

//BigInt
let granEntero = BigInt(22222222222222222222222222222222222225649849195194981632225) //numero tan grande que no se puede representar con "number"
let granEntero2 = 1651951948564411198195615548996434212347370594371858n //otra forma de representarlo


//Mostrar el tipo de dato (saber a cual de los 7 pertenence)
console.log(typeof granEntero)  //muestra bigint, NO EL VALOR DE LA VARIABLE
console.log(typeof null)        //muestra objeto, no existe un tipo de dato "nulo" (por asi decirlo)



//##################################### Operadores #####################################
/**
 * sirven para hacer operaciones
 * tipos de operadores:
 * Aritméticos (suma,resta,multiplicar, dividir...)
 * Asignacion (=, +=, -=...)
 * Comparacion (==, >, <, !=...)
 * Operadores lógicos (and, or, not...)
 * Operadores ternarios
 */


//Aritmeticos (suma, resta, multiplicar, dividir...)
let suma = 3+5
console.log(suma)           //muestra el resultado de 3+5

let resta = 5-3
console.log(resta)          //muestra el resultado de 5-3

let multiplicacion = 3*5
console.log(multiplicacion) //muestra el resultado de 3*5

let dividir = 3/5
console.log(dividir)        //muestra el resultado de 3/5

let resto = 5%3
console.log(resto)          //muestra el resto de la division 5/3

let exponencial = 3**5
console.log(exponencial)    //muestra 3^5

suma++ //incrementa el valor => suma = suma + 1
suma-- //decrementa el valor => suma = suma - 1


//Asignacion
let variable = 3            //el simbolo "="
variable +=2                //variable = variable + 2
variable -=2                //variable = variable - 2
variable *=2                //variable = variable * 2
variable /=2                //variable = variable / 2
variable %=2                //variable = variable % 2
variable **=2               //variable = variable ** 2


//Comparacion

//compara el valor de "uno" y "dos" y devuelve un booleano
let uno = 1 
let dos = 2

console.log(uno > dos )        //devuelve false
console.log(uno >= dos)        //devuelve false
console.log(uno < dos )        //devuelve true
console.log(uno <= dos)        //devuelve true
console.log(uno == dos)        //devuelve false
console.log(uno != dos)        //devuelve true
console.log(uno == dos)        //igualdad por valor (compara el valor)
console.log(uno == "1")        //igualdad por valor (compara el valor)

console.log(uno === dos)       //igualdad por identidad (compara el valor y el tipo): Compara si ambos son numeros y dichos numeros son el MISMO
console.log(uno == 1)          //devuelve true
console.log(uno == "1")        //devuelve true
console.log(uno == false)      //devuelve false
console.log(0 == "")           //devuelve true
console.log(0 == "viva")       //devuelve false
console.log(undefined == null) //devuelve false

/**
 * //Truthy values (valores verdaderos)
 * todos los numeros positivos y negativos menos el 0
 * todas las cadenas de texto menos las ""
 * el boolean true
 */

/**
 * //Falsy values (valores falsos)
 * 0
 * 0n
 * null
 * undefined
 * NaN
 * el boolean false
 * cadenas de texto vacias ("")
 */


//Operadores lógicos

//and (&&)
console.log(5 > 3 && 12 > 5) //devuelve true si 5 > 3 Y SI 12 > 5, en caso contrario devuelve FALSE

//or (||)
console.log(5 > 3 || 3 == 2) //devuelve true si una de las 2 condiciones se cumple

/**
 * console.log(5 > 10 && 32 < 12 || 30 < 40) 
 * la primera no se cumple, entonces la and devuelve false, pero la segunda del or, si se cumple
 * por eso devuelve TRUE
 */

//not (!)
console.log(!true)  // !true es lo mismo que FALSE
console.log(!false) // !false es lo mismo que True

//Operadores ternarios

/**
 * permiten escribir condiciones (similar a escribir ifs)
 * accedemos a la variable que queremos comprobar/inspeccionar
 * se escribe asi:
 * (variable) ? (condicion si se cumple) : (condicion si no se cumple)
 */
const estaVivo = true
estaVivo ? console.log("está vivo") : console.log("está muerto")



//##################################### Strings ##########################################

let name = "yo"
let nuevoname = "me llamo " + name + "!"
console.log(nuevoname) //Muestra los textos juntos


//longitud de un texto
console.log(nuevoname.length) //Muestra la longitud del texto, los espacios en blanco LOS CUENTA

//acceder a caracteres
console.log(nuevoname[3]) //Accedo al carácter en la posicion 2 empezando por el 0

//metodos mas comunes:
/**
 * Metodos más comunes:
 * toUpperCase()    = Transforma todas las letras en mayuscula
 * toLowerCase()    = Transforma todas las letras en minúscula
 * indexOf("")      = Saca la posicion de lo que hay en el parentesis, si no lo encuentra, devuelve -1
 * includes("")     = Devuelve true si lo que hay en el parentesis está en el String, false en caso contrario
 * slices(x, y)     = Devuelve el string desde el elemento que ocupa la posicion x hasta el elemento que ocupa la posicion y
 * replace(x, y)    = Si encuentra la primera palabra (x), la sustituye por la segunda (y)
 */

//toUpperCase()
console.log(nuevoname.toUpperCase())
        
//toLowerCase()
console.log(nuevoname.toLowerCase())
       
//indexOf()
console.log(nuevoname.indexOf("llamo"))
      
//includes()
console.log(nuevoname.includes("llamo"))
 
//slice(x, y)
console.log(nuevoname.slice(0, 10))
          
//replace("a", "b")
console.log(nuevoname.replace("yo", "jose")) 


//Template literals (plantillas literales)

//DARÁ ERROR SI NO SE USA ``
let mensaje = `mi comida favorita es
los macarrones 
con tomate`

console.log(mensaje) //NO mostrará el texto en la misma linea 

//la variable "name" es la de la linea 230
console.log(`hola, ${name}! tu comida favorita es ${mensaje}`)



//########################## Condicionales (estructuras de control) ##########################################

/**
 * tres tipos de condicionales:
 * 1- if, else if, else
 * 2- operadores ternarios => (comparacion) ? (si se cumple la comparacion) : (si no se cumple la comparacion)
 * 3- switch 
 */


//if, else if, else
edad = 18

//hay que utilizar operadores de comparacion (==, !=, >, <...)
if(edad == 18){
    //Si se cumple la condicion, se ejecuta esto
    console.log("tu edad es 18")
}
else if(edad < 18){
    //si no se cumple la condicion primera, entonces ejecutamos esta condicion
    //si se cumple la segunda condicion (edad < 18), se ejecuta esto
    console.log("tu edad es menor a 18")
}
else{
    //si no se cumple ninguna de las condiciones, se ejecuta esto
    console.log("tu edad es mayor de 18")
}


//Operador ternario (visto previamente): forma mas compacta de hacer IF Y ELSE
const messages = edad == 18 ? "tu edad es 18": "tu edad no es 18"
console.log(messages) //devuelve el resultado que se obtiene dependiendo de la condicion edad == 18


//Switch (solamente si queremos comparar una UNICA VARIABLE CON VARIOS POSIBLES RESULTADOS)
let dia = 23
let nombreDia 


switch(dia){  //dentro del parentesis, ponemos que variable vamos a "comparar"/determina lo que hacemos
    case 1:
        nombreDia = "dia es 1"
        break //dentro de cada bloque hay que poner el "break" para evitar que se aniden los casos
    case 2:
        nombreDia = "dia es 2"
        break
    case 3: 
        nombreDia = "dia es 3"
        break
    case 22: //equivale a un else if
        nombreDia = "dia es 22"
        break
    default: //caso por defecto, equivale a un else
        nombreDia = "dia es " + dia
        //no es necesario el break porque no hay nada mas que ejecutar
}

console.log(nombreDia)



//########################## Estructuras de datos ##########################################

/**
 * Permiten almacenar varios valores en una sola variable 
 * Tres tipos de estructuras de datos:
 * 1- Arrays
 * 2- 
 * 3-
 */


//Array
let arrayVacia = []     //Array vacia
let array = new Array() //Array vacia

arrayVacia = [1]        //Mete el 1 => [ 1 ]
array = new Array(3)    //Deja 3 huecos vacios => [ <3 empty items> ]

console.log(arrayVacia)
console.log(array)


//al crear una nueva, podemos meterle valores
arrayVacia = [1,2,3,4, "holamundo"] //no hay un tipo de datos "concreto"     
array = new Array(1,2,3,4) 

console.log(arrayVacia)
console.log(array)

array = new Array(3)
array[0] = "hola"
array[1] = "que"
array[2] = "tal?"   //si cambiamos el valor de los [], cambia la posicion de los elementos

console.log(array)  //muestra ["Hola", "que", "tal?"]


//Metodos comunes en Arrays
/**
 * push()       = AÑADE AL FINAL DEL ARRAY LO QUE HAYA ENTRE PARENTESIS ()
 * pop()        = ELIMINA EL ULTIMO ELEMENTO DEL ARRAY
 * shift()      = Elimina el primer elemento del array Y LO DEVUELVE
 * unshift()    = Añade uno o mas elementos AL INICIO DEL ARRAY
 * length()     = Devuelve la longitud del array
 * clear()      = NO SE PUEDE LIMPIAR COMO TAL, HAY QUE DECLARARLA DE NUEVO COMO VACIA
 * 
 */
array = []


//Push
array.push("hola") 
console.log(array) //Muestra [ "hola" ]

array.push("que")
console.log(array) //Muestra [ "hola", "que" ]

array.push("tal")
console.log(array) //Muestra [ "hola", "que", "tal" ]

//Pop
array.pop()        
console.log(array) //Muestra [ "hola", "que" ]

//Shift
console.log(array.shift()) //Muestra "hola"

//Unshift
console.log(array) //Muestra [ "que" ]
array.unshift("bienvenidos", "de nuevo") 
console.log(array) //Muestra [ "Bienvenidos", "de nuevo", "que" ]

//length
console.log(array.length)

//Clear
array = []
console.log(array)