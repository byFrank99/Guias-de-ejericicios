#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* -------------------------------------------------------------------------- */
/*                             Operadores de bits                             */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 1 ----------------------------------- */
/*Calcular las siguientes operaciones:
a) 11001010 & 10100101,
*/
// int main(void) {
//     int a = 0xA2; //11001010
//     int b = 0x55; //10100101
//     int c = a & b;
//     printf("%d\n", c);
//     return 0;
// }

// b) 11001010 | 10100101
// #define MASK_A 0xCA //11001010
// #define MASK_B 0xA5 //10100101
// int main(void) {
//     int a = MASK_A;
//     int b = MASK_B;
//     int c = a | b;
//     printf("%d\n", c);
//     return 0;
// }

// c) 11001010 ^ 10100101
// #define MASK_A 0xCA // 11001010
// #define MASK_B 0xA5 // 10100101

// int main(void) {
//     int c = MASK_A ^ MASK_B;
//     printf("%d\n", c);
//     return 0;
// }

/* ------------------------------------ 3 ----------------------------------- */
/*
Determinar los resultados octales de las siguientes operaciones, suponiendo que los números no tienen signo (los números están expresados en sistema octal):
*/
// a) 0157 trasladado a izquierda una posición de bit,
// #define MASK 0x6F //0157
// #define SHIFT 1
// int main(void){
// int c = MASK << SHIFT;
// printf("%d\n", c);
// return 0;
// }

// b) 0701 trasladado a izquierda dos posiciones de bit,
// #define MASK 0x1C1 //0701
// #define SHIFT 2
// int main(void){
//     int c = MASK << SHIFT;
//     printf("%d\n", c);
//     return 0;
// }

// c) 0673 trasladado a derecha dos posiciones de bit,
// #define MASK 0x1BB //0673
// #define SHIFT 2
// int main(void){
//     int c = MASK >> SHIFT;
//     printf("%d\n", c);
//     return 0;
// }

// d) 067 trasladado a derecha tres posiciones de bit.
// #define MASK 0x37 //067
// #define SHIFT 3
// int main(void){
//     int c = MASK >> SHIFT;
//     printf("%d\n", c);
//     return 0;
// }