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



//##################################### Variables #######################################################################

/**
 * tipos de variables:
 * ------------------------------------------------------------------------
 * var = forma original de declarar variables, funciona en el ambito del fichero (accesible desde cualquier funcion)
 * let = accesibles dentro de un bloque (dentro de una funcion)
 * const = accesibles dentro de un bloque (dentro de una funcion), PERO SU VALOR ES CONSTANTE, NO SE PUEDE CAMBIAR
 * ------------------------------------------------------------------------
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



//##################################### Tipos de datos #################################################################

/**
 * Datos primitivos: datos basicos, inmutables que representan un valor (los que estan dentro del nucleo)
 * Siete tipos de datos:
 * ------------------------------------------------------------------------
 * String
 * Numeros
 * Booleanos
 * Indefinido
 * Nulo
 * Símbolo
 * BigInt
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
 * ------------------------------------------------------------
 * Aritmeticos          (suma, resta, multiplicar, dividir...)
 * Asignacion           (+=, -=, *=, /=, ...)
 * Comparacion          (=, >=, <=, >, <, !=, ...)
 * Operadores Lógicos   (and, or, not, ...)
 * Operadores Ternarios (... ? ... : ...)
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
let uno = 1 
let dos = 2

//compara el valor de "uno" y "dos" y devuelve un booleano
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
 * Truthy values (valores verdaderos)
 * ------------------------------------
 * todos los numeros positivos y negativos menos el 0
 * todas las cadenas de texto menos las ""
 * el boolean true
*/

/**
 * Falsy values (valores falsos)
 * ------------------------------------
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
 * la primera no se cumple, entonces la and devuelve false, pero la segunda del or si se cumple
 * por eso devuelve TRUE
*/

//not (!)
console.log(!true)  // !true es lo mismo que FALSE
console.log(!false) // !false es lo mismo que True

/**
 * Operadores ternarios:
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

/**
 * Metodos más comunes:
 * -------------------------------------------------------------
 * toUpperCase()    => Transforma todas las letras en mayúscula
 * toLowerCase()    => Transforma todas las letras en minúscula
 * indexOf("")      => Saca la posicion de lo que hay en el parentesis, si no lo encuentra, devuelve -1
 * includes("")     => Devuelve true si lo que hay en el parentesis está en el String, false en caso contrario
 * slices(x, y)     => Devuelve el string desde el elemento que ocupa la posicion x hasta el elemento que ocupa la posicion y
 * replace(x, y)    => Si encuentra la primera palabra (x), la sustituye por la segunda (y)
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
 * Tres tipos de condicionales:
 * ------------------------------------------------------------------------
 * 1- if, else if, else     => if(condicion){cosa a ejecutar} else if(condicion "secundaria"){cosa a ejecutar} else{cosa a ejecutar si no se cumple las condiciones}
 * 2- operadores ternarios  => (comparacion) ? (si se cumple la comparacion) : (si no se cumple la comparacion)
 * 3- switch                => switch(variable que determina los casos){case X: cosa a ejecutar si variable vale X...}
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
 * -----------------------------------
 * 1- Arrays
 * 2- Sets
 * 3- Maps
*/


//1- Array
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


