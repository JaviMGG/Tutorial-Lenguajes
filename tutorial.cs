//Autor: JaviMGG

//Esto es un comentario en una linea

/**
 * Esto es un comentario
 * en un bloque 
 * de texto
*/


using System;

namespace Name
{
    // ################### Crear una clase ###################
    class tutorial
    {
        // ################### Crear un metodo ###############
        static void Main(string[] args)
        {
            //Declarar una variable: <tipo de dato> nombreVariable = <valor de la variable>
            string palabraString = "holaBienvenidos";
            int numeroEntero = 22;
            double numeroDouble = 2.3;
            float numeroFloat = 6.5f;
            bool variableBooleana = true;

            //Mostrar por pantalla
            Console.WriteLine("HolaMundo");
            Console.WriteLine($"El valor de mi variable double es {numeroDouble} y el de mi variable float es {numeroFloat}");

            //Mostrar por pantalla el valor de una variable
            Console.WriteLine(palabraString);

            //Cambiar el valor de una variable
            palabraString = "ahoraTengoOtroValor";
            Console.WriteLine(palabraString);
        
            //Sumarle un numero a una variable
            Console.WriteLine("La variable vale:", numeroEntero);
            numeroEntero += 4; //es lo mismo que poner: numeroEntero = numeroEntero + 4

            Console.WriteLine("Ahora, la variable vale:", numeroEntero);

            Console.WriteLine("Ahora, la variable vale:", numeroEntero + 5);

            //Sumar todas las variables independientemente del tipo de dato
            Console.WriteLine(numeroEntero + numeroDouble + numeroFloat);


            //- Tipo dinamico: especifica que la variable puede cambiar de tipo de dato
            dynamic variableDinamica = 33;
            Console.WriteLine(variableDinamica);

            variableDinamica = "He cambiado de valor";
            Console.WriteLine(variableDinamica);


            //- Tipo "var": hace que no sea necesario especificar el tipo de dato
            var variableVar = 33; 
            Console.WriteLine(variableVar); //Mostrará el valor de una variable con tipo de dato entero

            variableVar = "hola";
            //Console.WriteLine(variableVar); SALTA ERROR porque NO se puede cambiar el tipo de dato de una var


            //- Tipo "const": valor constante, no se puede modificar
            const string VariableConst = "esta variable es constante";
            Console.WriteLine(VariableConst);

            //################################ Estructuras ######################################
            //- Arrays
            var array = new string[] {"hola", "adios", "dia", "noche"};
            Console.WriteLine(array);

            //Mostrar primer elemento del array
            Console.WriteLine(array[0]);

            //Mostrar elemento "n" del array
            int n = 2;
            Console.WriteLine(array[n]);

            //Modificar valor del elemento "n"
            array[n] = "tristes";
            Console.WriteLine(array[n]);


            //- Diccionarios: tiene <clave, valor>
            var diccionario = new Dictionary<string, int>
            {
                {"Javier", 33 },
                {"Antonio",22 },
                {"Mario",  53 }
            };

            //Mostrar el valor de la clave "Javier"
            Console.WriteLine(diccionario["Javier"]); //mostrará 33


            //- Set
            var set = new HashSet<string> {"Javier", "Javier", "Antonio", "Juan"};


            //- Tupla
            var tupla = ("Juan", "Perico", "Andres");
            Console.WriteLine(tupla);

            //################################ Condicionales/ifs ###########################
            int x = 0;
            if (x == 0)
            {
                Console.WriteLine("X vale cero");
            }else if (x == 2)
            {
                Console.WriteLine("X vale dos");
            }
            else
            {
                Console.WriteLine($"X vale, {x}");
            }

            //################################ Bucles ######################################
            //- For
            const int length = 4;
            for (int i = 0; i < length; i++)
            {
                Console.WriteLine(i);
            }


            //- Foreach
            foreach (var item in array)
            {
                Console.WriteLine(item); //mostrará por pantalla cada elemento del array "array"
            }

            //- While
            int i = 0;
            while (i < length)
            {
                Console.WriteLine(i);
                i++;
            }


            //- Do, while
            int i = 0;
            do
            {
               Console.WriteLine(i);
               i++;

            } while (i < length);

            //################################ Funciones ###################################
            MiFuncion();
            int x = 2, y = 2;
            MiFuncionSuma(x,y);

            //################################ Llamar a clases #############################
            Persona p = new Persona("pepe", 22);
            Console.WriteLine(p.name);

            p.age = 44;
            Console.WriteLine(p.age);
        }

        static void MiFuncion()
        {
            Console.WriteLine("Esta funcion está fuera del main");
        }

        static int MiFuncionSuma(int x, int y)
        {
            return x + y;
        }

        //################################ Clases ##########################################
        class Persona
        {
            //Atributos de una clase
            public string name {get; set;} //el {get; set;} indica que el atributo "name" se puede obtener o modificar
            public int age {get; set;}

            //Constructor de una clase
            public Persona(string name, int age)
            {
                this.name = name;
                this.age = age;
            }
        }
    }    
}
