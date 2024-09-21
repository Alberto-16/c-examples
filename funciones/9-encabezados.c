#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;
    int m;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);

    m= funcion5(10);

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);

    // Imprime el valor que retornó funcion5()
    printf("m = %d\n", m);

    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}
// Cambiamos el nombre de esta siguiente funcion para poder lograr ser uso de ese nombre en
//en commit. funcion5 a funcionCambio5
int funcionCambio5(int x) {
    printf("en funcion5");
int funcion4(int x) {
    printf("En funcion4()");
    return x;
}}

int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 7;
    return y;
}