#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
    if(casas > 1){
        printf("Direita, ");
        return moverTorre(casas - 1);
    } else if (casas == 1){
        printf("Direita.\n");
    }
}

void moverRainha(int casas){
    if(casas > 1){
        printf("Esquerda, ");
        return moverRainha(casas - 1);
    } else if (casas == 1){
        printf("Esquerda.\n");
    }
}

void moverBispo(int casas){
    while(casas > 0){
        if(casas > 1){
            for (int x = 1; x < 2; x++){
            printf("(Direita, ");
            for(int y = 1; y < 2; y++){
                printf("Cima), ");
            }
        }
        } else if (casas == 1) {
            for (int x = 1; x < 2; x++){
            printf("(Direita, ");
            for(int y = 1; y < 2; y++){
                printf("Cima).\n");
            }
        }
    }
    return moverBispo(casas - 1);
    }
}

void moverCavalo(int casas){
    while(casas > 0){
        if (casas % 3 == 0 || casas % 3 == 2){
            printf("Cima, ");
        } else {
            printf("Direita. ");
        }
    return moverCavalo(casas - 1);    
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int casas;

    // Implementação de Movimentação do Bispo 5 casas diagonal direita
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nDESAFIO NÍVEL NOVATO:\n");
    printf("\nMover Bispo 5 casas para diagonal superior direita.\n");

    for(casas = 5; casas > 0;  casas--){
        if(casas == 1){
            printf("(Direita, Cima).\n");
        } else{
            printf("(Direita, Cima), ");
        }
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMover Torre 5 casas para direita.\n");

    casas = 5;
    while(casas > 0){
        if (casas == 1){
            printf("Direita.\n");
            break;
        } else {
            printf("Direita, ");
            casas--;
        }        
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMover Rainha 6 casas para esquerda.\n");

    casas = 6;
    do{
        if(casas == 1){
        printf("Esquerda.\n");            
        } else{
            printf("Esquerda, ");
        }
        casas--;

    } while(casas > 0);

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nDESAFIO NÍVEL AVENTUREIRO:\n");
    printf("\nMover Cavalo em L para baixo e para esquerda:\n");

    casas = 3;

    for(int x = 1; x >= 0; x--){
        if(x == 0){
            printf("Esquerda.\n");
            break;
        }
        for(int y = 2; y > 0; y--){
            printf("Baixo, ");
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nDESAFIO NÍVEL MESTRE:\n");
    printf("\nMover Torre 5 casas para a direita:\n");

    casas = 5;
    moverTorre(casas);


    printf("\nMover Rainha 8 casas para a esquerda:\n");

    casas = 8;
    moverRainha(casas);


    printf("\nMover Bispo 5 casas para a diagonal superior direita:\n");

    casas = 5;
    moverBispo(casas);

    printf("\nMover Cavalo em L para cima e a direita :\n");

    casas = 3;
    moverCavalo(casas);


    return 0;
}
