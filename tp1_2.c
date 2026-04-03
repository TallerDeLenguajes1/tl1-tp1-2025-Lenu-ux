#include <stdio.h>
int cuadrado(int n);
void cuadradoNum(int *n);
void mostrar(int num);
void invertir(int *a,int *b);
void orden(int *a,int *b);
int main(){
    int num1,num2;
    int cuadradoInt;
    printf("Ingrese un numero 1:");
    scanf("%d",&num1);
    printf("\nIngrese un numero 2:");
    scanf("%d",&num2);
    //ejercicio 5a
    cuadradoInt=cuadrado(num1);
    printf("\nEl cuadrado  de %d con return:%d",num1,cuadradoInt);
    //ejercicio 5b
    cuadradoNum(&num1);
    printf("\nEl cuadrado de la variable ahora es %d\n",num1);
    //ejercicio 5c
    mostrar(num1);
    mostrar(num2);
    //ejercicio 5d
    invertir(&num1,&num2);
    printf("Valor de num1 es %d\n Valor de num2 es %d\n",num1,num2);
    //ejercicio 5e
    orden(&num1,&num2);
    printf("Menor es %d\nMayor es %d\n",num1,num2);

    return 0;
}
//a)
int cuadrado(int n){
    return n*n;
}
//b)
void cuadradoNum(int *n){
    *n=(*n) * (*n);
}
//c)
void mostrar(int num){
    printf("Direccion de memoria de la variable %p\n",&num);
    printf("Contenido de la variable %d\n",num);
}
//d)
void invertir(int *a,int *b){
    int aux= *a;
    *a=*b;
    *b=aux;
}
//e)
void orden(int *a,int *b){
    if (*a > *b)
    {
        int aux=*a;
        *a=*b;
        *b=aux;
    }
    
}