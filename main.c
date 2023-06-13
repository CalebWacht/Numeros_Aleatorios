#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMegaSena[6])
{
    int numeroSorteado;

    // implementaçãoAqui

    return numeroSorteado;
}

int main()
{

    int sorteioMega[6];
    int x = 0;

    for (x = 0; x < 6; x++) {
        // Sorteando numeros da mega
        sorteioMega[x] = numeroRandomicoNaoRepetido(sorteioMega);
    }
    printf("Numeros sorteador de 1 a 60 da Mega Sena\n");
    for (x = 0; x < 6; x++) {
        printf("%i", sorteioMega[x]);
    }
}
