#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar printf

int main() {
    // --- Simulação do Movimento da Torre ---
    // A Torre se move em linha reta horizontal ou vertical.
    // Usaremos um loop 'for' para simular o movimento da Torre.
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    int casasTorre = 5; // Define o número de casas que a Torre vai mover
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo ---
    // O Bispo se move na diagonal.
    // Usaremos um loop 'while' para simular o movimento do Bispo.
    printf("--- Movimento do Bispo (5 casas na diagonal para Cima e Direita) ---\n");
    int casasBispo = 5; // Define o número de casas que o Bispo vai mover
    int contadorBispo = 0; // Contador para o loop while
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento da Rainha ---
    // A Rainha se move em todas as direções.
    // Usaremos um loop 'do-while' para simular o movimento da Rainha.
    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int casasRainha = 8; // Define o número de casas que a Rainha vai mover
    int contadorRainha = 0; // Contador para o loop do-while
    if (casasRainha > 0) { // Garante que o loop execute pelo menos uma vez se casasRainha for maior que 0
        do {
            printf("Esquerda\n"); // Imprime a direção a cada casa percorrida
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    } else {
        printf("Nenhum movimento para a Rainha.\n"); // Mensagem caso casasRainha seja 0
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Retorna 0 indicando que o programa foi executado com sucesso
}
