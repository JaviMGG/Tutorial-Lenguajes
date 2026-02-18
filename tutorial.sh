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



############################### Funcion set #####################################
# set -x => hace que Bash imprima cada comando que ejecuta a la terminal, precedido por un signo +
# set -e => hará que Bash salga con un error si cualquier comando en el script falle, 



############################### Variables #######################################
#Las variables son "CASE SENSITIVE" (sensibles), es decir, la variable "variable" no es lo mismo que "VARIABLE" ni que "variABLE"
variable="Esto es una variable"
variable_numero=23
variableNueva=$variable #la variable "variableNueva" tendrá el valor de la variable "variable"



############################### Llamar a una Variable ###########################
#Para poder llamar a una variable (y poder usarla), hay que poner previamente $
#similar a los punteros de C

$variable
$variable_numero



############################### Operadores ######################################
#Asignacion (=): tiene la siguiente estructura => variable=valor (NADA DE ESPACIOS EN BLANCO)

x="hola variable cambiada"
x=3
xx=33

#Suma
y=23
a=11

y=$((y+=a)) #es lo mismo que poner y = y + a


#Resta
y=23
a=11

z=$((y-=a)) #es lo mismo que poner z = y - a


#Multiplicacion
y=23
a=11

z=$((y*=a)) #es lo mismo que poner z = y * a


#Division
y=23
a=11

z=y/a       #es lo mismo que poner z = y / a


#Modulo
y=23
a=11

z=$((y%=a)) #es lo mismo que poner z = y % a


#Igualdad (==, !=, >, >=, < , <=)

if [ $x == $xx ] 
then
    echo "la variable x y xx son iguales"
fi

if [ $x != $xx ] 
then
    echo "la variable x y xx son diferentes"
fi

mayor=[["$x" > "$xx"]] #otra forma es ["$x" \> "$xx"]
echo "la variable x es mayor que xx? Respuesta $mayor"

menor=[["$x" < "$xx"]] #otra forma es ["$x" \< "$xx"]
echo "la variable x es menor que xx? Respuesta $menor"


#cadena vacia (-z): longitud 0 (null)

v="holamundo"
if [ -z $v ] 
then
    echo "Esta variable v está vacia"
else 
    echo "Esta variable no está vacia"
fi 


#cadena no vacia (-n): longitud != 0

w="textoejemplo"
if [[ -n $w ]] 
then
    echo "Esta cadena no está vacia"
else 
    echo "Esta cadena está vacia"
fi


x=1
y=2

# AND (Usando el comando test [ ])
if [ $x == 1 -a $y == 2 ]; then
    z="Verdadero"
else
    z="Falso"
fi
echo "x es 1 e y es 2? Respuesta: $z"

# OR (Usando el comando test [ ])
if [ $x == 1 -o $y == 2 ]; then
    zz="Verdadero"
else
    zz="Falso"
fi
echo "x es 1 o y es 2? Respuesta: $zz"



############################### Mostrar por pantalla ############################

# En python se usa print(...), en Java se usa System.out.print(...);
# En shell se usa "echo":

echo "Esto es un texto mostrado por pantalla"
echo "El contenido de la variable 'variable_numero' es $variable_numero" #aquí llamamos a la variable "variable_numero" usando previamente el $



############################### Guardarse un comando ###########################
#sugerencia, los comandos buscarlos/aprenderlos. Son los mismos que se usan en el terminal.

comando=$(ls) #Esto lo que hace es: el comando "ls" lo guarda en la variable comando
echo "El comando ejecutado es $comando" #al mostrar por pantalla el echo, ejecutara en este caso "ls"



############################### Salir (exit) ###################################
#exit 0



############################### Condicional (if) ###############################
: '
Ejemplo para comparar (USANDO SINTAXIS JAVA):
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

if [ $variable_numero == 23 ]; then
    echo "la variable vale 23"
elif [ $variable_numero == 18 ]; then
    echo "la variable vale 18"
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

read -r "Escribe tu nombre: " nombre
echo "Tu nombre es: $nombre"

