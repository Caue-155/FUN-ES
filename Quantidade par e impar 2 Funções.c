#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void limpaTela()
{
    system("CLS || CLEAR");
}


int quantidadePar(int numerosEscolhidos[])
{
    int a;
    int pares = 0;
    for (a = 0; a < 6; a++)
    {
        if (numerosEscolhidos[a] %2 == 0)
        {
            pares++;
        }
        
    }
    return pares;
}

int quantidadeImpar(int numerosEscolhidos[])
{
    int a;
    int impares = 0;
    for (a = 0; a < 6; a++)
    {
        if (numerosEscolhidos[a] %2 == 1)
        {
            impares++;
        }
        
    }
    return impares;
}


int main()
{
    setlocale(LC_ALL,"portuguese");
    int numerosEscolhidos[6];
    int a;

    for (a = 0; a < 6; a++)
    {
        printf("Digite o %dº número:", a + 1);
        scanf("%d", &numerosEscolhidos[a]);
    }

    limpaTela();

    printf("Quantidade de pares: %d \n",quantidadePar(numerosEscolhidos));   
    printf("Quantidade de impares: %d \n",quantidadeImpar(numerosEscolhidos));

    return 0;   
}