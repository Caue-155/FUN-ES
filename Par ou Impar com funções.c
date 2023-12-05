#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void verificarQuantidadeParOuImpar(int numero[])
{
    int a; 
    int pares = 0;
    int impares = 0;

    for (a = 0; a < 6; a++)
    {
        if (numero[a] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        
    }
    printf("Quantidade de pares: %d \n", pares);
    printf("Quantidade de impares: %d \n", impares);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numeros[6];
    int a;

    for (a = 0; a < 6; a++)
    {
        printf("Digite o %dº número:", a + 1);
        scanf("%d", &numeros[a]);
    }
    verificarQuantidadeParOuImpar(numeros);
    return 0;
}