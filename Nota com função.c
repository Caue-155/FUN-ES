#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int somaNota(int n1, int n2)
{
    float resultado;
    resultado = (n1 + n2) / 2; 
    return resultado;
}

void limpaTela()
{
    system("CLS || CLEAR");
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int primeiroNumero;
    int segundoNumero;
    float media;

    printf("Digite o primeiro número:");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número:");
    scanf("%d", &segundoNumero);

    media= somaNota(primeiroNumero, segundoNumero);

    limpaTela();

    printf("Exibindo resultado...\n\n");

    printf("Média:%.2f", media);

    return 0;
}