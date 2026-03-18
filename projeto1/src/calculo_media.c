// Projeto em C para calcular a média de notas.
// Desenvolvido para praticar conceitos básicos da linguagem.

#include <stdio.h>

int main () {
    float nota1;
    float nota2;
    float nota3;
    float media;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);    
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media final: %.1f", media);


}