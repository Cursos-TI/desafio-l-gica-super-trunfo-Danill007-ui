#include <stdio.h>
#include<stdlib.h>

int main(){
    int opcao;
    int maior;
    char estado[50];
    int codigo;
    char nome_da_cidade[100];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    double pib_per_capita;
    char primeiroAtributo, segundoAtributo;
    float resultado, resultado2;

    char estado2[50];
    int codigo2;
    char nome_da_cidade2[100];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    double pib_per_capita2;

    
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

    if(densidade_populacional = populacao / area) (pib_per_capita = pib / populacao);
        printf("Densidade populacional carta 1: %.2f habitantes por km²\n", densidade_populacional);
        printf("PIB per capita: %.2f\n", pib_per_capita);
    

    if(densidade_populacional2 = populacao2 / area2) (pib_per_capita2 = pib2 / populacao2);
        printf("Densidade populacional carta2 : %.2f habitantes por km²\n", densidade_populacional2);
        printf("PIB per capita: %.2f\n", pib_per_capita2);

    // fazendo a comparação das 2 cartas
    printf("Agora escolha o 1° atributos para duelar:\n");
    printf("a. Área\n");
    printf("b. PIB\n");
    printf("c. População\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &primeiroAtributo);

        switch (primeiroAtributo)
        {
        case 'a':
            printf("Você escolheu o atributo Área:\n");
            resultado = area > area2 ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
        case 'b':
            printf("Você escolheu o atributo PIB:");
            resultado = pib > pib2 ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
        case 'c':
            printf("Você escolheu o atributo População:");
            resultado = populacao > populacao2 ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
    
        default:
        printf("Opção inválida!\n");
            break;
        }
        printf("Escolha o 2° atributo:\n");
        printf("Atenção! Você deve escolher um atributo diferente do primeiro\n");
        printf("a. Área\n");
        printf("b. PIB\n");
        printf("c. População\n");

        printf("Escolha a comparação:\n");
        scanf("%c", &segundoAtributo);
        
        switch (segundoAtributo)
        {
        case 'a':
            printf("Você escolheu o atributo Área:");
            resultado2 = area2 > area ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
        case 'b':
            printf("Você escolheu o atributo PIB:");
            resultado2 = pib2 > pib ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
        case 'c':
            printf("Você escolheu o atributo População:");
            resultado2 = populacao2 > populacao ? printf("%c foi a carta vencedora!\n", estado):
            printf("%c foi a carta vencedora\n", estado);
            break;
    
        default:
        printf("Opção inválida!\n");
            break;
        }
        
        if (resultado = resultado2)
        {
            printf("Empate\n");
        }else if (resultado > resultado2) {
            printf("%s é a carta vencedora", estado);
        }else{
            printf("%s é a carta vencedora", estado2);
        }
        
        pib_per_capita > pib_per_capita2 ? printf("%s é a carta vencedora", estado): 
        printf("%s é a carta vencedora", estado2);

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


    
    return 0;




}