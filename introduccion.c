#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#define TAMAGNO 50

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
// float baskara (float a, float b, float c, float x){
//     a < 0 && b < 0 && c < 0 && x < 0 ? printf("Ingrese valores validos.\n") : printf("El resultado es: ");
//     return sqrt (a * pow (x, 2) + b * x + c);
// }
// int main(void){
//     printf  ("%f\n", baskara(1, 10, 2, 3));
//     return 0;
// }
// // ! Verificar resultado. Ver que es un polinomio de grado 2 dentro de una raiz :O

/* ----------------------------------- 28 ----------------------------------- */
// Escribir funciones que resuelvan los siguientes problemas:

// a) Dado un año indicar si es bisiesto.
// bool es_bisiesto (int agnos){
//     if (agnos % 4 == 0 && agnos % 100 != 0 || agnos % 400 == 0) {
//         printf("El año %d es bisiesto\n", agnos);
//     } else {
//         printf("El año %d no es bisiesto\n", agnos);
//     }
//     return 0;
// }
// int main(void) {
//     es_bisiesto(2019);
//     return 0;
// }

// b) Dado un mes y un año, devolver la cantidad de días correspondientes.
//! En este ejercicio voy a suponer que todos los meses tienen 31 días.
// Se podria hacer con switch pero bueno trabajo para el Francisco del furuto :D
// int dias_totales (int mes, int agnos) {
// return mes * 31 + agnos * 364;
// }
// int main(void) {
// printf("El total de dias es: %d\n", dias_totales(2, 2019));
// return 0;
// }

// c) Dada una fecha (día, mes, año), indicar si es válida o no.
// bool es_valida (int dia, int mes, int agnos){
//     // Opcion 1
//     if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && agnos >= 1 && agnos <= 9999){
//         printf("La fecha es valida\n");
//     } else {
//         printf("La fecha no es valida\n");
//     }
//     // Opcion 2
//     dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && agnos >= 1 && agnos <= 9999 ? printf("La fecha es valida\n") : printf("La fecha no es valida\n");
// }
// int main(void) {
//     es_valida(-1, 1, 2019);
//     return 0;
// }

// d) Dada una fecha, indicar los días que faltan hasta fin de mes.
// Utilizo la funcion anterior para calcular los dias totales del mes y del año.
// int dias_totales (int mes, int agnos) {
//     return mes * 31 + agnos * 364;
// }
// int dias_faltantes (int dia, int mes, int agnos) {
//     return dias_totales(mes, agnos) - dia;
// }
// int main(void) {
//     printf("Faltan %d dias para el final del mes\n", dias_faltantes(31, 2, 2019));
//     return 0;
// }

/* ----------------------------------- 29 ----------------------------------- */
// Escribir un programa que calcule la mínima cantidad de billetes (moneda peso argentino) con los que se puede obtener un monto.
//  Ejemplo: 2320 ARS = (2x1000 ARS + 3x100 ARS + 1x20 ARS).
//  int cantidad_minima (int monto_ingresado) {
//      int billetes_1000 = monto_ingresado / 1000;
//      int billetes_100 = (monto_ingresado % 1000) / 100;
//      int billetes_20 = ((monto_ingresado % 1000) % 100) / 20;
//      int billetes_10 = (((monto_ingresado % 1000) % 100) % 20) / 10;
//      int billetes_5 = ((((monto_ingresado % 1000) % 100) % 20) % 10) / 5;
//      int billetes_2 = (((((monto_ingresado % 1000) % 100) % 20) % 10) % 5) / 2;
//      int billetes_1 = ((((((monto_ingresado % 1000) % 100) % 20) % 10) % 5) % 2) / 1;
//      printf("La cantidad minima de $%d ARS es:\n%d billetes de 1000\n%d billetes de 100\n%d billetes de 20\n%d billetes de 10\n%d billetes de 5\n%d billetes de 2\n%d billetes de 1\n", monto_ingresado, billetes_1000, billetes_100, billetes_20, billetes_10, billetes_5, billetes_2, billetes_1);
//      return 0;
//  }
//  int main(void) {
//      cantidad_minima(2320);
//      return 0;
//  }

/* ----------------------------------- 31 ----------------------------------- */
// (Decisión múltiple) Escribir una función que dado un carácter imprima:

// int decision (char caracter) {
//     if(caracter == 'A'){
//         printf("House Arryn\n");
//     }
//     else if(caracter == 'B'){
//         printf("House Baratheon\n");
//     }
//     else if(caracter == 'F'){
//         printf("House Frey\n");
//     }
//     else if(caracter == 'G'){
//         printf("House Greyjoy\n");
//     }
//     else if(caracter == 'L'){
//         printf("House Lannister\n");
//     }
//     else if(caracter == 'M'){
//         printf("House Martell\n");
// }
// else if(caracter == 'S'){
//     printf("House Stark\n");
// }
// else if(caracter == 'T'){
//     printf("House Targaryen\n");
// }
// else {
//     printf("No lo conozco :(\n");
// }
// return 0;
// }

