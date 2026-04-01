#include <stdio.h>

void inverso(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void mitadNum(int *p) {
    *p = *p / 2;
}

void sumarDiferenciaDigitos(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void modificarNum(int *valor_referencia) {
    inverso(valor_referencia);
    mitadNum(valor_referencia);
    sumarDiferenciaDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    modificarNum(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}