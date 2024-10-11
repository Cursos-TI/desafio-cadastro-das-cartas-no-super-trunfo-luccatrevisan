#include <stdio.h>

int main(){
    char pais[50], estado[50], cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    printf("Bem-vindo ao desafio do SuperTrunfo!\nColoque a sua cidade no jogo digitando abaixo as informações sobre ela! \n");

    printf("Digite o nome do país: \n");
    scanf("%s", &pais);
    
    printf("Digite o Estado em formato UF (RJ, SP etc): \n");
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

    float densidadePop =  (float) populacao / area;
    float PIBcapita = (float) PIB / populacao;

    printf("Perfeito! A cidade %s - %s, %s foi registrada no nosso jogo SuperTrunfo! \n", cidade, estado, pais);
    printf("População: %d \nÁrea: %.1f \nPIB: %.2f \nPontos Turísticos: %d \n", populacao, area, PIB, pontosTuristicos);
    printf("Densidade Populacional: %.1f \nPIB per Capita: %.2f", densidadePop, PIBcapita);
}