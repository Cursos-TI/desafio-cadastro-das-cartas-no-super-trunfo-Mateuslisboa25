#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigocidade[10];
    char nome[30];
    int populacao;
    float area;
    double pib;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Qual o código da cidade:\n");
    scanf("%s", codigocidade);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nome);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade?\n");
    scanf("%e", &pib);

    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &pontosturisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da sua cidade: %s\n", codigocidade);
    printf("Nome da cidade: %s\n", nome);
    printf("O número da população:%d\n", populacao);
    printf("O metro quadrado da cidade:%f\n", area);
    printf("O PIB da cidade:%e\n", area);
    printf("A quantidade de pontos turisticos da cidade:%d\n", pontosturisticos);
    

    return 0;
}
