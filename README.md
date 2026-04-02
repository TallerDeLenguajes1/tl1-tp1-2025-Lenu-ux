# tp1
# TALLER DE LENGUAJE 1
## Ejercicio 2
### Respuestas sobre .gitignore

**-¿Por qué es conveniente incluirlo?** 
_Sirve como filtrador de archivos basura o configuraciones personales al repositor_
**-¿Cuando se debe hacer?**
_Lo idela es hacerlo al inicio_
**-¿Como se configura?** 
_Creando un archivo llamado '.gitignore' y escribiendo dentro de los nombres de los archivos a ignorar_
## Ejercicio 3
**a. Sobre el codigo_misterio:**
El programa realiza una transformacion secuencial de un número entero mediante las siguientes funciones:
    1. Invertir el número --> f_alpha se la llamo _inverso_ ya que dicha funcion da la vuelta al número usando resto y division por 10.
    2. Reducir a la mitad --> f_beta se la llamo _mitadNum_, porque divide al número a la mitad.
    3. Suma de digitos --> f_gamma se la llamo _sumarDIferenciaDigitos_ porque descompone los digitos y los va sumando sobre una variable que ya tenia el valor.
    4. procesar_enigma se la llamo _modificarNum_ porque es la principal que altera al número original invocando a las demas funciones.
**b. Sobre el código sin funcionar:** Los errores que se encontraron son:
    1. No haber invocado la biblioteca _stdio.h_, lo que produjo el error de lectura de _printf_ y _scanf_.
    2. No haber puesto en la linea 17 y 23.
    3. No haber puesto el signo de direccion de memoria **&** en _scanf_ de la linea 12.
    4. En la linea 21 no modifica el duplicado, ya que recibe una copia de valor1, y no la modifica, deberia usarse puntero e invocarla con el parametro _&valor1_.

## Ejercicio 4
**c)** Los archivos que se ven son:
    - codigo_misterioso.c
    -codigo_misterioso.exe
    -codigo_sin_funcionar.c
    -codigo_sin_funcionar.exe
    -tp1_1.c
No hacen falta que aparezcan los archivos .exe