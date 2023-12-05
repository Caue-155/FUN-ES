#include<stdlib.h>
#include<stdio.h>

void cabecalho()
{
    printf("\n=========================\n");
    printf("\tSENAI");
    printf("\n=========================\n");
}

void limpaTela()
{
    fflush(stdin);
    system("CLS || CLEAR");
}

int main()
{
    char nome[200];
    int idade;

    cabecalho();

    printf("Digite um nome:");
    gets(nome);

    limpaTela();

    cabecalho();
    printf("Digite uma idade:");
    scanf("%d", &idade);

    limpaTela();
    cabecalho();

    printf("Nome:%s \n", nome);
    printf("Idade:%d \n", idade);

    return;
}