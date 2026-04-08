--Autor: JaviMGG
{- 
Este es un comentario en varias líneas
donde explicamos el funcionamiento del archivo.
-}

{- 
Estructura de una función:
    - (Nombre de la función) :: (tipo de entrada) -> (tipo de entrada) -> ... -> (tipo de salida)
    - NombreDeLaFuncion parametro1 parametro2 = (definición)
-}

-- Suma de dos enteros
suma :: Int -> Int -> Int
suma x y = x + y

-- Resta de dos enteros
resta :: Int -> Int -> Int
resta x y = x - y

-- Multiplicación de dos enteros
multiplica :: Int -> Int -> Int
multiplica x y = x * y

-- División entre dos enteros (resultado en Double)
division :: Int -> Int -> Double
division x y = fromIntegral x / fromIntegral y

-- Comparar si dos strings son iguales
sonIguales :: String -> String -> Bool
sonIguales a b = a == b

-- Calcular el factorial de un número (ejemplo clásico en Haskell)
factorial :: Int -> Int
factorial 0 = 1                      -- Caso base: factorial de 0 es 1
factorial n = n * factorial (n - 1)  -- Caso recursivo

-- Determinar si un número es par
esPar :: Int -> Bool
esPar n = mod n 2 == 0

-- Determinar si un número es impar (usando "not")
esImpar :: Int -> Bool
esImpar n = not (esPar n)

-- Obtener la longitud de una lista
longitudLista :: [a] -> Int
longitudLista xs = length xs

-- Obtener el primer elemento de una lista
primerElemento :: [a] -> a
primerElemento xs = head xs

-- Obtener el último elemento de una lista
ultimoElemento :: [a] -> a
ultimoElemento xs = last xs

-- Ejemplo de función con guardas
mayorDeDos :: Int -> Int -> Int
mayorDeDos x y
    | x > y     = x
    | otherwise = y

-- Función que suma todos los elementos de una lista
sumaLista :: [Int] -> Int
sumaLista xs = sum xs

-- Función que duplica cada elemento de una lista
duplicaLista :: [Int] -> [Int]
duplicaLista xs = map (*2) xs
