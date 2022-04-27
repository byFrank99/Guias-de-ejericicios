#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAMAGNO 50

/* -------------------------------------------------------------------------- */
/*                          Arreglos unidimensionales                         */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 2 ----------------------------------- */
/* ------------------------------------ a ----------------------------------- */

// Array de enteros con 15 elementos, todos ellos de valor 0
// int main(void) {
//     int array[15] = {0};
//     printf("Los elementos del array son:\n");
//     for (size_t i = 0; i < 15; i++) {
//         printf("%d\n", array[i]);
//     }
//     return 0;
// }
/* ------------------------------------ b ----------------------------------- */
// Array de 7 tipo double con valor de 30.0
// int main(void) {
//     double array[7] = {30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0};
//     printf("Los valores del array son:\n");
//     for (size_t i = 0; i < 7; i++) {
//         printf("%.1f\n", array[i]);
//     }
//     return 0;
// }
/* ------------------------------------ c ----------------------------------- */
/* Un arreglo de SIZE floats, todos ellos de valor 0. */
// int main(void) {
//     float array[SIZE] = {0.0};
//     printf("Los valores del array son:\n");
//     for (size_t i = 0; i < SIZE; i++) {
//         printf("%.1f\n", array[i]);
//     }
//     return 0;
// }

/* ------------------------------------ d ----------------------------------- */
// un array de 4 elementos --> 9, 5 , 1, 1

// int main(void) {
//     int array[4] = {9, 5, 1, 1};
//     printf("Los valores del array son:\t"); // puse \t para probar el tab xD
//     for (size_t i = 0; i < 4; i++) {
//         printf("%d", array[i]);
//     }
//     return 0;
// }
/* ------------------------------------ e ----------------------------------- */
//  Un array de 4 caracteres los cuales deben ser h o l a

// int main(void) {
//     char array[4] = {'h', 'o', 'l', 'a'};
//     printf("El array te dice: ");
//     for (size_t i = 0; i < 4; i++) {
//         printf("%c", array[i]);
//     }
//     printf("\n");
//     return 0;
// }
/* ------------------------------------ f ----------------------------------- */
//  un array de 4 valores los cuales deben ser 104 111 108 97
// int main(void) {
//     int array[4] = {104, 111, 108, 97};
//     printf("Los valores del array son: ");
//     for (size_t i = 0; i < 4; i++) {
//         printf("%d\t", array[i]);
//     }
//     printf("\n");
//     return 0;
// }
/* ------------------------------------ g ----------------------------------- */
/* Un arreglo con SIZE elementos de algún tipo (bool, int, float, double, etc) y lo inicialice con valores aleatorios. */
// int array_rand(int array[], size_t n){
//     srand(time(NULL));
//     for (size_t i = 0; i < n; i++) {
//         array[i] = rand();
//     }
//     return 0;
// }
// int main(void) {
//     int array[BUFF];
//     array_rand(array, BUFF);
//     printf("Los valores del array son:\n ");
//     for (size_t i = 0; i < 5; i++) {
//         printf("%d\t", array[i]);
//     }
//     printf("\n");
//     return 0;
// }

/* ------------------------------------ 3 ----------------------------------- */

// Escribir ciclos que realicen cada una de las siguientes operaciones:
// a) Inicializar un vector de 10 elementos con ceros.
// int main(void) {
//     int array_ceros[10];
//     printf("El arreglo es:\n");
//     for (size_t i = 0; i < 10; i++) {
//         array_ceros[i] = 0;
//         printf("%d ", array_ceros[i]);
//     }
//     return 0;
// }

// b) Sumar 1 a cada uno de los 15 elementos del arreglo vector.
// int main(void) {
//     int vector[15];
//     int actual = 0;
//     for (size_t i = 0; i <= 10; i++) {
//         actual += 1;
//         vector[i] = actual;
//         printf("%d ", vector[i]);
//     }
//     putchar('\n');
//     return 0;
// }

