#include <stdio.h>

int main() {
    float notas[3]; // Vetor para armazenar as 3 notas
    int i;

    // Leitura das notas
    for (i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Impressão das notas
    printf("\nNotas do aluno:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}

