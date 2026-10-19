//Arquivo View.c
//Bruna Samy, Joao Pedro Freitas, Pedru Gama, Samira Carvalho
#include <stdio.h>
#include "Jogo_Vida_BJPS_View.h"
#include "Jogo_Vida_BJPS_Model.h"

int PerguntarTamanho (void)
{
    int tamanho;
    printf("Digite o tamanho do mundo: ");
    scanf("%d", &tamanho);
    return tamanho;
}
void MostrarMapa (int dim, char matriz[60][60])
{
    int i, j;

    printf("  ");
    for(j = 0; j < dim; j++)
    {
        printf(" %02d", j);
    }
    printf("\n");

    for(i = 0; i < dim; i++)
    {
        printf("%02d", i);
        for(j = 0; j < dim; j++)
        {
            printf("  %c", matriz[i][j]);
        }
        printf("\n");
    }
}
int MostrarMenu (void)
{
    int opcao;

    printf("\nProjeto JOGO DA VIDA\n");
    printf("===========================\n");
    printf("1 - Apresentar o Mapa\n");
    printf("2 - Limpar o Mapa\n");
    printf("0 - Sair\n");
    printf("Opcao selecionada: ");
    scanf("%d", &opcao);
    return opcao;
}