#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // Cidade 1
    char estadoCidade1[50];
    char codigoCidade1[50];
    char nomeCidade1[50];
    int populacaoCidade1;
    float areaCidade1;
    float PIBCidade1;
    int pontosTuristicos1;

    // Cidade 2
    char estadoCidade2[50];
    char codigoCidade2[50];
    char nomeCidade2[50];
    int populacaoCidade2;
    float areaCidade2;
    float PIBCidade2;
    int pontosTuristicos2;

    // Introdução
    printf("Seja bem vindo ao Super Trunfo de Cartas! \n\n");
    printf("Vamos começar criando sua primeira carta: \n\n");

    // Cidade 1
    printf("Escolha o estado da sua cidade (entre A a H): ");
    scanf("%s", &estadoCidade1);

    printf("Código da sua cidade (letra do estado seguido\nde um número entre 01 e 04): ");
    scanf("%s", &codigoCidade1);
    
    printf("Diga o nome da sua cidade: ");
    scanf("%s", &nomeCidade1);
    
    printf("Quantas pessoas moram nela: ");
    scanf("%d", &populacaoCidade1);

    printf("Área da sua cidade em km²: ");
    scanf("%f", &areaCidade1);

    printf("PIB da cidade: ");
    scanf("%f", &PIBCidade1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cidade 2
    printf("\nPronto! Agora vamos criar a segunda carta: \n\n");

    printf("Escolha o estado da sua cidade (entre A a H): ");
    scanf("%s", &estadoCidade2);

    printf("Código da sua cidade (letra do estado seguido\nde um número entre 01 e 04): ");
    scanf("%s", &codigoCidade2);
    
    printf("Diga o nome da sua cidade: ");
    scanf("%s", &nomeCidade2);
    
    printf("Quantas pessoas moram nela: ");
    scanf("%d", &populacaoCidade2);

    printf("Área da sua cidade em km²: ");
    scanf("%f", &areaCidade2);

    printf("PIB da cidade: ");
    scanf("%f", &PIBCidade2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\nConcluído! Aqui estão as suas cartas:\n\n");

    // Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %s \n", estadoCidade1);
    printf("Código da cidade: %s \n", codigoCidade1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacaoCidade1);
    printf("Área: %f \n", areaCidade1);
    printf("PIB: %f \n", PIBCidade1);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos1);

    // Carta 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %s \n", estadoCidade2);
    printf("Código da cidade: %s \n", codigoCidade2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacaoCidade2);
    printf("Área: %f \n", areaCidade2);
    printf("PIB: %f \n", PIBCidade2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);

    return 0;
}
