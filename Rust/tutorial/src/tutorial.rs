//Autor: JaviMGG

//Esto es un comentario

use std::collections::{HashMap, HashSet};

/**
 * Esto es un
 * comentario
 * en varias lineas
 * 
*/


/**
 * RUST es un lenguaje de tipado fuerte (es decir, si algo es int, no puede cambiar a string)
*/

// Funcion main NECESARIA para el proyecto
fn main() {

    //#################################### mostrar por pantalla "holamundo" ################################
    println!("hola mundo");


    //#################################### Variables #######################################################
    /*
      Tipos primitivos:
           - string
           - int 
           - float
           - booleano
    */
    
    let mi_variable: &str = "Mivariable";  
    let mut mi_variable_nueva: &str = "MiOtraVariable";                         //aqui reservamos todo
    let mi_ultima_variable: String  = String::from("Esto es otra variable");    //aqui reservamos un tamaño fijo de memoria
    let mi_int: i64 = 33;
    //let mi_int64: i64 = 1;
    // let mi_variable_float = 6.5;
    let  mut mi_booleano: bool = true;

    //#################################### mostrar por pantalla "holamundo" ################################
    println!("Mi variable vale: {mi_variable}");
    println!("Mi otra variable vale: {mi_variable_nueva}");
    println!("Mi otra variable vale: {mi_ultima_variable}");
    println!("{}", mi_booleano);

    //#################################### cambiar el valor a las variables ################################
    //mi_variable = "ahora tengo otro texto"; //salta error porque supone que la variable "mi_variable no puede cambiar de valor"
    //mi_variable_float = mi_variable_float + mi_int64; el tipado es tan fuerte que no permite esta suma ERROR

    mi_variable_nueva = "otro valor"; //si permite el cambio por la propiedad "mut"
    mi_booleano = false;    
    
    println!("{mi_variable_nueva}");
    println!("{}", mi_int + 11); //muestra la suma de 33 + 11
    println!("{}", mi_booleano);
    //mi_variable = 6 ERROR


    //#################################### Constantes ######################################################
    //IMPORTANTE, hay que poner el tipo de dato (con las variables ya se hacia automaticamente)
    const MI_CONSTANTE: &str = "miconstante";
    /*   
        IMPOSIBLE CAMBIAR EL VALOR DE UNA CONSTANTE
        const mut Mi_otra_constante: &str = "mi otra constante";
        Mi_otra_constante = "adios";
        println!("{}", Mi_otra_constante);
    */
    println!("{}", MI_CONSTANTE);



    //#################################### IF/ELSE IF/ELSE #######################################################
    let mi_if = 22;    
    let mi_if2 = "banana";

    if mi_if == 22 {
        println!("Acierto");
    }
    else if mi_if < 22 {
        println!("Menor que 32");
    }
    else {
        println!("Mayor que 32");
    }
    
    //operacion AND
    if mi_if == 22 && mi_if2 == "banana"{
        println!("exito")
    }
    else {
        println!("error")
    }

    //operacion OR
    if mi_if == 22 || mi_if2 == "piña"{
        println!("exito")
    }
    else {
        println!("error")
    }



    //#################################### ESTRUCTURAS #######################################################
    /*
        - Lista/arrays/vectores
        - Sets
        - Map
     */

    let mut mi_lista: Vec<&str> = vec!["paco", "pepe", "maria", "pepa"];
    println!("{:?}", mi_lista);

    mi_lista.push("NUEVONOMBRE");
    println!("{:?}", mi_lista[2]);

    let mi_set: HashSet<&str> = vec!["paco", "pepe", "maria", "pepa"].into_iter().collect(); //transforma el vector en set
    println!("{:?}", mi_set);

    let mut mi_mapa: HashMap<&str, i32> = vec![("paco", 22)].into_iter().collect();
    mi_mapa.insert("victor", 23);
    println!("{:?}", mi_mapa);



    //#################################### BUCLES #######################################################
    //for
    for valor_en_lista in &mi_lista { //es mejor acceder a la lista como si fuera un puntero
        println!("{valor_en_lista}");
    }

    for valor_en_set in &mi_set {
        println!("{valor_en_set}");
    }

    for (key, value) in &mi_mapa {
        println!("{} {}", key, value);
    }

    //while
    let mut contador = 0;
    while contador < mi_lista.len() {
        println!("{contador}");
        contador += 1;
    }

    //#################################### FUNCIONES #######################################################
    mi_funcion();
    
    //#################################### ESTRUCTURAS #####################################################
    //similar a cuando en java hacemos un Persona p = new Persona(...)
    
    let usuario = Persona::nueva("Alex", 28);
    println!("{}{}", usuario.nombre, usuario.edad);


}



fn mi_funcion() {
    println!("Esto es una funcion aislada")
}



//creamos el struct con los parametros que tendrá y que tipo son
struct Persona {
    nombre: String,
    edad: u32,
}

// 2. Implementamos la funcionalidad para esa estructura
impl Persona {
    // Función tipo "constructor" para crear una nueva instancia
    fn nueva(nombre: &str, edad: u32) -> Persona { //dado esos 2 parametros devuelve una persona
        Persona {
            nombre: nombre.to_string(),
            edad,
        }
    }
}
