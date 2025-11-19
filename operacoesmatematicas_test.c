#include <assert.h>
#include <stdio.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {

    // Testes de multiplicação
    assert(multiplicar(3, 4) == 12);
    assert(multiplicar(-2, 5) == -10);

    // Testes de divisão
    assert(dividir(10, 2) == 5);
    assert(dividir(-9, 3) == -3);

    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}
