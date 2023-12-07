#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float conversao(float numeroEmMetros)
{
    int conversaoCentimetros;
    conversaoCentimetros = numeroEmMetros * 100;
    return conversaoCentimetros;
}

void limpaTela()
{
    system("CLS || CLEAR");
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    float numeroEmMetros;

    printf("Digite um número em metros:");
    scanf("%f", &numeroEmMetros);

    limpaTela();

    printf("Valor em centímentros:%.2f", conversao(numeroEmMetros));


}