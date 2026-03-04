#include <stdio.h>

int main () {
    char Estado1;
    char CodigodaCarta1[5];
    char NomedaCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int NumeroPontosTuristicos1;

    char Estado2;
    char CodigodaCarta2[5];
    char NomedaCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int NumeroPontosTuristicos2; 

    // Carta A
    printf("Carta 1\n");
    printf("Digite o estado (A-H):  ");
        scanf(" %c", &Estado1);
    printf("Digite o código da carta:  ");
        scanf("%s", CodigodaCarta1);
    printf("Digite o nome da cidade:  ");
        scanf(" %[^\n]", NomedaCidade1);
    printf("Digite a população:  ");
        scanf("%d", &Populacao1);
    printf("Digite a área:  ");
        scanf("%f", &Area1);
    printf("Digite o PIB:  ");
        scanf("%f", &PIB1);
    printf("Digite o numero total de pontos turísticos: ");
        scanf("%d", &NumeroPontosTuristicos1);

    // Carta B
    printf("Carta 2\n");
    printf("Digite o estado (A-H):  ");
        scanf(" %c", &Estado2);
    printf("Digite o código da carta:  ");
        scanf("%s", CodigodaCarta2);
    printf("Digite o nome da cidade:  ");
        scanf(" %[^\n]", NomedaCidade2);
    printf("Digite a população:  ");
        scanf("%d", &Populacao2);
    printf("Digite a área:  ");
        scanf("%f", &Area2);
    printf("Digite o PIB:  ");
        scanf("%f", &PIB2);
    printf("Digite o numero total de pontos turísticos: ");
        scanf("%d", &NumeroPontosTuristicos2);
        
    // Saída de Dados da Carta A
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", CodigodaCarta1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área (km2): %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos1);

    // Saída de Dados da Carta B
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área (km2): %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos2);


}