#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int jogador, computador;
    srand(time(0));

    printf("Seja bem-vindo ao Jokempô da Janaina\n");
    printf("Escolha uma opção: \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");
    printf("Escolha agora!\n");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1;

    switch(jogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
    break;
    case 2:
        printf("Jogador: Papel\n");
    break;
    case 3:
        printf("Jogador: Tesoura\n");
    break;
    default:
        printf("Opção Inválida\n");
    break;
    }
    
    switch(computador)
    {
    case 1:
        printf("Máquina: Pedra\n");
    break;
    case 2:
        printf("Máquina: Papel\n");
    break;
    case 3:
        printf("Máquina: Tesoura\n");
    break;
    }

    if (computador == jogador)
    {
        printf("empate");
    } else if (computador == 1 && jogador == 3)
    {
        printf("Máquina ganha");
    } else if (computador == 3 && jogador == 2)
    {
        printf("Máquina ganha");
    } else if (computador == 2 && jogador == 1)
    {
        printf("Máquina ganha");
    } else if (jogador == 1 && computador == 3)
    {
        printf("Jogador ganha");
    } else if (jogador == 3 && computador == 2)
    {
        printf("Jogador ganha");
    } else if (jogador == 2 && computador == 1)
    {
        printf("Máquina ganha");
    } else
        printf("Opção inválida");

    }
