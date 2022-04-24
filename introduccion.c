#include <math.h>
#include <stdbool.h>
#include <stdio.h>

/* -------------------------------------------------------------------------- */
/*                                Introducción                                */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 1 ----------------------------------- */
/*
//  * Escribir una función que reciba el capital inicial, una tasa de interés y un número de años y devuelva el monto final a cobrar.
// */
// float monto_final (float capital_inicial, float tasa_interes, int anos){
//     return capital_inicial *pow( (1 + tasa_interes / 100), anos);
// }
// int main(void){
//     printf("El monto a cobrar es: $%.2f\n", monto_final(100, 10, 5));
//     return 0;
// }
/* ------------------------------------ 2 ----------------------------------- */
/*
//  *Escribir una función que convierta un valor en grados Fahrenheit a grados Celsius.
// */
// float FaC(float fahrenheit){
//     return (fahrenheit - 32) / (9/5);
// }
// int main(void){
//     printf("La conversion de Fahrenheit a grados Celsius es: %.2f°C\n", FaC(50));
//     return 0;
// }
/* ------------------------------------ 3 ----------------------------------- */
/*
//  *Escribir una función que convierta un valor en grados Celsius a grados Fahrenheit.
//  */
// float CaF (float celsius){
//     return (celsius * (9/5)) + 32;
// }
// int main(void){
//     printf("La conversion de Celsius a Fahrenheit es: %.2f°F\n", CaF(50));
//     return 0;
// }
/* ------------------------------------ 4 ----------------------------------- */
/*
//  *Escribir una función que dadas la hora, minutos y segundos devuelva el tiempo en segundos.
//  */
// int segundos_totales (int hora, int min, int seg){
//     return hora * 3600 + min * 60 + seg;
// }
// int main(void) {
//     printf("El tiempo es: %d seundos.\n", segundos_totales(1, 30, 30));
//     return 0;
// }
/* ------------------------------------ 5 ----------------------------------- */
/*
 *Escribir una función que dadas las coordenadas de un vector en
 *, devuelva la norma del mismo
 */
// int norma (int x, int y, int z) {
//     return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
// }
// int main(void) {
//     printf("La norma del vector es: %d\n", norma(1, 2, 3));
//     return 0;
// }
// /* ------------------------------------ 6 ----------------------------------- */
// /*
//  *Teniendo el radio de un cilindro y su altura escribir funciones que calculen:

//  *  El diámetro del cilindro.

//  *   La circunferencia.

//  *   El área de la base.

//  *  El volumen del cilindro.

//  *  El área del cilindro.
// */
// float diametro (float radio){
//     return 2 * radio;
// }
// float circunferencia (float radio){
//     return diametro(radio) * 3.14;
// }
// float area_base (float radio){
//     return diametro(radio) * diametro(radio);
// }
// float volumen (float radio, float altura){
//     return area_base(radio) * altura;
// }
// float area_cilindro (float radio, float altura){
//     return 2 * area_base(radio) + circunferencia(radio) * altura;
// }
// int main(void){
//     printf("El diametro del cilindro es: %.2f\n", diametro(5));
//     printf("La circunferencia del cilindro es: %.2f\n", circunferencia(5));
//     printf("El area de la base del cilindro es: %.2f\n", area_base(5));
//     printf("El volumen del cilindro es: %.2f\n", volumen(5, 10));
//     printf("El area del cilindro es: %.2f\n", area_cilindro(5, 10));
//     return 0;
// }
/* ------------------------------------ 7 ----------------------------------- */
/*
 *Escribir una función que dado un número entero devuelva 1 si el mismo es impar y 0 si fuera par.
 */
// int es_impar(int numero) {
//     return numero % 2;
// }
// int main(void) {
//     if (es_impar(4) == 0) {
//         printf("El numero es par\n");
//     } else {
//         printf("El numero es impar\n");
//     }
//     return 0;
// }
// !TODO ver porque se podria hacer usando boolenaos.
/* ------------------------------------ 8 ----------------------------------- */
/*
 * Escribir una función que dado un número devuelva el primer número múltiplo de 10 inferior a él. Por ejemplo, para 153 *debe devolver 150.
 */
// int mutiplo (int numero){
//     return numero / 1;
// }
// int main(void){
//     printf("El numero multiplo es: %d\n", mutiplo(153));
//     return 0;
// }
/* ------------------------------------ 9 ----------------------------------- */
/*
 *Escribí una función que compare (reciba) 2 números enteros a y b. La función debe retornar un número menor, igual o *mayor que cero si a es, respectivamente, menor que, igual a, o mayor que b.
 */
// !TODO error de comprension de codigo.

/* ------------------------------------ 10 ----------------------------------- */
/*
 *Escribir una función que reciba un número entero y devuelva 1 si el número es positivo y -1 si el número es negativo.
 */
