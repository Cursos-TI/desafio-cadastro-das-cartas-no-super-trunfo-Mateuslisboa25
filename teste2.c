#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char codigocidade[10];
    char nome[30];
    int populacao;
    float area;
    double pib;
    int pontosturisticos;

    printf("Qual o código da cidade:\n");
    scanf("%s", codigocidade);
    getchar(); // Limpa o buffer do teclado

    printf("Qual o nome da cidade?\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual a área da cidade (em km²)?\n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade?\n");
    scanf("%lf", &pib); // %lf é mais apropriado para double

    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf("%d", &pontosturisticos);

    // Exibindo os dados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigocidade);
    printf("Nome: %s", nome); // fgets já inclui a quebra de linha
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2e\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);

    return 0;
}
