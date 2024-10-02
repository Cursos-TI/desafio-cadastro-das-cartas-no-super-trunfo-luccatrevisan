#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char pais[50], estado[50], cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Bem-vindo ao desafio do SuperTrunfo!\nColoque a sua cidade no jogo digitando abaixo as informações sobre ela! \n");

    printf("Digite o nome do país: \n");
    scanf("%s", &pais);
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km2): \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Perfeito! A cidade %s foi registrada no nosso jogo SuperTrunfo! \n", cidade);
    printf("População: %d \nÁrea: %f \nPIB: %f \nPontos Turísticos: %d", populacao, area, PIB, pontosTuristicos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