read -r "Escribe el nombre del archivo del que quieras que se muestre su contenido " archivo
echo "el contenido es: "
cat "$archivo" 



############################### Case ###########################################
#se usa para separar distintos casos (es lo mismo que tener muchos ifs seguidos)

case $variable_numero in    #dado la variable "variable_numero"
     1)
        echo "vale 1"       #si vale 1, mostrará este texto
     ;;                     #los dos ;; se usan para "separar casos distintos", si no se pone, se ejecuta el caso 2
     2)
        echo "vale 2"
     ;;
     10|11)
        echo "vale 10 u 11" #pueden ponerse dos posibles combinaciones (o vale 10 o vale 11)
     ;;
     *)                     #caso por defecto (si no vale ni 1 ni 2)
        echo "no sé qué numero es"
     ;;
esac                        #se usa para cerrar el case



############################### Bucle for ######################################
: '
Ejemplo para comparar (usando sintaxis Java):
    for(int i = 1; i < 5; i++){
        System.out.println(i);
    }
'

#bucle desde un principio hasta un final "declarado"
for variable_limitada in $variable_numero 
do
    echo "$variable_limitada"
done

#bucle en un espacio "limitado" (desde 1 hasta 5)
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
    
    - awk '{print "$2"}' (lo que hace es filtrar por columnas y MUESTRA por pantalla la columna 2 (en este caso))

    - rm archivo (lo que hace es borrarlo)
        si tenemos rm archivo.txt, lo borrara
'

archivoNuevo=$(ls) #COMANDO LS del directorio actual

for a in $archivoNuevo; do #la variable "a" obtendra el valor de cada archivo presente (a valdra "archivo.txt", luego valdra "archivo2.java"...) 
    extensiones=$(echo "$a" | tr "." " " | awk '{print $2}')
    #extensiones hara: muestra el archivo, le elimina el . y separa el nombre de la extension, y se muestra por pantalla la extension
    if [ "$extensiones" == "txt" ]; then
        rm "$a"
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
while [ $contador -lt 5 ]; do
    echo "El valor de 'contador' es $contador"
    ((contador++))
done



############################### Ejemplo bucle While #######################
: '
Mostrar por pantalla las lineas de un "fichero.txt"
'
#Se lee asi: le pasas el documento, mientras tenga algo para leer, lo pone en la variable "linea" y ejecuta lo de dentro del do

documento=fichero.txt #tambien podriamos pedirle al usuario que nos diga el nombre del .txt para que lo lea usando el read -p ... documento

while read -r linea; do
    echo "$linea"
done < "$documento"



############################### Bucle until ###############################
#similar al bucle while

contadorN=0
until [ $contadorN -lt 3 ]
do
    echo $contadorN
    contadorN+=1
done



############################### Funciones #################################
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

read -r "Quieres que te diga si esto es una funcion? " valor
if [ "$valor" == "Si" ]; then
    mi_funcion
else 
    mi_noFuncion
fi



############################### Parametros de BASH ######################
: ' 
    Si tenemos un comando tipo: 
    --------------------------------------------
    bash $ ./tutorial.sh primer segundo
    el orden de los parametros de creciente de izquierda a derecha empezando por el 0,
    siendo (en este caso):

    $0 = ./tutorial.sh
    $1 = primer
    $2 = segundo

    Si queremos saber cuales son los parametros, usaremos $*
    Si queremos saber cuantos parametros hay, usaremos $#
'



############################### Sobreescribir un archivo ###############
echo "holamundo" > output.txt #lo que haya en "Output.txt" (si existe), se borrará y sustituira por el contenido del echo



############################### Añadir texto al final del codigo #######
echo "texto final" >> output.txt #el "texto final" se añadirá al final del archivo "output.txt"



############################### Redireccionar la salida ################
ls > output.txt #lo mostrado en pantalla al ejecutar "ls" se guardará en el archivo "output.txt"



############################### Verificar codigo de salida #############
# Puedes verificar el código de salida del comando más reciente usando la variable $?
if [ $? -ne 0 ]; then
    echo "Hubo un error."
fi