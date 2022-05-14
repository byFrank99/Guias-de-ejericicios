#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* -------------------------------------------------------------------------- */
/*                            Funciones con cadenas                           */
/* -------------------------------------------------------------------------- */

/* ------------------------------------ 1 ----------------------------------- */
/*
a) Implementá una función que reciba una cadena y retorne una copia de la misma, utilizando memoria dinámica, por el nombre. Si por algún motivo no se puede, retornar NULL.
*/
void copy(char *cadena, char **cadena_copia) {
    int i;
    *cadena_copia = (char *)malloc(strlen(cadena) * sizeof(char));
    if (*cadena_copia == NULL) {
        printf("No se pudo reservar memoria dinámica\n");
        return;
    }
    for (i = 0; i < strlen(cadena); i++) {
        (*cadena_copia)[i] = cadena[i];
    }
}
int main(void) {
    char *cadena = "Hola mundo";
    char *cadena_copia;
    copy(cadena, &cadena_copia);
    printf("%s\n", cadena_copia);
    free(cadena_copia);
    return 0;
}