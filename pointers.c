#include <stdbool.h>
#include <stdio.h>
#include <string.h>

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
// bool segundos_hms(int segundos, int *horas, int *minutos, int *segundos_restantes) {
//     if (segundos < 0)
//         return false;
//     *horas = segundos / 3600;
//     *minutos = (segundos % 3600) / 60;
//     *segundos_restantes = segundos % 60;
//     return true;
// }
// int main(void) {
//     int horas, minutos, segundos_restantes;
//     int segundos = 5000;
//     if (segundos_hms(segundos, &horas, &minutos, &segundos_restantes)) {
//         printf("%d segundos equivalen a %d horas, %d minutos y %d segundos\n", segundos, horas, minutos, segundos_restantes);
//     } else {
//         printf("No se pudo convertir\n");
//     }
//     return 0;
// }

/* ------------------------------------ 9 ----------------------------------- */
/*
(matemática) Implementar funciones que reciban un arreglo de números y su longitud y realicen las operaciones detalladas abajo. Utilice notación de punteros exclusivamente.
*/
// a) completar el vector con ceros,
// int conversion_ceros(int *vector, size_t n) {
//     for (size_t i = 0; i < n; i++) {
//         vector[i] = 0;
//     }
//     return 0;
// }

// int main(void) {
//     int cadena[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     conversion_ceros(cadena, 10);
//     for (size_t i = 0; i < 10; i++) {
//         printf("%d", cadena[i]);
//     }
//     return 0;
// }

// b) completar el vector con unos,

// int conversion_unos(int *vector, size_t n) {
//     for (size_t i = 0; i < n; i++) {
//         vector[i] = 1;
//     }
//     return 0;
// }

// int main(void) {
//     int vector[10];
//     conversion_unos(vector, 10);
//     for (size_t i = 0; i < 10; i++) {
//         printf("%d\t", vector[i]);
//     }
//     return 0;
// }

// c) calcular y retornar la suma por la interfaz,

// int suma (int *a, int *b, int *resultado) {
//     *resultado = *a + *b;
//     return 0;
// }

// int main(void) {
//     int a = 5, b = 10, resultado;
//     suma(&a, &b, &resultado);
//     printf("El resultado de la suma es: %d\n", resultado);
//     return 0;
// }

// d) calcular y retornar la media por la interfaz,

// float media ( float *a, float *b, float *resultado ) {
//     *resultado = (*a + *b) / 2;
//     return 0;
// }
// int main(void){
//     float a =3, b = 4, resultado = 0;
//     media( &a, &b, &resultado );
//     printf("La media es: %.2f\n", resultado);
//     return 0;
// }

// f) retornar el valor máximo del arreglo por la interfaz,
// int max(int *vector, size_t n) {
//     int max = vector[0];
//     for (size_t i = 0; i < n; i++) {
//         if (vector[i] > max) {
//             max = vector[i];
//         }
//     }
//     return max;
// }

// int main(void) {
//     int vector[10] = {1, 2, -3, 4, -5, 60, 7, 8, 9, 10};
//     printf("El valor maximo es: %d\n", max(vector, 10));
//     return 0;
// }

// g) retornar el valor mínimo del arreglo por la interfaz,
// int min(int *vector, size_t n) {
//     int min = vector[0];
//     for (size_t i = 0; i < n; i++) {
//         if (min > vector[i]) {
//             min = vector[i];
//         }
//     }
//     return min;
// }

// int main(void) {
//     int valores[5] = {9, 1, -2, 3, -4};
//     printf("El minimo de la cadena es: %d\n", min(valores, 5));
//     return 0;
// }

// h) modificar los elementos del vector reemplazándolos por sus valores al cuadrado,
// int cuad(int *v, size_t n) {
//     for (size_t i = 0; i < n; i++) {
//         v[i] = v[i] * v[i];
//     }
//     return 0;
// }
// int main() {
//     int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     cuad(vector, 10);
//     for (size_t i = 0; i < 10; i++) {
//         printf("%d\t", vector[i]);
//     }
//     putchar('\n');
//     return 0;
// }

/* ----------------------------------- 10 ----------------------------------- */
/*
Implementar una función que reciba 2 vectores y sus longitudes, y copie el contenido de uno en el otro, usando el siguiente prototipo y notación de punteros en la implementación, la función debe devolver true de poder realizar la operación false en caso contrario:
*/
// bool veccpy(double *dest, size_t ldest, const double *orig, size_t lorig) {
//     if (ldest < lorig) {
//         return false;
//     }
//     for (size_t i = 0; i < lorig; i++) {
//         dest[i] = orig[i];
//     }
//     return true;
// }

// int main(void) {
//     double vector1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     double vector2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
//     if (veccpy(vector2, 10, vector1, 10)) {
//         for (size_t i = 0; i < 10; i++) {
//             printf("%.1f\t", vector2[i]);
//         }
//     } else {
//         printf("No se pudo copiar\n");
//     }
//     putchar('\n');
//     return 0;
// }