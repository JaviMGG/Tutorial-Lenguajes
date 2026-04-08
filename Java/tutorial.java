//Autor: JaviMGG

//Esto es un comentario en una linea
/**
 * Esto es
 * un comentario
 * en varias
 * lineas
 */

/**
 * Estructura de los archivos de JAVA y ARGOTS:
 * ------------------------------------------------------------------------
 * Las carpetas que contienen diversos archivos JAVA se denominan "Paquetes"
 * Las hojas/archivos que tiene codigo JAVA se denominan "Clases"
 * Las clases contienen variables, "imports" (opcionales) y los denominados "Métodos"
 * Los métodos tienen la siguiente estructura: cabecera(Parametros OPCIONALES){CODIGO}
 * La cabecera tiene sus "ambitos de vida" (mas abajo está explicado)
 * ------------------------------------------------------------------------
 * IMPORTANTE: en JAVA, el método MAIN puede estar en cualquier posicion dentro de la "class", NO ES NECESARIO QUE sea el ultimo metodo de la clase
 * debido a que JAVA es un lenguaje compilado (un compilador revisa todo hasta que vea que está bien y lo traduce a lenguaje maquina...)
 */

    //##################################### Importar clases/elementos a esta clase ##############################################
    //import java.math.BigDecimal;
    //import java.net.Socket;
    //si queremos que se obtengan muchos mas elementos (y no uno concreto)
    //import java.net.*; //EL * obtendrá todos los elementos que se encuentren en java.net

    //esto se verá en la parte de "Leer de teclado y mostrarlo por pantalla"
    import java.util.Scanner;



public class tutorial {



    //##################################### Escribir HolaMundo (hacer un print) #################################################
    
    /**
     * Dos tipos de prints mas comunes:
     * print sin salto de linea: System.out.print("");
     * print con salto de linea: System.out.println(""); O System.out.print("...\n")
    */
    public static void main(String[] args) {
        System.out.print("holaMundo sin salto de linea");
        System.out.print("holaMundo con salto de linea");
    }



    //##################################### Tipo de datos, tipos de instancias y ambito de vida #################################

    /**
     * Ambito de vida:
     * ------------------------------------------------------------------------
     * Public       = TODOS PUEDEN VER Y UTILIZAR LA VARIABLE QUE TENGA ESTE "ambito" da igual si es esta CLASE O NO
     * Private      = Los metodos que "hereden" de este, NO PUEDEN USARLOS (tanto metodos como variables), es decir, si contiene PRIVATE, es EXCLUSIVO DE ESTA CLASE
     * Protected    = Los metodos que "hereden" de este, SI PUEDEN USARLOS (tanto metodos como variables), es decir, si contiene PROTECTED, ES EXCLUSIVO DE ESTA CLASE Y de sus "hijos"
     * 
     * Tipos de instancias:
     * ------------------------------------------------------------------------ 
     * Static       = Metodo de clase, no depende de un objeto.
     * Synchronized = Control de concurrencia, evita que varios hilos ejecuten el método a la vez sobre el mismo objeto.
     * (nada)       = Metodo de instancia normal.
     * Final        = UNICAMENTE SI EL VALOR ES CONSTANTE, ES DECIR, NO SE PODRÁ ALTERAR/MODIFICAR
     * 
     * Existen distinto tipos de datos:
     * ------------------------------------------------------------------------
     * Enteros      (int)
     * Reales       (double)
     * Float        (float)
     * Caracteres   (char)
     * Boolean      (boolean)
     * String       (String)
     * 
    */

    //ejemplo de posibles combinaciones de las variables y sus declaraciones:
    public int variableInt;                 //se puede declarar sin valor, pero luego hay que darle valor o DARA ERROR
    public double variableDouble = 2.44;    //variable declarada de tipo double
    public static boolean variableBooleana = true;
    private char variableCharacter = 'c';



    //##################################### Declarar y llamar una funcion ##############################################
    
    /**
     * Funciones/metodos: usados para poder ejecutar el codigo que tiene DENTRO
     * Tipos de funciones:
     * ------------------------------------------------------------------------
     * Enteros      (int)       => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * Reales       (double)    => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * Float        (float)     => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * Caracteres   (char)      => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * Boolean      (boolean)   => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * String       (String)    => ES NECESARIO DEVOLVER ALGO/ HACE FALTA QUE LA ULTIMA LINEA DEL METODO SEA "return (tipo de dato correspondiente)"
     * void         (vacio)     => NO ES NECESARIO DEVOLVER NADA/ NO HACE FALTA "return"
    */
    public int getVariableInt(){
        return variableInt;          //SI LA VARIABLE en este caso NO ES ESTATICA Y EL METODO SI LO ES, DARÁ ERROR
    }

    public static boolean getVariableBooleana(){
        return variableBooleana;    //En este caso, tanto variable como metodo SON STATIC AMBOS
    }

    public static int suma(int x, int y){
        int z = x + y;
        return z;                   //se podia haber puesto directamente: return x + y
    }

