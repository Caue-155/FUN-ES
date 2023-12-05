#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void parOuImpar(int numero)
{
    if (numero %2 == 0)
    {
        printf("\nO número é par!");
    }
    else
    {
        printf("\nO número é impar!");
    }
    
}

void limpaTela()
{
    system("CLS || CLEAR");
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero;

    printf("Escolha um número e veja se é par o impar:");
    scanf("%d", &numero);

    parOuImpar(numero);

    return 0;
}