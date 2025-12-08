#include <stdio.h>

int dividir(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return 0;
    }

    int quociente = 0;
    int resto = dividendo;

    while (resto >= divisor) {
        resto = resto - divisor;
        quociente++;
    }

    return quociente;
}


