#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// recursividade 
void bispo(){
    int bispo = 0; //para que no loop a peça se movimente 3 vezes, se for const não posso alterar o valor nem usar ++

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
}


void torre(){
    int torre; //loop for, declaração do valor é feita no loop

    for(torre = 0; torre < 2; torre++){
        printf(".TORRE.\n");
        printf("==DIREITA==\n");
    }

    //avisa fim do movimento
    if(torre == 2){
        printf(".Fim do movimento da Torre.\n\n");
    }

}


void rainha(){
    int rainha = 0; //valor a ser incrementado no loop

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
}


void cavalo(){
    int cavalo = 0; // se não declara o valor nem aqui nem no loop, o valor é atribido com "valor lixo"

    while(cavalo < 2) {
        for(int i = 0; i < 1; i++){ //usar variavel diferente no for (i), se não gera um loop infinito, já que o for sempre reinicializa cavlo = 0
            printf("==CIMA==\n");
            printf("==CIMA==\n"); 
        }

        printf("==ESQUERDA==\n");
        cavalo++; //já que usei uma variavel diferente no for, é preciso incrementar cavalo++

        if (cavalo == 2){
            printf(".Fim do movimento do cavalo.\n\n");
            printf("Fim do jogo\n");
        }
    }
}


int main() {
    bispo();
    torre();
    rainha();
    cavalo();

    return 0;
}
