#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void limpaTela()
{
    system("CLS || CLEAR");
}

int somar(int n1, int n2)
{
    int resultadoSoma;
    resultadoSoma = n1 + n2;
    return resultadoSoma;
}
int subtrair(int n1, int n2)
{
    int resultadoSubtracao;
    resultadoSubtracao = n1 - n2;
    return resultadoSubtracao;
}
int multiplicar(int n1, int n2)
{
    int resultadoMultiplicacao;
    resultadoMultiplicacao = n1 * n2;
    return resultadoMultiplicacao;
}
int dividir(int n1, int n2)
{
    float resultadoDivisao;
    resultadoDivisao = n1 / n2;
    return resultadoDivisao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int primeiroNumero;
    int segundoNumero;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;

    printf("Digite o primeiro número:");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número:");
    scanf("%d", &segundoNumero);

    limpaTela();

    soma = somar(primeiroNumero, segundoNumero);
    subtracao = subtrair(primeiroNumero, segundoNumero);
    multiplicacao = multiplicar(primeiroNumero, segundoNumero);
    divisao = dividir(primeiroNumero, segundoNumero);

    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtracao);
    printf("Multiplicação: %d \n", multiplicacao);
    printf("Divisão: %.2f \n", divisao);

    return 0;
}