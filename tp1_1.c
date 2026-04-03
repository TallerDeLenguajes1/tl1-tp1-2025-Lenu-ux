#include <stdio.h>
int main(){
    printf("Hola Mundo\n");
    int num=10; //declaro la variable
    int *p_num=&num; //creo un puntero y le asigno la direccion de la variable
    printf("1.Contenido del puntero (p_num):%p\n",p_num);
    printf("2.Direccion de memoria almacenada por el puntero (p_num): %p\n",&p_num);
    printf("3. Direccion de memoria de la variable (&num):%p\n",&num);
    printf("4. Direccion de memoria del puntero(&p_num):%p\n",&p_num);
    printf("5. Tamanio de la variable (sizeof(num)): %lu bytes\n",sizeof(num));
    return 0;
}