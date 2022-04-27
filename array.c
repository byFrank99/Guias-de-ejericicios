#include <math.h>
#include <stdbool.h>
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
// float media(float array[], size_t n) {
//     float suma = 0;
//     for (size_t i = 0; i < n; i++) {
//         suma += array[i];
//     }
//     return suma / n;
// }
// float varianza(float array[], size_t n) {
//     float suma = 0;
//     float media_array = media(array, n);
//     for (size_t i = 0; i < n; i++) {
//         suma += pow(array[i] - media_array, 2);
//     }
//     return suma / n;
// }

// int main(void) {
//     size_t i;
//     char ingreso[5];
//     int valores[5];
//     for (i = 0; i < 5; i++) {
//         printf("Ingrese un numero: ");
//         fgets(ingreso, 5, stdin);
//         int conversion = atoi(ingreso);
//         valores[i] = conversion;
//     }
//     for (i = 0; i < 5; i++) {
//         printf("Los valores ingresados son: %d\n", valores[i]);
//         printf("La media es: %.2f, la varianza es: %.2f\n", media(valores, 5), varianza(valores, 5));
//     }
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                   Funciones con arreglos unidimensionales                  */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 8 ----------------------------------- */
// (matemática) Implementar funciones que reciban un arreglo de números y su longitud y realicen las siguientes operaciones:
// a) completar el vector con ceros,
// int array_ceros(int array[], int n) {
//     for (size_t i = 0; i < n; i++) {
//         array[i] = 0;
//         printf("%d\n", array[i]);
//     }
//     return 0;
// }

// int main(void) {
//     int valores[5];
//     printf("Full ceros\n");
//     array_ceros(valores, 5);
//     return 0;
// }

// b) completar el vector con unos,
// int arrays1(int array[], int n) {
//     for (size_t i = 0; i < n; i++) {
//         array[i] = 1;
//         printf("%d\t", array[i]);
//     }
// return 0;
// }

// int main (void) {
//     int valores[5];
//     arrays1(valores, 5);
//     putchar('\n');
//     return 0;
// }

// c) calcular y retornar la suma,
//! IMPORTANT

// int suma(int array[], int n) {
//     printf("El resultado de la suma del array es: ");
//     int actual = 0;
//     for (size_t i = 0; i < n; i++) {
//         actual += array[i];
//     }
//     printf("%d\n", actual);
//     return 0;
// }
// int main(void) {
//     int valores[5] = {0, 1, 2, 3, 4};
//     suma(valores, 5);
//     return 0;
// }

// f) retornar el valor máximo del arreglo,
// int max(int array[], int n) {
//     int a = array[0];
//     for (size_t i = 0; i < n; i++) {
//         array[i] > a ?  a = array[i]: a ;
//     }
//     printf("El valor maximo del array es: %d\n", a);
//     return 0;
// }
// int main(void) {
//     int valores[5] = {0, 1, 10, 3, 4};
//     max(valores, 5);
//     return 0;
// }

// g) retornar el valor mínimo del arreglo,
// int min(int array[], int n) {
//     int a = array[0];
//     for (size_t i = 0; i < n; i++) {
//         array[i] < a ? a = array[i] : a;
//     }
//     printf("El valor minimo del array es: %d\n", a);
//     return 0;
// }

// int main(void) {
//     int valores[3] = {0, 1, -29};
//     min(valores, 3);
//     return 0;
// }

// h) modificar los elementos del vector reemplazándolos por sus valores al cuadrado,
// int array_cuad(int array[], int n) {
//     int a = array[0];
//     printf("Los valores al cuadrado del array son:\t");
//     for (size_t i = 0; i < n; i++) {
//         a = array[i] * array[i];
//         printf("%d ", a);
//     }
//     putchar('\n');
//     return 0;
// }

// int main(void) {
//     int valores[3] = {4, 1, 2};
//     array_cuad(valores, 3);
//     return 0;
// }

/* ------------------------------------ 9 ----------------------------------- */
// Implementar una función que reciba 2 vectores y sus longitudes, y copie el contenido de uno en el otro, usando el siguiente prototipo:
// La función debe retornar false en caso de no poder completar la operación.
// bool veccpy(double dest[], size_t ldest, const double orig[], size_t lorig) {

//     if (ldest < lorig) {
//         return false;
//     }
//     for (size_t i = 0; i < lorig; i++) {
//         dest[i] = orig[i];
//     }
//     return true;
// }
// int main(void) {
//     double valores_1[5] = {1, 1, 2, 3, 7};
//     double valores_2[5] = {0};
//     printf("Esta es la cadena original --> ");
//     for (int i = 0; i < 5; i++) {
//         printf("%.0f", valores_1[i]);
//     }
//     putchar('\n');

