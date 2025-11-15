--Autor: JaviMGG

/*Esto es 
un comentario
en varias lineas
*/

--Esto es un comentario en una sola linea

/*PARAMETROS DE UNA CONSULTA:
-----------------------------------------------------
    1-    SELECT:   Selecciona un parametro
    2-    FROM:     Elige la tabla con la que se va a operar
    3-    WHERE:    Condiciones a cumplir para ser seleccionados
-----------------------------------------------------
*/

/*PARAMETROS OPCIONALES DE UNA CONSULTA:
-----------------------------------------------------
    1-  SELECT:
            1.1- COUNT()            => Devuelve el número de elementos de la consulta.
                        *           => Cuenta TODOS (incluido repetidos).
                        x           => Cuenta solo los que tengan x (puede que no hayan repetidos, sugerible usar la clave primaria para ello).
            1.2- MAX()              => Devuelve el máximo de un parámetro.
            1.3- MIN()              => Devuelve el mínimo de un parámetro.
            1.4- AVG()              => Devuelve la media de un parametro numérico.
            1.5- DISTINCT()         => Devuelve los parámetros SIN REPETIRSE.
            1.6- x, y               => Se puede devolver más de un parámetro en una consulta.
            1.7. SUM()              => Suma los elementos

    2-  FROM (NOMBRE TABLA) x       => x especifica la tabla, sirve por si 2 o más tablas tienen parametros con mismo nombre.
             x, y                   => Podemos usar 2 tablas en una misma consulta.
    
    3-  WHERE:
            (operaciones booleanas) => =, >, <, >=, <=, <>
            (operaciones logicas)   => AND, OR, NOT,...
            LIKE '%abc%'            => condicion que un texto contenga el string "abc"
            BETWEEN x AND y         => Identico a poner x ... AND y ... 
            x IN ()                   => el parámetro x está en la subconsulta del ()
    
    4-  ORDER BY x                  => Ordena el resultado segun un parámetro.
-----------------------------------------------------
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
    ALUMNO:     codigo (char), nombre (string), edad (int), clase (char)
    PROFESOR:   codigo (char), nombre (string), edad (int), clase (char)
*/

--10) Devuelve el nombre de los alumnos y profesores que estén en la clase "3B"
SELECT a.nombre, p.nombre
FROM ALUMNO a, PROFESOR p
WHERE a.clase LIKE '%3B%' AND p.clase LIKE '%3B%'


/*CONSULTAS UNIVERSALENTE CUANTIFICADAS:
-----------------------------------------------------
    Consultas que buscan filas que satisfagan una condición para todas las filas de un conjunto
    
    Ejemplo: Todos los humanos son seres vivos <=> No hay un humano que no sea un ser vivo
*/
--Ejemplo de ejercicio

/*
    Asumir la existencia de estas tablas=> 
        Departamento:   cod_dep (char), nombre (string), director (string), telefono (char)
        PROFESOR:       codigo (char), nombre (string), edad (int), clase (char), cod_dep (char)
    11) 
        Devuelve el codigo y nombre de los departamentos tales que TODOS los profesores de ese departamento TIENEN COMO provincia Teruel
    -Esto es equivalente a decir:
        Devuelve el codigo y nombre de los departamentos tales que NO EXISTE un profesor de ese departamento Y NO su provincia es Teruel
*/

SELECT d.cod_dep, d.nombre
FROM Departamento d
WHERE NOT EXISTS (
    --esta subconsulta devuelve todos los profesores que tengan como provincia "Teruel"    
    SELECT *
    FROM PROFESOR p
    WHERE d.cod_dep = p.cod_dep AND NOT p.provincia LIKE '%Teruel%'
    )
    AND EXISTS(
        --ESTA CONDICION SE HACE PARA QUE EL CONJUNTO VACIO NO ESTÉ IMPLICADO
        SELECT *
        FROM PROFESOR P1
        WHERE d.cod_dep = P1.cod_dep
    )

/*12)
        Obtener el código y nombre de los departamentos en los que todos los profesores son de la provincia de "Teruel"
        -Es equivalente a decir:
        Obtener el codigo y nombre de los departamentos en los que LA CANTIDAD DE PROFESORES DE ESE DEPARTAMENTO es igual a la CANTIDAD DE PROFESORES que tienen como provincia "Teruel"
*/
SELECT d.cod_dep, d.nombre
FROM Departamento d
--todo el where sirve para comparar el numero de profesores
WHERE (
        SELECT COUNT(*)
        FROM PROFESOR p
        WHERE d.cod_dep = p.cod_dep 
    ) = (
        SELECT COUNT(*)
        FROM PROFESOR p2
        WHERE d.cod_dep = p2.cod_dep AND p2.provincia LIKE '%Teruel%'
    )
--Condicion para que el estado nulo no esté implicado, IMPORTANTE PONERLA
AND 0 < (   
        SELECT COUNT(*)
        FROM PROFESOR p2
        WHERE d.cod_dep = p2.cod_dep
    )


/*Consultas Agrupadas:
-----------------------------------------------------
    SELECT      => Parametro que queremos
       COUNT(*) => Si lo usamos teniendo un GROUP BY, devuelve el NUMERO DE FILAS DE UN GRUPO
    FROM        => Tablas que se usan
    WHERE       => Condicion a cumplir
    GROUP BY    => Agrupan segun un parámetro. Al utilizarlo, LAS FILAS DEJAN DE TENER RELEVANCIA, AHORA LO TIENEN LOS GRUPOS.
    HAVING      => Condicion a cumplir los GRUPOS
*/

