# Práctica 07. Iteraciones. Git y GitHub.

# Factor de ponderación: 7

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Sea capaz de resolver problemas sencillos en C++ usando todos los conocimientos adquiridos hasta ahora, 
y en particular haciendo uso de sentencias iterativas
* Comience a utilizar funciones en sus programas y modularice sus programas en diferentes funciones
* Estudie y conozca los fundamentos de trabajo con las herramientas Git y GitHub

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica.
Se comprobará que el alumnado:
* Es capaz de escribir programas simples en C++ que resuelvan problemas de
  complejidad similar a los que se han propuesto para esta práctica
* Hace que sus programas se estructuren en torno a diferentes funciones (sean modulares)
* Ha automatizado la compilación de sus programas usando un fichero `Makefile`
  para cada uno de los programas que desarrolle 
* Acredita que es capaz de subir programas a la plataforma 
[Jutge](https://jutge.org/)
para su evaluación
* Ha incluido un comentario prólogo en todos los ficheros (`*.cc`, `*.h`) de sus ejercicios
* Hace que todos los programas de sus prácticas se ajusten a la
[Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Acredita que es capaz de editar ficheros remotos en su VM usando vi
* Demuestra que es capaz de ejecutar comandos Linux en su VM

### Introducción a Git y GitHub
[GitHub](https://github.com/)
es un servicio en la nube con una interfaz web que ayuda a los desarrolladores a almacenar y administrar el código
fuente de sus programas así como a llevar un registro y control de cualquier cambio que se realice sobre ese código. 
[Git](https://git-scm.com/)
es un sistema distribuido de control de versiones.
En Git todo el código y su historial de cambios se encuentran disponibles en el ordenador del desarrollador.
En la web se puede encontrar multitud de tutoriales sobre el uso de GitHub y git y
[este](https://www.diegocmartin.com/tutorial-git/), por ejemplo puede ser un buen punto de comienzo para estudiar
ambas herramientas.
Esta [guía simple](https://rogerdudler.github.io/git-guide/) también puede ser útil para un uso inicial de ellas.

A la hora de estudiar estas herramientas ha de tener en cuenta que el uso que en esta asignatura se va a
realizar de las mismas es básico: inicialmente cada estudiante va a utilizar git/GitHub exclusivamente para almacenar el
código fuente de cada una de las prácticas y ejercicios de programación que desarrolle.
No se pretende que compartan código a través de git ni que colaboren en el desarrollo de código usando estas
herramientas.
También ha de tener en cuenta que un entorno de desarrollo colaborativo de programas es el escenario más
habitual y en el que estas herramientas muestran su relevancia.

Para crear un repositorio de código hay básicamente dos opciones: clonar (copiar) un repositorio 
(que ha de ser público) del que se conozca su dirección o bien crear uno partiendo de cero.
Mostraremos a continuación la primera de estas opciones, que será la más habitual 
en las prácticas de *Informática Básica* puesto que
con cada una de las siguientes prácticas el profesorado le entregará el enlace a un repositorio público que
Ud. tendrá que clonar haciendo una copia privada del mismo para su trabajo.

Antes de comenzar a trabajar ahora con Git, añada la clave ssh de su máquina virtual Linux a su cuenta GitHub.
Esta tarea es posible que la realizara en la primera práctica de la asignatura, pero en caso contrario ha de
hacerlo Ud. ahora siguiendo 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account).
En esa página siga el enlace 
[Generated a new SSH key and added it to the ssh-agent](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
para generar una clave ssh en su máquina virtual (también puede hacer lo mismo con otros sistemas Linux con
los que trabaje habitualmente, como su instalación de VirtualBox o WSL).
También la sección "Trabajando con Git en Remoto" del
[tutorial de Diego Martín](https://www.diegocmartin.com/tutorial-git/) 
puede serle de ayuda para configurar la clave ssh.

[Estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/creating-cloning-and-archiving-repositories/cloning-a-repository)
explican cómo clonar un repositorio una vez obtenida su dirección en GitHub.

para clonar el repositorio de esta práctica, cuya dirección es `git@github.com:IB-2023-2024/P07-iterations.git`
en su máquina virtual Ubuntu de la asignatura acceda al directorio en el que esté organizando sus
prácticas y ejecute:
```
$ git clone git@github.com:IB-2023-2024/P07-iterations.git practica07-iterations
```
En ese comando, el segundo parámetro (`practica07-iterations`) es el nombre del directorio donde se incluirá
el contenido del repositorio que se está copiando.
Puede usar Ud. ese nombre u otro que le parezca adecuado.
El primer parámetro es la dirección del repositorio que ha de ser público para poder copiarlo.
Una vez ejecutado el comando, acceda al directorio `practica07-iterations` y examine el contenido del mismo.

GitHub utiliza profusamente ficheros de texto con formato Markdown, que suelen tener la extensión `.md`
El fichero `README.md` es un fichero de texto (compruébelo con el comando `file`) en formato Markdown.
Markdown es un lenguaje de marcas que permite aplicar formato (negrita, itálicas, imágenes, listas, etc.) a un
fichero de texto.
Este texto que está Ud. leyendo está escrito asimismo en un fichero con formato Markdown, y es uno de los que
ha descargado.
El formato fue ideado para elaborar textos cuyo destino iba a ser la web con más rapidez y sencillez que si se
empleara HTML.

No es neceario que aprenda Markdown en esta asignatura, pero si tiene interés en ello, la referencia 
[Qué es Markdown, para qué sirve y cómo usarlo](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo)
puede servirle de introducción.
[Este tutorial](https://guides.github.com/features/mastering-markdown/) es útil para un
conocimiento más profundo y por último 
[StackEdit](https://stackedit.io/) es un editor de Markdown con una interfaz web, que puede resultarle igualmente útil.

A continuación ya está todo listo para que acceda al directorio de trabajo de esta práctica (el directorio que
en este documento se ha llamado `practica07-iterations`) y desarrolle en él todos los ejercicios de esta
práctica.
Dentro de ese directorio cree subdirectorios para cada uno de los ejercicios de la práctica.
Ahora todo el trabajo ha de realizarlo de la forma habitual, editando sus programas dentro de ese
directorio y realizando todas las pruebas que considere oportunas.
Después de cada sesión de trabajo recuerde "subir" sus cambios a la nube de GitHub.
Para ello, y después de borrar del directorio los ficheros que no desee retener (ficheros ejecutables, o con
código binario), la secuencia habitual de comandos `git` a ejecutar suele ser la siguiente:
```
$ git pull
$ git add .
$ git commit -m "Texto alusivo a los cambios realizados"
$ git push
```
* El primero de los comandos anteriores, `git pull` es siempre conveniente porque de ese modo se asegura que se descarga 
localmente la última versión del código que esté alojado en la nube de GitHub.
* `git add .` actualiza el índice de git con el contenido del directorio actual (nótese el punto -directorio
  actual, el de trabajo- en el comando).
* `git commit` registra el el repositorio los cambios que se hayan realizado. A esos cambios les asocia el
mensaje de texto que aparece en el comando. 
* `git push` Actualiza (sube los cambios a la nube) el repositorio en la nube.

Esta secuencia de comandos git debiera Ud. usarla con relativa frecuencia (al finalizar cada ejercicio, al
menos) para guardar copia de su trabajo en su repositorio privado.

Explicaciones más detalladas de este *workflow* (flujo de trabajo) las puede hallar en el primer
[tutorial](https://www.diegocmartin.com/tutorial-git/)
que se propone en este documento.

La otra alternativa para crear un repositorio es crearlo directamente mediante la interfaz web de GitHub.
Si quiere probar esta otra posibilidad, acceda a su cuenta GitHub y siga 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/create-a-repo)
para crear un repositorio en su cuenta de GitHub.
Elija un nombre adecuado para su repositorio (en lugar de `hello-world`).
Haga que su repositorio sea privado.


### Material de estudio complementario
Estudie todo lo que se indica en el epígrafe 
[Comments](https://google.github.io/styleguide/cppguide.html#Comments) 
de la Guía de Estilo de Google y ponga en práctica todo lo que en ella se propone.

Estudie del
[tutorial de referencia](https://www.learncpp.com/)
en la asignatura los siguientes apartados:
* [Comments](https://www.learncpp.com/cpp-tutorial/comments/)
* El capítulo 2
[Basics: Functions and Files](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)
(completo)
* [Command line arguments](https://www.learncpp.com/cpp-tutorial/command-line-arguments/)

### Diseño de los programas
Recuerde las que se han estudiado como *Buenas Prácticas* a la hora de diseñar sus funciones:
* El código deberá organizarse en diferentes funciones 
* Cada función deberá realizar una única tarea y hacerlo correctamente 
* El identificador de una función debe reflejar claramente lo que la función hace 

Tal como se indica en 
[How to design your first programs](https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/)
su código debiera estar organizado en torno a funciones que se invocan desde la función *main()*.
Así la apariencia habitual de la función principal de cualquier programa debiera ser algo similar a:
``` .cpp
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
  }
  GetUserInput();
  GetMathematicalOperation();
  GetUserInput();
  CalculateResult();
  PrintResult();

  return 0;
}
```
en el sentido de que la función *main()* es una mera *orquestadora* de las funciones que componen el programa.
*main()* pasa a esas funciones los parámetros necesarios para su funcionamiento y las diferentes funciones
devuelven a *main()* el valor que calculan (si fuera el caso).

Incluya en todos sus programas sendas funciones cuya declaración sería:
```
void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
```
La primera de ella se invocará al comienzo de la ejecución para imprimir un mensaje explicativo de
la finalidad del programa en cuestión.
La función *CheckCorrectParameters()* devolverá `true` si al programa se le han pasado el número adecuado de
parámetros por línea de comandos (3 en el ejemplo anterior) y `false` en caso contrario.
Estude el programa 
[check-correct-parameters.cc](https://github.com/IB-2023-2024/IB-class-code-examples/blob/master/Functions/check-correct-parameters.cc)
de los ejemplos de código de las clases de teoría que ilustra el uso de estas dos funciones.

### Ejercicios
* Al realizar los ejercicios cree dentro de su repositorio de esta práctica un directorio diferente
para cada uno de los ejercicios.
Asigne a cada uno de esos directorios nombres significativos. 
* Automatice la compilación del programa correspondiente a cada ejercicio con un fichero `Makefile`
independiente para cada programa e inclúyalo en el correspondiente directorio.

1. Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión. 
```
Public test cases
Input           Output
2022              6
1492             16
0                 0
```

2. Desarrolle un programa que imprima los N primeros términos de la 
[Serie de Fibonacci](https://en.wikipedia.org/wiki/Fibonacci_number). 
Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
```
Public test cases
Input           Output
5                 0 1 1 2 3
9                 0 1 1 2 3 5 8 13 21
1                 0
```

3. Estudie en el tutorial Learn C++ los epígrafes
[Numeral systems (decimal, binary, hexadecimal, and
octal)](https://www.learncpp.com/cpp-tutorial/numeral-systems-decimal-binary-hexadecimal-and-octal/)
y
[Converting between binary and
decimal](https://www.learncpp.com/cpp-tutorial/converting-between-binary-and-decimal/).

Escriba un programa `binary-to-decimal.cc` que convierta números binarios en decimal.
No utilice los tipos `std::string`, `std::vector` o `std::array`.
Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y
finalizar la ejecución.
```
Public test cases
Input           Output
1111              15
1011110           94
1018110        Wrong Input
10010111         151
```

4. Escriba un programa `decimal-to-binary.cc` que convierta números de decimal a binario.
No utilice los tipos `std::string`, `std::vector` o `std::array`.
```
Public test cases
Input           Output
15              1111
94              1011110
151             10010111
```

5. Escriba un programa `leap-year.cc` que indique si un año es o no 
[bisiesto](https://en.wikipedia.org/wiki/Leap_year)
Un año bisiesto tiene 366 días. 
Después de la reforma gregoriana, los años bisiestos son aquellos múltiplos de cuatro que no terminan con dos ceros, 
y también los años que terminan con dos ceros tales que, después de eliminar estos dos ceros, son divisibles por cuatro. 
Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto. 

```
Public test cases
Input        Output
1999           NO
1968          YES
2000          YES
1800           NO
```

Tenga en cuenta que en la evaluación de las prácticas de *Informática Básica* se utlizarán ejercicios de Jutge, 
de modo que resolver problemas en esa plataforma mejorará sus capacidades como programadora. 
Realice todos los ejercicios del curso Informática Básica de Jutge que sea capaz. 

Recuerde siempre que Jutge solo evalúa la corrección de su programa desde un punto de vista de su correcto funcionamiento. 
Su código ha de cumplir adicionalmente con los requisitos de modularidad, formato y estilo.
