#include <stdio.h>
#include<stdlib.h>

int main(){
    int opcao;
    char estado[50];
    char codigo[3];
    char nome_da_cidade[100];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    char estado2[50];
    char codigo2[3];
    char nome_da_cidade2[100];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
//menu interativo
    printf("*** Jogo Super Trunfo ***\n");
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:

        //pegando valores da primeira carta

    printf("Digite o código da primeira carta:\n");
    scanf("%s", &codigo);

    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a população:\n");
    scanf("%lu", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    //Pegando valores da segunda carta

    printf("Digite o código da segunda carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o estado:\n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);
    case 2:
        printf("As regras são.....\n");
        break;
    case 3:
        printf("Saindo do jogo\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    //Calculando pib per capita e densidade das duas cartas 
    float densidade_populacional = populacao / area;
    double pib_per_capita = pib / populacao;

    float densidade_populacional2 = populacao2 / area2;
    double pib_per_capita2 = pib2 / populacao2;

    // Exibe os resultados
    printf("Densidade populacional carta2: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    printf("Densidade populacional carta1: %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    // fazendo a comparação das 2 cartas

    if(pib_per_capita > pib_per_capita2){
        printf("Carta 1 (%s) venceu!\n", estado);
    }else{
        printf("Carta 2 (%s) venceu!\n", estado2);
    }



    return 0;


}