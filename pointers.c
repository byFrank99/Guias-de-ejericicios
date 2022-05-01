#include <stdio.h>

/* -------------------------------------------------------------------------- */
/*                           Funciones con punteros                           */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 6 ----------------------------------- */
/*
Implementar una función swap que reciba 2 datos a y b por puntero y los intercambie, de forma tal que b sea a y viceversa.
*/
// void swap(int *a, int *b) {
//     int aux = *a;
//     *a = *b;
//     *b = aux;
// }

// int main(void) {
//     int a = 5;
//     int b = 10;
//     printf("a = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("a = %d, b = %d\n", a, b);
//     return 0;
// }

/* ------------------------------------ 7 ----------------------------------- */
/*
Implementar las siguientes funciones, equivalentes al ejercicio 28 de la guía 1, retornando los resultados por la interfaz:
*/
/* ------------------------------------ a ----------------------------------- */
// void suma(int a, int b, long int * resultado){
//     *resultado = a + b;
// }

// int main(void) {
//     int a = 5;
//     int b = 10;
//     long int resultado;
//     suma(a, b, &resultado);
//     printf("El resultado de la suma entre a y b es: %ld\n", resultado);
//     return 0;
// }

/* ------------------------------------ b ----------------------------------- */
// void resta(int a, int b, long int * resultado){
//     *resultado = a - b;
// }

// int main(void) {
//     int a = 20, b = 5;
//     long int resultado;
//     resta(a, b, &resultado);
//     printf("El resultado de la resta entre a y b es: %ld\n", resultado);
// }

/* ------------------------------------ c ----------------------------------- */
// void producto(int multiplicando, int multiplicador, float * producto){
//     *producto = multiplicador * multiplicador;
// }

// int main(void) {
//     int a = 3, b = 9;
//     float resultado = 0;
//     producto(a, b, &resultado);
//     printf("El resultado del producto entre a y b es: %.2f\n", resultado);
//     return 0;
// }

/* ------------------------------------ d ----------------------------------- */
// void division(int dividendo, int divisor, double *resultado){
//     *resultado = dividendo / divisor;
// }

// int main(void) {
//     int a = 8, b = 2;
//     double resultado = 0;
//     division(a, b, &resultado);
//     printf("El resultado de la division es: %.2f\n", resultado);
//     return 0;
// }

/* ------------------------------------ e ----------------------------------- */
// void mod(int a, int b, float *resultado) {
//     *resultado = a % b;
// }

// int main(void) {
//     int a = 9, b = 2;
//     float resultado = 0;
//     mod(a, b, &resultado);
//     printf("El resto es: %.2f\n", resultado);
//     return 0;
// }

/* ------------------------------------ 8 ----------------------------------- */
/*
Escribir una función que convierta un número que representa una cantidad de segundos, a su equivalente en horas, minutos y segundos, retornando las partes por la interfaz, bool por el nombre, indicando el resultado de la operación, true de ser posible false si no. Realizar las validaciones pertinentes.
*/