/**
 * Metodos comunes en Arrays:
 * ------------------------------------------------------------------------
 * push()       = AÑADE AL FINAL DEL ARRAY LO QUE HAYA ENTRE PARENTESIS ()
 * pop()        = ELIMINA EL ULTIMO ELEMENTO DEL ARRAY
 * shift()      = Elimina el primer elemento del array Y LO DEVUELVE
 * unshift()    = Añade uno o mas elementos AL INICIO DEL ARRAY
 * length       = Devuelve la longitud del array
 * clear()      = NO SE PUEDE LIMPIAR COMO TAL, HAY QUE DECLARARLA DE NUEVO COMO VACIA
 * slice(x,y)   = devuelve los elementos del array que estan desde la posicion x hasta la y SIN INCLUIR LA y
 * splice(x,y,z)= elimina desde el elemento x un numero de elementos y (si usaramos z, lo añadiria una vez ha borrado)
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
console.log(array)  //Muestra [ "que" ]
array.unshift("bienvenidos", "de nuevo") 
console.log(array)  //Muestra [ "Bienvenidos", "de nuevo", "que" ]

//length
console.log(array.length)

//Clear
array = []          //ahora array vale [] (está vacía)
array.length = 0    //otra forma de vaciarla pero menos convencional
console.log(array)

//slice
let miArray = [1,2,3,4,5]
let miNuevaArray = miArray.slice(1,3)   //miNuevaArray será el resultado de coger de miArray los elementos de la posicion 1 hasta la 3 (sin incluir la 3), si valieran lo mismo, devuelve []
console.log(miNuevaArray)               //devuelve [ 2, 3 ]

//splice
miArray = [1,2,3,4,5]

//con dos argumentos
let miNuevaArray2 = miArray.splice(0,2) //empieza en el elemento 1, a partir de el, dice CUANTOS QUIERE BORRAR, en este caso 2
console.log(miNuevaArray2)              //devuelve [ 1, 2 ]

//con tres argumentos
let miTercerNuevoArray = miArray.splice(0,2,5)       //el tercer argumento se añade despues de borrar los dos anteriores
console.log(miTercerNuevoArray)                      //deberia mostrar el array con el argumento "5" añadido


//2- Sets
let nuevoSet = new Set() //Set vacia
let nuevoSet2 = {}       //ESTO NO ES UN SET

//si queremos mostrar solo del primer elemento
nuevoSet = new Set("Buenos", "dias", "a", "todos")
console.log(nuevoSet)   //muestra el numero de elementos de la PRIMERA PALABRA, Set(6) { 'B', 'u', 'e', 'n', 'o', 's' }

//si queremos mostrar todos los elementos del Set
nuevoSet = new Set(["Buenos", "dias", "a", "todos"])
console.log(nuevoSet)   //muestra: Set(4) {"buenos", "dias", "a", "todos"}


/**
 * Metodos comunes en Sets:
 * ------------------------------------------------------------------------
 * add("X")        = añadir al set lo que hay en el parentesis AL FINAL
 * delete("X")     = hay que indicar el elemento que hay que borrar (NO HAY QUE PASARLE EL INDICE)
 * has("X")        = comprueba si hay algun elemento, devuelve true si existe el elemento entre parentesis
 * size            = tamaño del Set
 * Array.from(Y)   = transformar el Set Y en una ARRAY
 * new Set(Y)      = transforma el ARRAY Y en un Set nuevo/lo modifica
 * 
*/


//Add
nuevoSet.add("holamundo")
console.log(nuevoSet)

//Delete
nuevoSet.delete("holamundo")    //devuelve un booleano si el elemento existe y se ha borrado correctamente
console.log(nuevoSet)

/**
 * se podria hacer:
 * if(nuevoSet.delete("holamundo")){
 *      console.log("elemento borrado")
 * }
 * else{
 *      console.log("elemento no borrado")
 * }
*/

//Has
let tieneDias = nuevoSet.has("dias")    //devuelve true si "dias" está en nuevoSet
console.log(tieneDias)

//Size
console.log("tamaño del set actual: " + nuevoSet.size)

//Convertir de Set a Array
let nuevaArray = Array.from(nuevoSet)
console.log(nuevaArray) //MUESTRA UN ARRAY con los elementos del SET

//Convertir de Array a Set
nuevoSet2 = new Set(nuevaArray)
console.log(nuevoSet2)  //MUESTRA UN SET con los elementos del ARRAY (anterior)

//NO admite duplicados
nuevoSet.add("dias")    //COMO YA EXISTE, NO SE MODIFICA
console.log(nuevoSet)


//3- Map
let miMapa = new Map()  //Mapa VACIO

//Inicializar, CADA ELEMENTO ESTÁ FORMADO POR UN PAR: CLAVE Y VALOR
miMapa = new Map([
    ["Nombre","Paco"],
    ["Edad", 24],
    ["Altura", 2.00] //si quisiera añadir más, habria que poner una , y después otro par de elementos en []
])
console.log(miMapa)


/**
 * Metodos comunes en Maps:
 * ------------------------------------------------------------------------
 * set(C, V)        = añade un elemento al mapa SI LA Clave es DISTINTA, SI ES IGUAL, LO SUSTITUYE
 * get(C)           = devuelve el Valor asociado a la Clave, SI NO EXISTE LA CLAVE, devuelve UNDEFINED
 * has(C)           = devuelve True si la Clave existe en el mapa, False en caso contrario
 * delete(C)        = Elimina el par de elementos que tenga la Clave 
 * clear()          = Vacia todo el mapa
 * keys()           = Devuelve las Claves del mapa
 * values()         = Devuelve los Valores del mapa 
 * size             = Tamaño del mapa
 * entries()        = Devuelve TODO EL MAPA, Claves y Valores
 * 
*/


//Set
miMapa.set("pais", "España")
console.log(miMapa)         //se habrá añadido el nuevo par de elementos

//Get
let valorEscogido = miMapa.get("pais")
console.log(valorEscogido)  //devuelve en este caso "España"

