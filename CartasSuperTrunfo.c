#include <stdio.h>

int main(){

//  Declaração de variáveis.
    // Variáveis do tipo float
    float
        area1,
        area2,
        pib1,
        pib2;
        
    // Variáveis do tipo int
    int
        populacao1,
        populacao2,
        turismo1,
        turismo2;
        
    // Variáveis do tipo char
    char
        cod1[4] = "A01",
        cod2[4] = "B02",
        estado1[2] = "A",
        estado2[2] = "B",
        nome1[20],
        nome2[20];
//  Leitura de dados da carta1.
    printf("Preencha a seguir, os dados da Carta 1\n\n");

    printf("Digite o nome da cidade(Sem espaços, Com primeira letra de cada palavra maiúscula): ");
    scanf("%s", nome1);

    printf("Digite a população(somente números): ");
    scanf("%d", &populacao1);

    printf("Digite a área(em Km²): ");
    scanf("%f", &area1);

    printf("Digite o Pib: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos(somente números): ");
    scanf("%d", &turismo1);

//  Impressão de dados da carta1.
    printf("Dados da Carta 1\n\n");
    printf("\nEstado:%s\n", estado1);
    printf("Código:%s\n", cod1);
    printf("Nome da Cidade:%s\n", nome1);
    printf("População:%d\n", populacao1);
    printf("Area:%f Km²\n", area1);
    printf("PIB:%f Milhoes de reais\n", pib1);
    printf("Número de pontos turisticos:%d\n\n",turismo1);

//  Leitura de dados da carta2.
    printf("Preencha a seguir, os dados da Carta 2\n\n");

    printf("Digite o nome da cidade(Sem espaços, Com primeira letra de cada palavra maiúscula): ");
    scanf("%s", nome2);

    printf("Digite a população(somente números): ");
    scanf("%d", &populacao2);

    printf("Digite a área(em Km²)(somente números): ");
    scanf("%f", &area2);

    printf("Digite o Pib: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    
    scanf("%d", &turismo2);
//  Impressão de dados da carta2.
    printf("Dados da Carta 2\n\n");
    printf("\nEstado:%s\n", estado2);
    printf("Código:%s\n", cod2);
    printf("Nome da Cidade:%s\n", nome2);
    printf("População:%d\n", populacao2);
    printf("Area:%f Km²\n", area2);
    printf("PIB:%f Milhoes de reais\n", pib2);
    printf("Número de pontos turisticos:%d\n",turismo2);
}