#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void tabuada(int numeroEscolhido)
{
    int a;
    for (a = 1; a < 11; a++)
    {
        printf("%d x %d = %d \n", numeroEscolhido, a, numeroEscolhido * a);
    }
    
}

void limpaTela()
{
    system("CLS || CLEAR");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numeroEscolhido;

    printf("Digite o número da tabuada:");
    scanf("%d", &numeroEscolhido);

    limpaTela();

    tabuada(numeroEscolhido);
    return 0;
}