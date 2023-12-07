#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void parOuImpar(int numero)
{
    if (numero %2 == 0)
    {
        printf("%d - par!",numero);
    }
    else
    {
        printf("%d - impar!",numero);
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

    limpaTela();

    parOuImpar(numero);

    return 0;
}