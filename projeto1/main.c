#include <stdio.h>

// Scanf

int main () {
    int idade = 18;
    float altura = 1.8;
    char opcao = 'M';
    char nome[20] = "Fábio";

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite a opcão: ");
    scanf("%c", opcao);
    printf("A opção é %c", opcao);

}