// c) Leer del teclado y almacenar 12 valores de punto flotante en el arreglo temp_mensuales.
//! Revisar
// d) Imprimir los 5 primeros valores del vector de enteros puntajes en forma de columna.
// int main(void) {
//     int puntajes[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("Los primeros 5 valores son: \n");
//     for (size_t i = 0; i < 5; i++) {
//         printf(" %d\n", puntajes[i]);
//     }
//     return 0;
// }

// e) Sumar un 30% a cada uno de los 20 elementos del arreglo de números salarios
// float salarios[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
// float porcetaje (float n){
//     return (n * 30) / 100;
// }
// int main(void){
// for (size_t i = 0; i < 20; i++) {
    //! RECORDAR --> doble %% para printear %
//     printf("El valor %.0f con un %%30+ es: %.2f\n",salarios[i] , salarios[i] + porcetaje(i));
// }
// return 0;
// }

/* ------------------------------------ 4 ----------------------------------- */
/* Escribir un programa que permita ingresar una cantidad fija de números, los almacene en un arreglo y luego imprima la media y la varianza del mismo. */
    


/* -------------------------------------------------------------------------- */
/*                  Funciones con arreglos multidimensionales                 */
/* -------------------------------------------------------------------------- */

/* ----------------------------------- 16 ----------------------------------- */
// Escriba un programa que inicialice una matriz de N filas y M columnas con:
// a) ceros
// void funcion (size_t n, size_t m, int matriz[][m]){
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < m; j++) {
//             matriz[i][j] = 0;
//         }
//     }
// }
// int main (void){
//   size_t n = 2, m = 2;
//     int matriz[n][m];
//     for (size_t i = 0; i < n; i++) {
//         for (size_t j = 0; j < m; j++) {
//             printf("%d\t", matriz[i][j]);
//         }
//         putchar('\n');
//     }
// }
// b) unos
// void funcion(size_t filas, size_t cols, int matriz[][cols]) {
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t j = 0; j < cols; j++) {
//             matriz[i][j] += 1;
//             printf("%d\t", matriz[i][j]);
//         }
//     }
// }
// int main(void) {
//     printf("La matriz es:\n");
//     size_t filas = 2, cols = 2;
//     int matriz[filas][cols];
//     funcion(filas, cols, matriz);
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t j = 0; j < cols; j++) {
//             printf("%d\t", matriz[i][j]);
//         }
//         putchar('\n');
//     }
//     return 0;
// }
// Crear una funcion que imprima unos
// void matriz_unos (size_t filas, size_t cols, int matriz[][cols]) {
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t j = 0; j < cols; j++) {
//             matriz[i][j] = 1;
//             printf("%d\t", matriz[i][j]);
//         }
//     }
// }
// int main(void) {
//     printf("La matriz es:\n");
//     size_t filas = 2, cols = 2;
//     int matriz[filas][cols];
//     matriz_unos(filas, cols, matriz);
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t j = 0; j < cols; j++) {
//             printf("%d\t", matriz[i][j]);
//         }
//         putchar('\n');
//     }
//     return 0;
// }

/* ----------------------------------- 18 ----------------------------------- */
// (programas con matrices) Para cada inciso escriba un programa que lo resuelva, o escriba un programa que resuelva todos:
// a) cargue una matriz y calcule su traza (suma de los elementos de la diagonal principal)
// void matriz_traza(size_t filas, size_t cols, int matriz[][cols]) {

//     int traza = 0;
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t j = 0; j < cols; j++) {
//             if (i == j) {
//                 matriz_traza[i][j] = 2;
//                 traza += matriz[i][j];
//             }
//         }
//     }
//     printf("La traza de la matriz es: %d\n", traza);
// }
// int main(void) {
//     size_t filas = 2, cols = 2;
//     int matriz[filas][cols];
//     matriz_traza(filas, cols, matriz);
//     return 0;
// }