#include <assert.h>
#include <stdio.h>

#include "multiplicar.c"
#include "dividir.c"

int main() {

    
    assert(multiplicar(3, 4) == 12);
    assert(multiplicar(-2, 5) == -10);

    assert(dividir(10, 2) == 5);
    assert(dividir(-9, 3) == -3);

    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}
