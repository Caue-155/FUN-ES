#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void limpaTela()
{
    system("CLS || CLEAR");
}

float mediaAluno(float nota[])
{
    int a;
    float resultado;
    for (a = 0; a < 3; a++)
    {
        resultado += nota[a] / 3;
    }

    return resultado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    float nota[3];
    float media;

    for (a = 0; a < 3; a++)
    {
        printf("Digite a %dº nota do aluno:", a + 1);
        scanf("%f", &nota[a]);
    }

    limpaTela();

    printf("Média do aluno:%.2f", mediaAluno(nota));
    
    if (mediaAluno(nota) >= 7)
    {
        printf("\nAprovado!");
    }
    else
    {
        printf("\nReprovado!");
    }
    

    return 0;
}