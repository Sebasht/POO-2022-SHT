# POO-2022-SHT
Repositorio para Programación Orientada a objetos

## Respuestas a preguntas teóricas:

### Punto 1:

Encapsulamiento: Si me parece una opción pertinente, ya que las clases hijas necesitan de ese método, todas realizan la misma actividad y al declarar ese método virtual en la clase padre, vuelve el código más intuitivo y le da más seguridad, además, si fuera publica ocurriría el riesgo en el que clases diferentes a las hijas puedan accedera esa información, de esta manera se protege los resultados dados por los juegos.

### Punto 2:

Contenedoras: Si estoy de acuerdo, después de todo al ser un mapa cuenta con una llave, por lo tanto para poder localizar a un jugador solo se necesita el valor de la llave, no necesariamente un orden en concreto.

### Punto 3:

Clases Abstractas: 

* La clase Juego, es una clase abstracta debido a que hace uso de métodos virtuales puros, que serán aquellos que utilizarán las clases hijas, como por ejemplo, el virtual float jugar o el virtual float calcularResultado.
* Estos métodos al ser inicializados en 0 se indica que son metodos abstractos.

* La clase Juego es entonces una clase padre, de la cual no sería posible instanciar objetos, pero sus metodos si pueden ser usados por las clases hijas con caracteristicas comunes, permitiendo a las clases hijas realizar una sobreescritura sobre estos métodos.

### Punto 4:

* En la clase padre existe un método virtual llamado jugar igualado a 0, que indica que es abstracto y puede ser usado por las clases hijas, aquí se realiza esto ya que los juegos tienen una forma de jugarse diferente, por lo tanto cada clase hija puede sobreescribir ese método de una manera diferente como lo requiera. Haciendo uso de métodos con sobreescritura dentro de cada hija.