/*
    Suponer que existen las siguientes tablas:
    Profesor: dni (char), nombre (string), telefono (char), cod_dep (char), provincia (string), edad (int)
    Docencia: dni (char), cod_asg (char), gteo (int), gpra (int)
    Asignatura: cod_asg (char), nombre (string), semestre (int), teoria (int), practicas (int), cod_dep (char)
*/

--13) Obtener para cada profesor que tiene docencia, el DNI, el nombre y cuantas asignaturas imparte si imparte más de 1
SELECT p.dni, p.nombre, COUNT(d.cod_asg)
FROM profesor p, docencia d
WHERE p.dni = d.dni
GROUP BY p.dni, p.nombre
HAVING COUNT(*) > 1

--14) Obtener el codigo y el nombre de cada asignatura y la edad media de los profesores que la impartes si son más de 3
SELECT a.cod_asg, a.nombre, AVG(p.edad)
FROM Asignatura a, Profesor p, Docencia d
WHERE a.cod_asg = d.cod_asg AND p.dni = d.dni 
GROUP BY a.cod_asg, a.nombre
HAVING COUNT(*) > 3


/*Consultas con subconsultas en el SELECT
    SELECT A, (SELECT
               FROM ...
               )
    FROM x
    WHERE condicion
-----------------------------------------------------
    SE LEERIA ASI: 
-----------------------------------------------------
    Cada fila de X pasa a WHERE. Se eliminan las que no cumplan la condicion "condicion". 
    De ese resultado, obtenemos A y el resultado de ejecutar la subconsulta... 
*/

--15) Obtener para cada profesor, el DNI, el nombre y cuantas asignaturas imparte
SELECT p.dni, p.nombre, (SELECT COUNT(*) FROM Docencia d WHERE D.dni = p.dni)
FROM Profesor p

--15) Obtener para cada profesor, el DNI, el nombre y cuantas asignaturas imparte SI IMPARTE MÁS DE 1
SELECT p.dni, p.nombre, (SELECT COUNT(*) FROM Docencia d, WHERE D.dni = p.dni)
FROM Profesor p
WHERE (SELECT COUNT(*) FROM Docencia d, WHERE D.dni = p.dni) > 1


/*Consultas conjuntistas
-----------------------------------------------------
    (consulta 1)
    UNION           <==> elimina los repetidos
    (consulta 2)
-----------------------------------------------------
    (consulta 1)
    INTERSECT       <==> equivalente a un AND
    (consulta 2)
-----------------------------------------------------
    (consulta 1)
    MINUS           <==> Esta en la consulta 1 Y NO está en la consulta 2
    (consulta 2)
*/

/*Consultas con concatenacion
    SELECT *
    FROM 
    WHERE
*/


/*Instrucciones para modificar una tabla en SQL:
-----------------------------------------------------
    INSERT:
        --Insertar una fila:
            INSERT INTO nombre_tabla 
                    (parametros)
            VALUES (valores de los parametros)

        --Insertar varias filas usando una consulta:
            INSERT INTO nombre tabla 
                    (parametros)
            SELECT ...
            FROM ...
            WHERE ...
-----------------------------------------------------
    DELETE:
        --Elimina una fila:
            DELETE FROM nombre_tabla
                 WHERE (condicion)
-----------------------------------------------------
    UPDATE:
        --Modifica una fila:
            UPDATE nombre_tabla SET nuevos_valores
                  WHERE (condicion para determinar la fila)
-----------------------------------------------------
    TRANSACCIONES (es detalle curioso)
        COMMIT      => Aceptar los cambios (como con github)
        ROLLBACK    => Deshacer los cambios
*/


/*DDL <=> Generar una base de datos
-----------------------------------------------------
    Crear una tabla:
        CREATE TABLE nombre_tabla (
            parametro1 CHAR(4) PRIMARY KEY DEFERRABLE INITIALLY DEFERRED 
            parametro2 INTEGER  NOT NULL
            parametro3 FLOAT(4) NOT NULL UNIQUE
            parametro4 string(8) NOT NULL
                CHECK (parametro4 IN ("hola", "adios", "dia", "noche"))
            parametro5 string(4) NOT NULL
                CONSTRAINT nuevo_parametro5
                  REFERENCES Otra_Tabla(parametro5_2) DEFERRABLE INITIALLY DEFERRED
        )
        PRIMARY KEY DEFERRABLE INITIALLY DEFERRED: para indicar que el parametro1 es una clave primaria y ponerle sus restricciones
        NOT NULL:                               valor no nulo (el parametro no puede valer ?)
        NOT NULL UNIQUE:                        valor no nulo Y es valor único (no puede haber repetidos)
        NOT NULL CHECK (x IN (...,...,...)):    valor no nulo y revisa si x ESTÁ EN los valores de (...,...,...)
        NOT NULL CONSTRAINT x REFERENCES y(z):  valor x es clave ajena del valor z de la tabla y
-----------------------------------------------------
    Modificar una tabla:
        ALTER TABLE nombre_tabla{
            ADD (atributo)
            MODIFY [Columna a modificar] (nombre del atributo)
            DROP [COLUMN] columna a borrar
            ADD
        }
-----------------------------------------------------
    Borrar una tabla:
        DROP TABLE nombre_tabla {CASCADE CONSTRAINTS si sus elementos está en otras}
-----------------------------------------------------
    Crear una vista (son actualizables y se pueden borrar):
        CREATE VIEW nombre_vista AS
        SELECT *
        FROM tabla
        WHERE ...

        //si quiero meter un nuevo parámetro, tiene que cumplir las condiciones de SELECT, FROM Y WHERE
*/