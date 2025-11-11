#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int bispo = 0; //para que no loop a peça se movimente 3 vezes, se for const não posso alterar o valor nem usar ++
    int torre; //loop for, declaração do valor é feita no loop
    int rainha = 0; //valor a ser incrementado no loop

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while(bispo < 3 && bispo >= 0){
        printf(".BISPO.\n");
        printf("==CIMA==\n");
        printf("==ESQUERDA==\n");
        bispo++;
    }

    //avisa fim do movimento
    if(bispo == 3){
        printf(".Fim do movimento do Bispo.\n\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for(torre = 0; torre < 2; torre++){
        printf(".TORRE.\n");
        printf("==DIREITA==\n");
    }

    //avisa fim do movimento
    if(torre == 2){
        printf(".Fim do movimento da Torre.\n\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do{
        printf(".RAINHA.\n");
        printf("==CIMA==\n");
        printf("==CIMA==\n");
        printf("==CIMA==\n");
        rainha++;
    } while(rainha < 5);

    //avisa fim do movimento
    if(rainha == 5){
        printf(".Fim do movimento da Rainha.\n\n");
    }

    //avisa fim do movimento
    if(bispo == 3 && torre == 2 && rainha == 5){
        printf(".Fim do Jogo.\n");
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
