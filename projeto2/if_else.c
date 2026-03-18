#include <stdio.h>

int main () {
  float nota1;
  float nota2;
  float nota3;
  float media;
  
  printf("Primeiro Trimestre: ");
  scanf("%f", &nota1);

  printf("Segundo Trimestre: ");
  scanf("%f", &nota2);

  printf("Terceiro Trimestre: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  if(media >= 6) {
      printf("Parabens, aprovado!\n");
  } else {
    printf("Que pena, reprovado!\n");
  }

 printf("A media do aluno foi: %.2f\n", media);

}