//Has
let existeClave = miMapa.has("pais")
console.log(existeClave)    //devuelve true porque la clave "pais" existe

//Delete
miMapa.delete("pais")
console.log(miMapa)         //se habrá borrado la clave "pais" y su valor correspondiente

//Clear
miMapa.clear()
console.log(miMapa)         //mapa vaciado

//Keys
//(añadimos valores porque no se puede interactuar con un mapa vacio (el resultado no se mostraria))
miMapa.set("pais", "España")
miMapa.set("idioma", "Valenciano")

let misClaves = miMapa.keys()
console.log(misClaves)      //devuelve una lista con las claves

//Values
let misValores = miMapa.values()
console.log(misValores)     //devuelve una lista con los valores

//Size
let miTamaño = miMapa.size
console.log(miTamaño)       //tamaño del array, en este caso 2

//Entries
let todoElMapa = miMapa.entries()
console.log(todoElMapa)     //se muestra TODO el mapa 



//########################## Funciones ##########################################

//nombre de una funcion TAMBIEN es un puntero a dicha funcion 

//declaracion normal
function name2(params) {
    //...
}

//declaracion lambda
() => {/*...*/}

//funcion anonima

//las funciones pueden ser el valor de variables
let variableNueva = function name(params) {}

//si creamos una funcion y al invocarla, tenemos MENOS PARAMETROS de los permitidos, devuelve NaN
function suma2(x, y){
    return x + y
}
console.log(suma2(1))    //devuelve NaN

//si creamos una funcion y al invocarla, tenemos MENOS PARAMETROS de los permitidos PERO al declarar la funcion, los parametros valen 0, funciona
function suma2(x, y=0) {
    return x + y
}
console.log(suma2(1))    //devuelve 1

//si creamos una funcion y al invocarla, tenemos MÁS PARAMETROS de los permitidos, ignora los que sobra (si hay 3 parametros, coge los 3 primeros)
function sumaTriple(x,y,z){
    return x + y + z
}
console.log(sumaTriple(1,2,3,4,5,6))    //devuelve 6 (3+2+1)

//dentro de una funcion se puede usar el termino "arguments" a pesar de que no tenga
function saluda() {
    for (let i = 0; i < arguments.length; i++){
        console.log("hola " + arguments[i])
    }
}
saluda("jose", "pepe", "ramon")


//ambitos de variables en funciones
let global = "esta variable es global"
function funcion1(){
    tambienGlobal = "esta es tambien global"
    let noGlobal = "esta NO ES GLOBAL, es local por ser let"
    function funcion2(){
        alert(noGlobal)
        todaviaGlobal = "esta es global"
        let privada = "esta variable es local y privada para la funcion2"
    }
}

//"Acumulacion de funciones"
x = suma2(suma2(1,2),3)   
console.log(x)          //devuelve 3

//Timeout

/**
 * setTimeout(func, ms, arg1, arg2)
 * ---------------------------------------------------------------
 * func = funcion a ejecutar dentro de al menos despues de 'ms' milisegundos. 
 *      - La funcion se deja al final de la cola de eventos cuando hayan transcurrido 'ms' milisegundos.
 * 
*/

//la funcion va a final de la cola de espera
setTimeout(funcion1,3,2,1)



//########################## Proxy ##########################################

//está en medio del destinatario y el origen
const proxyto = {
    get(target, property){
        return target[property]
        //cuando el usuario haga una operacion de "get", el proxy mostrará por pantalla "get"
        //console.log("get")

    },
    set(target, property, Valor){
        if(Valor < 0){console.log("valor no puede ser negativo")}
        else{target[property] = Valor} //actualiza el valor

        //cuando el usuario haga una operacion de "set", el proxy mostrará por pantalla "set" 
        //console.log("set")
    }

}

//clase auxiliar para entender el ejercicio
class CuentaDelBanco {
    constructor(balance) {
        this.balance = balance
    }

}

//crea una nueva cuenta bancaria con valor 100 y con un "sincronizador" llamado "proxyto" (declarado previamente)
const cuenta = new Proxy(new CuentaDelBanco(100), proxyto) //primer argumento es qué quiero "sincronizar" entre origen y destino, segundo parametro es quien se encarga de "sincronizar"/el manejador

//new CuentaDelBanco(100)
console.log(cuenta.balance) //mostrará 100
cuenta.balance = 20
console.log(cuenta.balance) //mostrará 20



//########################## Asíncronia ##########################################

/**
 * Mecanismos de asincronia:
 * 1- Callbacks
 * 2- SetTimeout(funcion, tiempo)
 * 3- Promesas
*/
console.log("primero")
console.log("final")