// int main(void) {
//     decision('z');
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                        Interactuando con el usuario                        */
/* -------------------------------------------------------------------------- */

/* ----------------------------------- 51 ----------------------------------- */
// Escribir un programa que calcule el inverso y la raíz de un número ingresado por teclado. Realice las validaciones necesarias. Nota: puede elegir NO calcular la raíz de números negativos o mostrar un valor complejo.
// int inverso(int numero) {
//     return numero * -1;
// }
// float raiz(int numero) {
//     return sqrt(numero);
// }

// int main(void) {
//     char numero_ingresado[TAMAGNO];
//     fgets(numero_ingresado, TAMAGNO, stdin);
//     int conversion = atoi(numero_ingresado);
//     printf("El inverso de %d es %d\n", conversion, inverso(conversion));
//     printf("La raiz de %d es %.2f\n", conversion, raiz(conversion));
//     return 0;
// }

/* ----------------------------------- 52 ----------------------------------- */
/* Escribir un programa que dado un día del año (1 a 366) ingresado por el usuario, imprima el día de la semana que le corresponde. Debe asumir que el año comenzó, por ejemplo, un domingo. Por ejemplo: si se ingresa '5', imprime 'jueves', si se ingresa '10' imprime 'martes', si se ingresa '294' imprime 'sabado'. */

/* ----------------------------------- 53 ----------------------------------- */
/* Escribir un programa que convierta una cantidad de segundos ingresada por teclado a horas, minutos y segundos. Realice las validaciones necesarias. */
// int conversion_segundos(int segundos) {
//     int horas = segundos / 3600;
//     int minutos = (segundos % 3600) / 60;
//     int segundos_final = (segundos % 3600) % 60;
//     printf("%d segundos son:\n%d horas\n%d minutos\n%d segundos\n", segundos, horas, minutos, segundos_final);
//     return 0;
// }
// int main(void) {
//     char segundos_ingresados[TAMAGNO];
//     fgets(segundos_ingresados, TAMAGNO, stdin);
//     int conversion = atoi(segundos_ingresados);
//     conversion_segundos(conversion);
//     return 0;
// }

/* ----------------------------------- 54 ----------------------------------- */
/* Escribir un programa que cuente la cantidad de líneas ingresadas por stdin hasta el ingreso de EOF. Al finalizar, muestre el resultado por pantalla. */

// Opcion 1
// int contador_lineas(void) {
//     int contador = 0;
//     char caracter;
//     while((caracter = getchar()) != EOF){
//         if(caracter == '\n'){
//             contador++;
//         }
//     }
//     printf("El número de líneas ingresadas es: %d\n", contador);
//     return 0;
// }
// int main(void) {
//     contador_lineas();
//     return 0;
// }

// Opcion 2
// int main(void) {
//     char texto_ingresado;
//     int cantidad_lineas = 0;
//     while ((texto_ingresado = getchar()) != EOF) {
//         if (texto_ingresado == '\n') {
//             cantidad_lineas++;
//         }
//     }
//     printf("La cantidad de lineas es: %d\n", cantidad_lineas);
//     return 0;
// }

/* ----------------------------------- 55 ----------------------------------- */
/* Escribir un programa que cuente la cantidad de espacios, tabuladores, caracteres de nueva línea y letras ingresados por stdin hasta el ingreso de EOF. Al finalizar, muestre el resultado por pantalla discriminando cada cuenta. */

// int contador(void) {
//     int espacios = 0, tabuladores = 0, barra_n = 0, letras = 0;
//     char texto_ingresado;
//     while ((texto_ingresado = getchar()) != EOF) {
//         if (texto_ingresado == ' ') {
//             espacios++;
//         } else if (texto_ingresado == '\t') {
//             tabuladores++;
//         } else if (texto_ingresado == '\n') {
//             barra_n++;
//         } else {
//             letras++;
//         }
//     }
//     printf("La cantidad de espacios es: %d\n", espacios);
//     printf("La cantidad de tabuladores es: %d\n", tabuladores);
//     printf("La cantidad de barras de nueva linea es: %d\n", barra_n);
//     printf("La cantidad de letras es: %d\n", letras);
//     return 0;
// }

// int main(void) {
//     contador();
//     return 0;
// }

/* ----------------------------------- 56 ----------------------------------- */

/* Escribir un programa que pida números al usuario en tanto no se dispare la marca de EOF (en las terminales de GNU/Linux se dispara con Control+D). Al recibir la finalización, imprima los valores máximo, mínimo, promedio del intervalo. */
