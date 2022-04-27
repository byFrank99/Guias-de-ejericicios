
#include <stdio.h>
#include <string.h>
#define TAMAGNO 50
/* -------------------------------------------------------------------------- */
/*                           Trabajando con cadenas                           */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 7 ----------------------------------- */
/* Escriba un programa que lea una cadena de caracteres ingresada por el flujo de entrada estándar y la imprima por pantalla. Almacena la cadena en un arreglo de no más de 100 caracteres. Utilice los siguientes métodos:
!IMPORTANT
a) Itere hasta leer el carácter '\n' inclusive. */
// Usando getchar()
// int main(void) {
//     char cadena[TAMAGNO];
//     int i = 0;
//     printf("Ingrese una cadena: ");
//     while ((cadena[i] = getchar()) != '\n') {
//         i++;
//     }
//     cadena[i] = '\0';
//     printf("La cadena es: %s\n", cadena);
//     return 0;
// }
// b) Lea utilizando fgets().
// int main(void) {
//     char almacenamiento[TAMAGNO];
//     fgets(almacenamiento, TAMAGNO, stdin);
//     printf("La cadena ingresada es: %s", almacenamiento);
//     return 0;
// }

/* ------------------------------------ 8 ----------------------------------- */
/* Escriba un programa que lea una cadena de caracteres e imprima por pantalla, para cada elemento de la cadena: su posición dentro de la cadena, el carácter y su código en representación ASCII. */
// //! Esta hardcodeado  :(
// int main(void) {
//     char almacenamiento[TAMAGNO];
//     printf("Ingrese una cadena:");
//     fgets(almacenamiento, TAMAGNO, stdin);
//     printf("La cadena ingresada es: %s", almacenamiento);
//     for (size_t i = 0; i <= 16; i++) {

//         printf("Posicion: %ld\t caractere: %c\t ASCII: %d\n",i, almacenamiento[i], almacenamiento[i]);
//     }

//     // printf("La cadena ingresada en ASCII es: %d", almacenamiento);
//     // printf("La cadena ingresada en posicion ASCII es: %d", almacenamiento);
//     return 0;
// }

/* ----------------------------------- 10 ----------------------------------- */
// Escriba un programa que lea una cadena de caracteres y verifique si la misma se encuentra vacía.
// int main(void) {
//     char cadena[TAMAGNO];
//     for (size_t i = 0; i < TAMAGNO; i++) {
//         fgets(cadena, TAMAGNO, stdin);
//         if (cadena[i] == '\n') {
//             printf("La cadena se encuentra vacía.");
//             break;
//         } else {
//         printf("La cadena contiene: %s", cadena);
//         break;
//         }
//     }
// return 0;
// }

/* ----------------------------------- 11 ----------------------------------- */
// a) size_t strlen(const char * );
