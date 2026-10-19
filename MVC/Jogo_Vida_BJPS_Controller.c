//Arquivo Controller.c
//Bruna Samy, Joao Pedro Freitas, Pedru Gama, Samira Carvalho
#include "Jogo_Vida_BJPS_Controller.h"
#include "Jogo_Vida_BJPS_View.h"
#include "Jogo_Vida_BJPS_Model.h"

void ObterTamanhoValido (void)
{
    int tamanho;
    do
    {
        tamanho = PerguntarTamanho();
    }while(tamanho < 10 || tamanho > 60);

    dim = tamanho;
}

void LimparMapa (int dim, char matriz[60][60]) //Essa funcao deixa toda a matriz cokm '.', ou seja, deixa ela no seu estado original (limpo)
{
    int i, j;
    for(i = 0; i < dim; i++)
    {
        for(j = 0; j < dim; j++)
        {
            matriz[i][j] = '.';
        }
    }
}

void InicializarMapa (void)
{
    ObterTamanhoValido();
    LimparMapa(dim, matriz);
    MostrarMapa(dim, matriz);
}

void RodarJogo (void)
{
    int opcao;

    ObterTamanhoValido();
    LimparMapa(dim, matriz);

    do
    {
        opcao = MostrarMenu();
        switch (opcao)
        {
            case 1:
                MostrarMapa(dim, matriz);
                break;
            case 2:
                LimparMapa(dim, matriz);
                break;
        }
    } while (opcao != 0);
}
