// Cadastro de Alunos 

#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[50];
    

    printf("Digite sua idade:  \n");
    scanf("%d", &idade);

    printf("Digite sua altura:  \n");
    scanf("%f", &altura);

    printf("Digite seu nome:  \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula:  \n");
    scanf("%d", &matricula);


    printf("O nome do aluno é: %s - A matrícula é: %d\n", nome, matricula);
    printf("A idade é: %d - A altura é: %f", idade, altura );




}