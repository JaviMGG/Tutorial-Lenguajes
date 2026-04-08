//Autor: JaviMGG

//Esto es un comentario en una linea

/*
	Esto es un 
	comentario
	en varias lineas
*/

//GO es un lenguaje Fuertemente tipado: No puedes sumar un int con un float64 sin convertir uno de ellos.


package main

import (
	"fmt"
	"sync"
	"time"
)

// 1. ESTRUCTURAS (Classes en otros lenguajes)
type Aprendiz struct {
	Nombre string
	Nivel  int
}

// Método asociado a la estructura
func (a Aprendiz) Saludar() {
	fmt.Printf("Hola, soy %s y estoy en nivel %d de Go.\n", a.Nombre, a.Nivel)
}

func main() {
	fmt.Println("Bienvenido al Kit de Supervivencia de Go")

	// 2. VARIABLES Y TIPOS
	var mensaje string = "Aprendiendo"
	herramientas := 5 // Declaración corta (infiere tipo int)
	esDivertido := true

	//%s = mensaje, %d = herramientas, %v = esDivertido
	fmt.Printf("%s con %d herramientas. ¿Es divertido?: %v\n", mensaje, herramientas, esDivertido)

	// 3. COLECCIONES: Slices y Maps
	// Slices (arrays dinámicos). Son mucho más comunes que los arrays fijos. Se usan con append.
	lenguajes := []string{"C", "Python", "Java"}
	lenguajes = append(lenguajes, "Go")

	// Maps (diccionarios llave-valor)
	puntos := map[string]int{"Go": 10, "Python": 8}

	fmt.Println("Lenguajes:", lenguajes)
	fmt.Println("Puntos de Go:", puntos["Go"])

	// 4. CONTROL DE FLUJO
	if puntos["Go"] > 5 {
		fmt.Println("Go tiene buena puntuación.")
	}

	for i, lang := range lenguajes {
		fmt.Printf("Index %d: %s\n", i, lang)
	}

	// 5. USO DE ESTRUCTURAS
	usuario := Aprendiz{Nombre: "Tu Nombre", Nivel: 1}
	usuario.Saludar()

	// 6. CONCURRENCIA (Goroutines y Channels)
	// Canales (chan): 
	// Es la forma segura en que las goroutines se comunican entre sí 
	// ("No comuniques compartiendo memoria, comparte memoria comunicando").

	canal := make(chan string)
	var wg sync.WaitGroup
	wg.Add(1)

	// Lanzamos una función anónima en una "goroutine" (hilo ligero)
	// Con la palabra clave go, ejecutas funciones de forma asíncrona.
	go func() {
		defer wg.Done()
		time.Sleep(1 * time.Second)
		canal <- "Proceso en segundo plano completado ✌️"
	}()

	// Recibimos del canal (esto bloquea hasta que haya datos)
	resultado := <-canal
	fmt.Println(resultado)
	
	wg.Wait()
}