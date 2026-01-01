#!/bin/bash

#AUTOR: JaviMGG
# Sugerencia, probar los archivos .sh en alguna distribucion de Linux (y algunas de sus variantes). 

# Esto es un comentario en una sola linea

############################
# Esto es un comentario    #
# en varias lineas         #
# (no es necesario que     #
# tenga forma de cuadrado) #
############################

: '
Esto es otra forma
de tener un comentario
en varias lineas.
'

<<COMMENT
Esto es un comentario usando 
un delimitador, en este caso
"COMMENT".
COMMENT



############################### Variables #######################################
variable="Esto es una variable"
variable_numero=23



############################### Mostrar por pantalla ############################

# En python se usa print(...), en Java se usa System.out.print(...);
# En shell se usa:

echo "Esto es un texto mostrado por pantalla"
echo "El contenido de la variable 'variable_numero' es $variable_numero"



############################### Guardarse un comando ###########################

comando=$(ls) #Esto lo que hace es: el comando "ls" lo guarda en la variable comando
echo "El comando ejecutado es $comando" #al mostrar por pantalla el echo, ejecutara en este caso "ls"



############################### Condicional (if) ###############################
: '
Ejemplo para comparar (usando sintaxis Java):
    if(variable_numero == 23){
        System.out.print(23);
    }
    else if (variable_numero == 18){
        System.out.print(18);
    }
    else{
        System.out.print("El valor de variable_numero es" + variable_numero);
    }
'

if [ "$variable_numero" == 23]; then
    echo "23"
elif ["$variable_numero" == 18]; then
    echo "18"
else 
    echo "El valor de 'variable_numero' es $variable_numero"
fi #se usa para indicar que se termina el if



############################### Interprete (bash) ##############################
: '
   Para evitar tener que ejecutar cada vez en el terminal 
   bash ./script.sh
   hay que poner encima del archivo (primera linea a ser posible):
   #!/bin/bash
   asi pidremos directamente ejecutarlo en el terminal asi:
   ./script.sh
'



############################### Entrada de datos ###############################
: '
Sintaxis:
------------------------------
read -p ... variable
------------------------------
Guardará en la variable "variable" el texto que escriba el usuario
'

read -p "Escribe tu nombre: " nombre
echo "Tu nombre es: $nombre"

read -p "Escribe el nombre del archivo del que quieras que se muestre su contenido " archivo
echo "el contenido es: "
cat $archivo 



############################### Bucle for ######################################
: '
Ejemplo para comparar (usando sintaxis Java):
    for(int i = 1; i < 5; i++){
        System.out.println(i);
    }
'
for numero in {1..5}; do
    echo "En esta iteracion, la variable 'numero' vale: $numero" #cada iteracion mostrara por pantalla el valor de "numero"
done



############################### Ejemplo que combina for con if ###############################
: '
#   Eliminar todos los ficheros que estén en este directorio que terminen en .txt
Ejemplo:
Si el directorio contiene:
    fichero.txt 
    cancion.mp3
    video.mp4
    archivo.java
Al ejecutar el script, debe quedarse de la siguiente manera:
    cancion.mp3
    video.mp4
    archivo.java
----------------------------------------------------
SUGERENCIA:
aprender/usar los siguientes comandos: 
    - tr "." " " (lo que hace es elimina el "." y pone un espacio entre el nombre y la extension): 
        si tenemos archivo.java, se quedará asi: 
            columna 1: archivo
            columna 2: java
                lo que se mostrará es: archivo java
    
    - awk '{print $2}' (lo que hace es filtrar por columnas y MUESTRA por pantalla la columna 2 (en este caso))

    - rm archivo (lo que hace es borrarlo)
        si tenemos rm archivo.txt, lo borrara
'

archivoNuevo=$(ls) #COMANDO LS del directorio actual

for a in $archivoNuevo; do #la variable "a" obtendra el valor de cada archivo presente (a valdra "archivo.txt", luego valdra "archivo2.java"...) 
    extensiones=$(echo $a | tr "." " " | awk '{print $2}')
    #extensiones hara: muestra el archivo, le elimina el . y separa el nombre de la extension, y se muestra por pantalla la extension
    if ["$extensiones" == "txt"]; then
        rm $a
    else
        echo "el archivo no termina en .txt"
    fi
done



############################### Bucle While ###############################
: '
Ejemplo para comparar (usando sintaxis Java):
    int contador = 1;
    while(contador < 5){
        System.out.println("El valor de contador vale" + contador);
        contador++;
    }
'

contador=1
while ["$contador" -lt 5]; do
    echo "El valor de 'contador' es $contador"
    ((contador++))
done



############################### Ejemplo bucle While ###############################
: '
Mostrar por pantalla las lineas de un "fichero.txt"
'
#Se lee asi: le pasas el documento, mientras tenga algo para leer, lo pone en la variable "linea" y ejecuta lo de dentro del do

documento=fichero.txt #tambien podriamos pedirle al usuario que nos diga el nombre del .txt para que lo lea usando el read -p ... documento

while read -r linea; do
    echo $linea
done < "$documento"



############################### Funciones ###############################
: '
Ejemplo para comparar (usando sintaxis C):
    void funcion(){
        printf("esto es una funcion");
    }
'

mi_funcion(){
    echo "esto es una funcion"
}

mi_noFuncion(){
    echo "no te lo digo"
}

read -p "Quieres que te diga si esto es una funcion? " valor
if [$valor == "Si"]; then
    mi_funcion
else 
    mi_noFuncion
fi