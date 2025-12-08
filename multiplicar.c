#include <stdio.h>

void main()
{
    int numero1,numero2,contador1,contador2,produto;

    printf("Número 1:");
    scanf("%d",&numero1);
    printf("Número 2:");
    scanf("%d",&numero2);

    contador1 = 0;
    contador2 = 0;
    produto = 0;

    while (contador1 < numero1){
        contador2 = 0;
        while (contador2 < numero2){
            produto++; // produto = produto + 1;
            contador2++;   
        }
        contador1++;    
    }
    printf("\nO produto é igual a %d\n",produto);    
}

