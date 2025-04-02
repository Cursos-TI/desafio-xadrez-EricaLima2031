#include <stdio.h>


// Função recursiva para o movimenti da torre
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita: Casa %d\n", 6 - casas);
    moverTorre(casas - 1);
}
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Cima,Direita: Casa %d\n", 6 - casas);
    moverBispo(casas - 1);
    
    }

void moverRainha (int casas) {
    if (casas == 0) return; 
    printf("Esquerda: Casa %d\n", 9 - casas);
    moverRainha(casas - 1);
    
}
    void moverCavalo() {
        printf("Movimento do cavalo (2 casas para cima e 1 para a direita):\n");
        for (int i = 1; i <= 2; i++) { // Movimento para cima
        for (int j = 1; j <= 1; j++) { // Movimento para a direita
         printf ("Cima: casa %d\n", i);
         printf ("Direita: casa %d\n", j);

    }

    }
}
       
int main() {
    // Movimento da Torrer
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    printf("===========================\n");

    // Movimento Bispo 
    printf("Movimento do Bispo (5 casas na diagonal para cima e a direita):\n");
    moverBispo(5);
    printf("===========================\n");

    // Movimento da Rainha 
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    printf("===========================\n");
   
    // Movimento do Cavalo
    moverCavalo();
    printf("===========================\n");
   
    
    return 0;

}
