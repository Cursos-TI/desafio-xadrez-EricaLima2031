#include <stdio.h>
// Desafio de Xadrez - MateCheck
#define BISPO 5
#define TORRE 5
#define RAINHA 8

// Base para o desenvolvimento do sistema da movimentação
void moverBispo () {
    for (int i = 0; i < BISPO; i++) {
        printf("Diagonal Superior Direita\n");
    }
}
void moverTorre() {
    for (int i = 0; i < TORRE; i++) {
printf("Direita\n");
    }
}

void moverRainha () {
    for (int i = 0; i < RAINHA; i++) {
        printf("Esquerda\n");
    }
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
