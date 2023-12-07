#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void limpaTela()
{
    system("CLS || CLEAR");
}

float inflacao(float precoProduto)
{
    float inflacao;
    if (precoProduto < 100)
    {
        inflacao = precoProduto + (precoProduto * 0.10);
    }
    else
    {
        inflacao = precoProduto + (precoProduto * 0.20);
    }
    return inflacao;
}


int main()
{
    setlocale(LC_ALL,"portuguese");
    float precoProduto;

    printf("Digite o valor do produto:R$");
    scanf("%f", &precoProduto);

    limpaTela();

    printf("Valor do produto com inflação:R$%.2f", inflacao(precoProduto));
    
    return 0;
}