    public void setCaracterNuevo(char x){
        variableCharacter = x;
    }

    public char getCaracterActual(){
        return variableCharacter;
    }

    public void ejemploLlamarUnaFuncion(){
        getVariableBooleana();              //llama a la funcion getVariableBooleana sin parametros
        int valor1 = 5;
        int valor2 = 8;
        int sumar = suma(valor1, valor2);    

        //llama a la funcion suma pasandole los valores 5 y 8 y ahora, la variable "sumar" será el resultado de lo que devuelva la funcion suma
        System.out.println("la suma de "+ valor1 + " y " + valor2 + " es: " + sumar);
    }



    //##################################### Condiciones ##############################################

    /**
     * Tipos de condiciones:
     * ------------------------------------------------------------------------
     * 1- if, else if, else     => if(condicion){cosa a ejecutar} else if(condicion "secundaria"){cosa a ejecutar} else{cosa a ejecutar si no se cumple las condiciones}
     * 2- switch                => switch(variable que determina los casos){case X: cosa a ejecutar si variable vale X...}
     * 3- operadores ternarios  => (comparacion) ? (si se cumple la comparacion) : (si no se cumple la comparacion)
     * 
    */
    public void ejemploCondiciones(){
        int x = 18;

        //if, else if, else
        if(x == 18){
            System.out.println("tienes 18 años");
        }else if (x < 18){
            System.out.println("tienes menos de 18 años");
        }
        else{
            System.out.println("tienes más de 18 años");
        }
        /**
         * IMPORTANTE, SI el if, else if, else tiene SOLAMENTE UNA INSTRUCCION A EJECUTAR (por ejemplo un print), SE PUEDE ELIMINAR EL {}:
         * if(x == 18)
         *      System.out.println("tienes 18 años");
         * else if (x < 18)
         *      System.out.println("tienes menos de 18 años");
         * else
         *      System.out.println("tienes más de 18 años");
         * 
        */

        //Switch
        x = 17;
        switch (x) {
            case 16 -> {System.out.println("x vale 16");}       //si x vale 16
            case 18 -> {System.out.println("x vale 18");}       //si x vale 18
            default -> System.out.println("x NO TIENE VALOR");  //si x no es ni 16 ni 18
        }

        //otra forma de declarar un switch
        switch (x) {
            case 17:                                            //si x vale 17
                System.out.println("x vale 17");
                break;                                          //si no existiera el break, se ejecutarian los dos "case"
            case 12:                                            //si x vale 12
                System.out.println("x vale 12");
                break;
            default:                                            //si x no tiene un "valor declarado"
                System.out.println("x no tiene valor, es un valor por defecto");
                //al ser el "valor por defecto", NO ES NECESARIO EL BREAK
        }

        //Operadores ternarios
        /**
         * Similar a un if, else
         * estructura:
         * (condicion a cumplir) ? (codigo a ejecutar si se cumple la condicion) : (codigo a ejecutar no se cumple la condicion)
        */
        String s = (variableBooleana) ? ("hola") : ("adios");
        System.out.print(s);
    }



    //##################################### Bucles ##############################################
    
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
    public static void ejemploBucles(){

        //bucle for
        for (int i = 0; i < 10; i++) { //en este ejemplo se lee asi: i = 0, i se ira incrementando en 1 hasta que sea menor que 10 y en cada iteracion, se ejecutara el codigo situado entre {}
            System.out.println(i);
        }

        //bucle while
        int i = 0;
        while(i < 10){
            System.out.println(i);
            i++;
        }

        //bucle do while
        i = 0;
        do{
            System.out.println(i);
            i++;
        }while(i < 10);
    }

    //##################################### Bloque try catch ##############################################
    
    /**
     * Usado para capturar excepciones.
     * Si por ejemplo tenemos una funcion que durante el proceso puede provocar el error, al saltar a dicho error,
     * se captura y se ejecuta el bloque catch
    */
    public static void ejemploTryCatch(int [] a){
        System.out.println("Array actual"+ a.toString());
        try {
            int suma = a[0];
            for (int i = 1; i < a.length; i++) {
                System.out.println(suma+=a[i+1]); //si I vale como máximo 5 y acaba valiendo 6, al acceder a un elemento que no existe (fuera del indice), salta excepcion
            }
        } catch (IndexOutOfBoundsException e) {
            System.out.println("VALOR FUERA DE INDICE"); //al capturarse la excepcion "e", se mostrará por pantalla lo del println
        }
    }



    //##################################### Leer de teclado y mostrarlo por pantalla ######################

    //Para ello usaremos la libreria de java.util.scanner que se encuentra arriba al inicio
    public static void ejemploScanner(){

        Scanner s = new Scanner(System.in);
        String palabraEscrita = s.nextLine();

        System.out.println(palabraEscrita);
    }

} //lo que haya debajo de esta linea NO PERTENECERÁ A LA CLASE Y DARÁ ERROR