/**
 * muestra SIEMPRE
 * "primero"
 * "final"
*/

//console.log("primero")
//for (let index = 0; index < 1000000000000000; index++) {}
//console.log("final")

/**
 * muestra:
 * "primero"
 * (no muestra final hasta pasado un tiempo)
*/



//########################## Callbacks ##########################################

//funcion suma auxiliar para la callback
function sum(...params) {
    let res = 0
    for (let number of params)
        res += number
    return res
}


function procesarSuma(dato, funcionCallback) {
    const result = sum(...dato)
}

function procesarResultado(result) {
    console.log("la suma de mis datos es  ${result}")
}

procesarSuma([1,2,3], procesarResultado)



//########################## setTimeout ##########################################

console.log("primero")
setTimeout(() => {console.log("segundo")}, 2000); //se ejecutará la funcion anónima () despues de 2000/1000 segundos (1 segundo)
console.log("tercero")

/**
 * Mostrará:
 * "primero"
 * "tercero" 
 * "segundo"
*/

function paso1(callback1) {
    setTimeout(() => {
       console.log("Paso 1 acabado")
       callback1() //cuando se ejecute esto, SE EJECUTA LA FUNCION ANONIMA QUE ESTA EN LA FUNCION step1()
    }, 1000);
}

function paso2(callback1) {
    setTimeout(() => {
       console.log("Paso 2 acabado")
       callback1() //cuando se ejecute esto, SE EJECUTA LA FUNCION ANONIMA QUE ESTA EN LA FUNCION step1()
    }, 1000);
}

function paso3(callback1) {
    setTimeout(() => {
       console.log("Paso 3 acabado")
       callback1() //cuando se ejecute esto, SE EJECUTA LA FUNCION ANONIMA QUE ESTA EN LA FUNCION step1()
    }, 1000);
}


paso1(()=>{
    paso2(()=>{ //paso 2 depende de paso 1
        paso3(()=>{ //paso 3 depende de paso 2
                console.log("todos los pasos completados")
        })
    })
})

/**
 * Mostrará:
 * Paso 1 acabado
 * Paso 2 acabado
 * Paso 3 acabado
 * todos los pasos completados
*/



//########################## Promesas ##########################################

/**
 * then     => promesa ejecutada con exito
 * catch    => salta un error si no funciona la promesa
 * finally  => funciona siempre
*/

//resolve es si se resuelve
//reject es si no se resuelve
const promesa = new Promise((resolve, reject) => { 
    setTimeout(()=>{
        if(true){
            resolve("Operacion exitosa")
        }else{
            reject("Ha habido un error")
        }
    },4000) //ponemos 4 segundos para que no se solape con los setTimeout de ARRIBA
})

promesa
    .then(result => {
        console.log(result)})
    .catch(errorcito  =>{
        console.log(errorcito)})
    .finally(()=>{
        console.log("Final del codigo")})


//Encadenar promesas

function paso1Promesa() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("Paso 1 acabado CON PROMESA")
            //no se puede llamar a callback(), hay que llamar a resolve
            resolve()
        }, 1000); //cuando pase 1 segundo, imprime el log y llama a resolve
    })
}

function paso2Promesa() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("Paso 2 acabado CON PROMESA")
            //no se puede llamar a callback(), hay que llamar a resolve
            resolve()
        }, 1000); //cuando pase 1 segundo, imprime el log y llama a resolve
    })
}

function paso3Promesa() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("Paso 3 acabado CON PROMESA")
            //no se puede llamar a callback(), hay que llamar a resolve
            resolve()
        }, 1000); //cuando pase 1 segundo, imprime el log y llama a resolve
    })
}

//cuando acaba la promesa 1, ejecuta la promesa 2, cuando acaba la 2, ejecuta la 3, cuando ejecuta la 3, ejecuta la ultima funcion anonima
paso1Promesa().then(paso2Promesa).then(paso3Promesa).then(()=>{console.log("todas las promesas hechas")})


//########################## Event loop ##########################################

/**
 * Componentes del Event loop
 * 1- Call Stack (pila de ejecución)
 * 2- Web APIs (Apis del navegador) o node.js = setTimeout()...
 * 3- Task Queue (Cola de tareas) y MicrotaskQueue
 * 
 * FLUJO DEL EVENT LOOP:
 * 1- Call Stack
 * 2- Operaciones asincronas    -> web APIs o node.js
 * 3- Operacion termina         -> La coloca en Task Queue (Cola de tareas) y MicrotaskQueue
 * 4- Si Call stack vacio       -> Mueve tareas del Microtask Queue o Task Queue al Call Stack
 * 5- El proceso se repite
*/