// int main(void){
//     int numero = 0;
//     if (numero > 0) {
//         printf("El numero es positivo\n");
//     } else if (numero < 0) {
//         printf("El numero es negativo\n");
//     }
//     else {
//         printf("El numero es 0\n");
//     }
//     return 0;
// }
/* ------------------------------------ 11 ----------------------------------- */
/*
 *Escribir una función que reciba un número entero y devuelva 1 si el número es positivo y 0 si el número es negativo.
 */
// int main(void) {
//     int numero = 0;
//     if (numero > 0) {
//         printf("1\n");
//     }
//     printf("0\n");
// return 0;
// }
/* ------------------------------------ 12 ----------------------------------- */
/*
 * Escribir un programa que imprima, en 3 líneas separadas, su nombre, apellido y padrón.
 */
// int main(void) {
//     printf("Nombre: Juan\n");
//     printf("Apellido: Perez\n");
//     printf("Padron: 12345\n");
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                         Programas sencillos: Ciclos                        */
/* -------------------------------------------------------------------------- */

/* ----------------------------------- 13 ----------------------------------- */
/*
 *Escribir un programa que imprima la tabla de multiplicar del número 7.
 */
// int main(void) {
//     printf("Tabla de multiplicar del 7\n");
//     for (size_t i = 0; i <= 10; i++) {
//         int multiplicar = 7 * i;
//         printf("7 * %ld = %d\n", i, multiplicar);
//     }
//     return 0;
// }
/* ----------------------------------- 14 ----------------------------------- */
/*
 *Escribir un programa que imprima la tabla de multiplicar para los números del 1 al 10.
 */
// int main(void){
//     printf("Tabla de multiplicar del 1 al 10\n");
//     for (size_t i = 0; i <= 10; i++) {
//         for (size_t j = 0; j <= 10; j++) {
//             int multiplicar = i * j;
//             printf("%ld * %ld = %d\n", i, j, multiplicar);
//         }
//     }
//     return 0;
// }
/* ----------------------------------- 15 ----------------------------------- */
/*
 *Escribir un programa que imprima la tabla de conversión de Celsius a Fahrenheit para los valores de 0ºC a 100ºC de 10 *en 10 con 2 decimales.
 */
// float CaF(float celsius) {
//     return (celsius * (9 / 5)) + 32;
// }
// int main(void) {
//     for (size_t i = 0; i <= 100; i += 10) {
//         printf("La conversion de celsius a fahrenheit es:%.2f\n", CaF(i));
//     }
//     return 0;
// }
/* ----------------------------------- 16 ----------------------------------- */
/*
 *Escribir un programa que imprima por pantalla todas las fichas del dominó, sin repetir.
 */
// !TODO falta hacer

/* -------------------------------------------------------------------------- */
/*                       Programas sencillos: Decisiones                      */
/* -------------------------------------------------------------------------- */

/* ----------------------------------- 22 ----------------------------------- */
/*
 *Escribir una función es_primo que dado un número entero devuelva true si el mismo es primo y false en caso contrario.
 */
// int es_primo(int numero) {
//     return numero % numero;
// }
// int main(void) {
//     if (es_primo(4) == 0) {
//         printf("El numero es primo\n");
//     } else {
//         printf("El numero no es primo\n");
//     }
//     return 0;
// }

/* ----------------------------------- 23 ----------------------------------- */
// Escriba una función que dado 2 valores a e y si: x es mayor que  y o que x == y

// int comparacion(int x, int y) {
//     if (x == y) {
//         printf("X es igual a Y");
//     } else if (x > y) {
//         printf("X es mayor que Y");
//     } else
//         printf("X es menor que Y");
//     return 0;
// }
// int main(void) {
//     printf("%c\n", comparacion(10, 5));
//     return 0;
// }

/* ----------------------------------- 24 ----------------------------------- */
// Escriba una funcio que reciba un valor y de su valor absoluto

// Version easy
// int valor_absoluto(int x) {
//     if (x < 0) {
//         int transformacion = x * -1;
//         printf("El valor absoluto de %d es %d\n", x, transformacion);
//     } else
//         printf("El valor absoluto de %d es %d\n", x, x);
//     return 0;
// }
// usando ternarios :D
// int valor_absoluto(int x){
// int transformacion = x * -1;
// x < 0?printf("El valor absoluto de %d es %d\n", x, transformacion):printf("El valor absoluto de %d es %d\n", x, x);
// return 0;
// }
// int main(void) {
//     printf("%d", valor_absoluto(-2));
//     return 0;
// }
/* ----------------------------------- 25 ----------------------------------- */
// matriz identidad

/* ----------------------------------- 26 ----------------------------------- */
// Funcion baskara
float baskara (float a, float b, float c, float x){
    a < 0 && b < 0 && c < 0 && x < 0 ? printf("Ingrese valores validos.\n") : printf("El resultado es: ");
    return sqrt (a * pow (x, 2) + b * x + c);
}
int main(void){
    printf  ("%f\n", baskara(1, 10, 2, 3));
    return 0;
}
// ! Verificar resultado. Ver que es un polinomio de grado 2 dentro de una raiz :O