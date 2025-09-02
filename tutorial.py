def main():
    ############################################# Numeros #############################################
    a = 17 / 3
    b = 17 //3
    c = 5 * 3 + 2
    d = 5 * (3 + 2)
    print("a:", a, "b:", b, "c:", c, "d:", d)

    ############ Operadores aritmeticos ##############
    print("Operadores aritmeticos basicos:")
    print("Suma:", 5 + 3)   
    print("Resta:", 5 - 3)
    print("Multiplicacion:", 5 * 3) 

    ############ Division normal y entera ##############
    print("division normal:", a, "division entera:", b)

    ############ Operadores aritmeticos ##############
    print ("operacion sin parentesis:", c, "operacion con parentesis:", d)
    
    ############ Potencia ##############
    potencia = 2 ** 3
    potencia2 = -2 ** 3
    potencia3 = (-2) ** 3
    print( "2 elevado a 3 es:", potencia)
    print( "2 elevado a 3 es:", potencia2)
    print( "2 elevado a 3 es:", potencia3)
    
    ############ Numeros negativos ################
    negativo = -5
    print("numero negativo:", negativo)
    negativo *= -1
    print("negativo cambiado a positivo:", negativo)

    ############ Operadores de comparacion ##############
    mayor = 5 > 3
    menor = 5 < 3
    igual = 5 == 3
    mayor_igual = 5 >= 3
    menor_igual = 5 <= 3
    diferente = 5 != 3
    print("5 es mayor que 3:", mayor)
    print("5 es menor que 3:", menor)
    print("5 es igual a 3:", igual)
    print("5 es mayor o igual a 3:", mayor_igual)
    print("5 es menor o igual a 3:", menor_igual)
    print("5 es diferente a 3:", diferente)

    ############################################# Textos #############################################
    a = "Hola"
    b = 'dias'
    c = '1975'

    #print( "Texto con comillas dobles:", a, 
    #       "Texto con comillas simples:", b, 
    #       "numeros con comillas simples:", c)

    d = " \"claro\" ,- es lo que dijo jose"
    print("Texto con comillas dobles y simples:", d)

    e = "Esto es un \nsalto de linea"
    print (e)

    print ("\n""""\
           opciones: tables [OPTIONS]
           -h
           -H hostName
           """)

    ############ Concatenar strings ##############
    a = "hola"
    b = "mundo"
    print("Concatenacion de strings sin espacio entre ellas: ", a + b)
    print("Concatenacion de strings con espacio entre ellas: ", a + " " + b) #tambien se puede hacer si a = "hola "
    print("esta cadena larga para concaternar"
          " se concatena con otra cadena larga aunque esten lejos")

    ############ Separar strings por caracteres ##############
    #     +---+---+---+---+---+---+
    #     | P | y | t | h | o | n |
    #     +---+---+---+---+---+---+
    #     0   1   2   3   4   5   6
    #    -6  -5  -4  -3  -2  -1

    palabra = "Python"
    print("primer caracter de la palabra:", palabra[0])
    print("ultimo caracter de la palabra:", palabra[-1])
    print("caracteres de la palabra desde el segundo hasta el cuarto:", palabra[1:4])
    print("penultimo caracter de la palabra:", palabra[-2])
    print("caracteres desde la posicion 2 hasta el final:", palabra[2:])
    print("caracteres desde el inicio hasta la posicion 4:", palabra[:4])
    print("caracteres fuera de los indices:", palabra[10:15])  # Esto no da error, devuelve una cadena vacía
    
    palabra_mezclada = "Josito"
    print("palabra mezclada:", palabra_mezclada[:4] + palabra[3:])

    ############ Longitud de los strings ##############
    ejemplo2 = "viva el betis"
    print("longitud de la cadena:", len(ejemplo2))

    ############################################# Listas #############################################
    array = [1,2,3,4,5,6,7,8,9,0]
    print(array)

    ############ Mostrar elementos separados/contretos de una lista ##############
    print ("imprimir segundo elemento del array: ", array[1])
    print ("imprimir ultimo elemento del array: ", array[-1]) 
    print ("imprimir desde el segundo elemnto hasta el final:\n", array[2:]) # tambien se puede hacer array[-9:]

    ############ Concatenar elementos de 2 o + listas ##############
    array2 = [10,11,12,13,14,15,16,17,18,19]
    print("primer array:", array,
          "\nsegundo array:", array2,
          "\narray concatenado:", (array+array2))

    ############ Añadir a una lista existente y paso de valor por referencia ##############
    array3 = array #AQUI LO QUE PASAMOS ES LA REFERENCIA, NO EL VALOR
    print(array3)

    if(id(array) == id(array3)):
        print("Arrays primera y auxiliar(array3) iguales, valor por referencia hecho")

    array3.append(83)
    array3.append(5 ** 6)
    print([1,2,3,4,5,6,7,8,9,0], "con elementos añadidos: ", array3)
    
    ############ "Rebanar elementos" = sustituir/cambiar valores/eliminar elementos de listas ##############
    print(array)
    array[3:5] = ["3", "4", "11"]
    print(array)
    array[6:] = []
    print(array)
    array[:] = [] #toda la lista 
    print(array)
    print("longitud de la lista", len(array))

    ############ Crear lista de listas ##############
    array4 = [array, array2]
    print("lista de listas", array4)
    print("segundo elemento de la lista de listas:", array4[1])
    print("primer elemento del segundo elemento de la lista de listas", array4[1][0])

    ############################################# bucle while #############################################
    print ("""\n
        a = 1
        while(a < 7):
            print(a)
            a+1
        """)
    a = 1
    while a < 7:
        print(a)
        a+=1
        
    ############################################# bucle for #############################################
    print("""\n
    for i in range(1, 4): #tambien se puede sustituir range(1,4) por una lista o un array
        print(i)
          """)
    for i in range(1, 4): #tambien se puede sustituir range(1,4) por una lista o un array, en ese caso se recorre todo el array/lista
        print(i)
    
    ############################################# if #############################################
    print("""\
        x = 2    
        if x < 3:
            print("x es menor que 3")
        elif x > 3:
            print("x es mayor que 3")
        else:
            print("x es 2")
          """)
    x = 2    
    if x < 3:
        print("x es menor que 3")
    elif x > 3:
        print("x es mayor que 3")
    else:
        print("x es 2")
    
    ############################################# switch #############################################
    x = 0

    print("""\
        match x:
            case 3:
                print("valor 3")
            case 4: 
                print("valor 0")
            case _:
                print("cualquier valor")    
    """)

    match x:
        case 3:
            print("valor 3")
        case 4: 
            print("valor 0")
        case _:
            print("cualquier valor")

    ############ Crear una lista a partir de un rango de elementos ##############
    print(list(range(4,9)), "habiamos puesto que sea desde 4 hasta 9")
    print("imprimir los elementos desde 1 hasta 10 yendo de 2 en 2 (incremento)",
          list(range(1,10,2)))
    
    print("mostrar desde 0 hasta 10, NO MUESTRA LA LISTA, MUESTRA LA FUNCION QUE SE HACE, SI QUEREMOS MOSTRAR LA LISTA, TENEMOS QUE USAR list")
    print(range(10))

    ############################################# definir y llamar funciones #############################################
    def funcion(): #definir funcion
        #codigo de la funcion
        
    funcion()      #invocar a la funcion
