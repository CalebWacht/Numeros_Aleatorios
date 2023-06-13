#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMegaSena[6]){

    int numeroSorteado;
    int i, numRepetido;

    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    do {
        numeroSorteado = 1 + rand() % 60; // Gera um número aleatório entre 1 e 60
        numRepetido = 0;

        // Verifica se o número sorteado já foi selecionado anteriormente
        for (i = 0; i < 6; i++) {
            if (sorteioMegaSena[i] == numeroSorteado) {
                numRepetido = 1;
                break;
            }
        }
    } while (numRepetido);

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
    system("cls");
    printf("Numeros sorteados de 1 a 60 da Mega Sena\n\n");
    for (x = 0; x < 6; x++) {
        printf(" %i |", sorteioMega[x]);
    }
    printf("\n\n");
}
