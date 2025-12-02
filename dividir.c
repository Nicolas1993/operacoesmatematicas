#include <stdio.h>

void main()
{
    int dividendo, divisor, quociente, resto;

    printf("Dividendo: ");
    scanf("%d", &dividendo);
    printf("Divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return;
    }

    quociente = 0;
    resto = dividendo;

    while (resto >= divisor) {
        resto = resto - divisor;
        quociente++;
    }

    printf("\nO quociente da divisão inteira é: %d\n", quociente);
    printf("O resto da divisão é: %d\n", resto);
}