//     printf("Esta es la copia --> ");
//     for (int i = 0; i < 5; i++) {
//         veccpy(valores_1, 5, valores_2, 5);
//         printf("%.0f", valores_1[i]);
//     }
//     putchar('\n');

//     return 0;
// }

/* ----------------------------------- 10 ----------------------------------- */
/* Implementar una función que reciba 2 vectores y sus longitudes, y retorne un valor booleano indicando si los vectores son iguales. */
// bool son_iguales(int array_1[], size_t n1, int array_2[], size_t n2) {
//     if (n1 != n2)
//         return false;

//     for (size_t i = 0; i < n1; i++) {
//         if (array_1[i] != array_2[i]) return false;
//     }
//     return true;
// }
// int main(void) {
//     int valores_1[5] = {1, 2, 3, 4, 5};
//     int valores_2[5] = {1, 2, 3, 4, 5};

//     int valores_3[5] = {0, 2, 3, 4, 0};
//     int valores_4[5] = {1, 2, 3, 4, 5};

//     printf("0=False\t1=True.\n");
//     printf("%d\n", son_iguales(valores_1, 5, valores_2, 5));
//     printf("%d\n", son_iguales(valores_3, 5, valores_4, 5));

//     return 0;
// }

/* ----------------------------------- 11 ----------------------------------- */
// Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario.
// bool ordenado(int valores[1], size_t n1) {

//     for (size_t i = 0; i < n1; i++) {
//         if(valores[i] > valores[i+1]) return false;
//     }
//     return true;
// }

// int main(void) {
//     //Prueba 1 --> Ordenado
//     int valores_1[5] = {1, 2, 3, 4, 5};
//     printf("%d\n", ordenado(valores_1, 5));
//     //Prueba 2 --> Desordenado
//     int valores_2[5] = {1, 2, 0, 4, 5};
//     printf("%d\n", ordenado(valores_2, 5));
//     return 0;
// }

/* ----------------------------------- 12 ----------------------------------- */
/* (búsqueda) Implementar una función que reciba un vector, su longitud, un número objetivo a buscar y retorne un valor booleando indicando si el mismo se encuentra o no. */
// bool se_encuentra(int valores[], size_t n, int objetivo) {
//     for (size_t i = 0; i < n; i++) {
//         if (valores[i] == objetivo) return true;
//     }
//     return false;
// }
// int main(void) {
//     // Opcion 1 --> Objetivo encontrado.
//     int valores[7] = {1, 2, 3, 4, 5, 6, 7};
//     int objetivo = 5;
//     printf("%d\n", se_encuentra(valores, 5, objetivo));
//     // Opcion 2 --> Objetivo NO encontrado.
//     int objetivo_2 = 59;
//     printf("%d\n", se_encuentra(valores, 5, objetivo_2));
//     return 0;
// }

/* ----------------------------------- 13 ----------------------------------- */
/* (búsqueda lineal) Implementar una función que reciba un vector, su longitud, un número objetivo a buscar y retorne la posición en la que se encuentra. */
// int busqueda_lineal(const int v[], size_t n, int objetivo) {
//     for (size_t i = 0; i < n; i++) {
//         if (v[i] == objetivo)
//             return printf("La ubicacion del objetivo es: %d\n", v[i]);
//     }
//     printf("No se encontro el objetivo :(\n");
//     return 0;
// }
// int main(void) {
//     // Opcion 1 --> Objetivo encontrado.
//     int valores[5] = {1, 2, 3, 4, 5};
//     int objetivo_1 = 3;
//     busqueda_lineal(valores, 5, objetivo_1);
//     // Opcion 2 --> Objetivo NO encontrado.
//     int objetivo_2 = 59;
//     busqueda_lineal(valores, 5, objetivo_2);
//     return 0;
// }

/* ------ Hasta aca llegue con "Arreglos Unidimensionales", me canse :D ----- */

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

// c) Los numeros del 1 al N.M
// int matriz_nm(int matriz, size_t filas, size_t cols) {
//     int resultado;
//     for (size_t i = 0; i < filas; i++) {
//         for (size_t i = 0; i < cols; i++) {
//              resultado = 1 * filas * cols;
//         }
//     }
//     printf("Los numeros del 1 al N.M son: %d\n", resultado);
//     return 0;
// }
// int main(void) {
// int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// matriz_nm(matriz, 3, 3);
// return 0;
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