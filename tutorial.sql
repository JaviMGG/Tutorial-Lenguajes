--Autor: JaviMGG

/*Esto es 
un comentario
en varias lineas
*/

--Esto es un comentario en una sola linea

/*PARAMETROS DE UNA CONSULTA:
    1-    SELECT:   Selecciona un parametro
    2-    FROM:     Elige la tabla con la que se va a operar
    3-    WHERE:    Condiciones a cumplir para ser seleccionados
*/

/*PARAMETROS OPCIONALES DE UNA CONSULTA:
    1-  SELECT:
            1.1- COUNT()            => Devuelve el número de elementos de la consulta.
                        *           => Cuenta TODOS (incluido repetidos).
                        x           => Cuenta solo los que tengan x (puede que no hayan repetidos, sugerible usar la clave primaria para ello).
            1.2- MAX()              => Devuelve el máximo de un parámetro.
            1.3- MIN()              => Devuelve el mínimo de un parámetro.
            1.4- AVG()              => Devuelve la media de un parametro numérico.
            1.5- DISTINCT()         => Devuelve los parámetros SIN REPETIRSE.
            1.6- x, y               => Se puede devolver más de un parámetro en una consulta.

    2-  FROM (NOMBRE TABLA) x       => x especifica la tabla, sirve por si 2 o más tablas tienen parametros con mismo nombre.
             x, y                   => Podemos usar 2 tablas en una misma consulta.
    
    3-  WHERE:
            (operaciones booleanas) => =, >, <, >=, <=, <>
            (operaciones logicas)   => AND, OR, NOT,...
            LIKE '%abc%'            => condicion que un texto contenga el string "abc"
            BETWEEN x AND y         => Identico a poner x ... AND y ... 
            x IN ()                   => el parámetro x está en la subconsulta del ()
    
    4-  ORDER BY x                  => Ordena el resultado segun un parámetro.
*/

--Ejemplo de ejercicios (Suponiendo que hay una tabla ALUMNO con los siguientes parámetros: nombre (string), edad (int), clase (char))

--1) Devuelve el nombre de los alumnos de edad mayor a 25
SELECT nombre
FROM ALUMNO 
WHERE edad > 25

--2) Devuelve la clase de los alumnos con nombre "JaviMGG", (especificar la tabla)
SELECT a.clase
FROM ALUMNO a
WHERE a.nombre LIKE '%JaviMGG%'

--3) Devuelve el numero de alumnos que tienen una edad menor a 18
SELECT COUNT(*) --el * devuelve todos los alumnos 
FROM ALUMNO a   --es más practico poner un "alias" a las tablas
WHERE a.edad < 18

--4) Devuelve la edad del alumno más joven
SELECT MIN(a.edad)
FROM ALUMNO a

--5) Devuelve la edad media de los alumnos
SELECT AVG(a.edad)
FROM ALUMNO a

--6) Devuelve el nombre de los alumnos ordenados alfabéticamente y que tengan 18 años
SELECT a.nombre
FROM ALUMNO a
WHERE a.edad = 18
ORDER BY a.nombre

--7) Devuelve la clase de los alumnos que tengan una edad entre 18 y 25 años y sus nombres
SELECT a.clase, a.nombre
FROM ALUMNO a
WHERE a.edad BETWEEN 18 AND 25

--8) Devuelve el nombre de los alumnos que no se llamen "JaviMGG", SIN REPETIDOS
SELECT DISTINCT a.nombre
FROM ALUMNO a
WHERE a.nombre NOT LIKE '%JavimGG%'

--9) Devuelve la clase de los alumnos que se llamen "JaviMGG" y su edad sea 14
SELECT a.clase
FROM ALUMNO a
WHERE a.nombre LIKE '%JaviMGG%' AND a.edad = 14

/*
    SUPONIENDO QUE EXISTEN LAS SIGUIENTES TABLAS:
    ALUMNO:     nombre (string), edad (int), clase (char)
    PROFESOR:   nombre (string), edad (int), clase (char)
*/

--10) Devuelve el nombre de los alumnos y profesores que estén en la clase "3B"
SELECT a.nombre, p.nombre
FROM ALUMNO a, PROFESOR p
WHERE a.clase LIKE '%3B%' AND p.clase LIKE '%3B%'
