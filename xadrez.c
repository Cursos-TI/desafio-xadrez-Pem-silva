// Desafio Novato


#include <stdio.h>


int main() {
 
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    int i; 

    printf("=== MOVIMENTACAO DAS PECAS ===\n\n");

    printf("Movimentacao do Bispo (5 casas na diagonal superior direita):\n");
    for (i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: ", i);
        printf("Cima + Direita\n");
    }
    printf("\n");

    printf("Movimentacao da Torre (5 casas para a direita):\n");
    i = 1;
    while (i <= MOV_TORRE) {
        printf("Passo %d: ", i);
        printf("Direita\n");
        i++;
    }
    printf("\n");

    printf("Movimentacao da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Passo %d: ", i);
        printf("Esquerda\n");
        i++;
    } while (i <= MOV_RAINHA);

    printf("\n=== FIM DAS MOVIMENTACOES ===\n");



// Desafio nivel Aventureiro 

    int x = 4, y = 4; 
    int movimentos = 1;

    printf("Posição inicial do cavalo: (%d, %d)\n", x, y);

    while (movimentos > 0) { // laço externo
        for (int i = 0; i < 2; i++) { // laço interno
            y++; // move para baixo
            printf("Movendo para baixo... posição atual: (%d, %d)\n", x, y);
        }

        x--; 
        printf("Movendo para a esquerda... posição atual: (%d, %d)\n", x, y);

        movimentos--;
    }

    printf("Posição final do cavalo: (%d, %d)\n", x, y);
    return 0;
}

// Desafio nivel Mestre

void moverBispo(int x, int y, int passos) {
    if (passos == 0) {
        printf("Bispo chegou à posição final: (%d, %d)\n\n", x, y);
        return;
    }

    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) { 
            x++;
            y--;
            printf("Bispo moveu para: (%d, %d)\n", x, y);
        }
    }

    moverBispo(x, y, passos - 1);
}

void moverTorre(int x, int y, int passos) {
    if (passos == 0) {
        printf("Torre chegou à posição final: (%d, %d)\n\n", x, y);
        return;
    }

    x++;
    printf("Torre moveu para: (%d, %d)\n", x, y);
    moverTorre(x, y, passos - 1);
}

void moverRainha(int x, int y, int passos) {
    if (passos == 0) {
        printf("Rainha chegou à posição final: (%d, %d)\n\n", x, y);
        return;
    }

    x--;
    printf("Rainha moveu para: (%d, %d)\n", x, y);
    moverRainha(x, y, passos - 1);
}

void moverCavalo(int x, int y) {
    printf("Posição inicial do cavalo: (%d, %d)\n", x, y);

    for (int i = 0, j = 0; i < 2 || j < 1; ) { 
        if (i < 2) {
            y--; 
            printf("Cavalo moveu para cima: (%d, %d)\n", x, y);
            i++;
            continue; 
        }
        if (j < 1) {
            x++; 
            printf("Cavalo moveu para direita: (%d, %d)\n", x, y);
            j++;
        }
        if (i >= 2 && j >= 1) {
            break; 
        }
    }

    printf("Cavalo chegou à posição final: (%d, %d)\n\n", x, y);
}


int main() {
    printf("=== Movimento das Peças (Nível Mestre) ===\n\n");

   
    moverBispo(4, 4, 5);

   
    moverTorre(4, 4, 5);

    moverRainha(4, 4, 8);

   
    moverCavalo(4, 4);

    printf("=== Desafio concluído! 🏁 ===\n");
    return 0;
}