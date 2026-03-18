// Estudo de manipulação e conversão de tipo de dados
#include <stdio.h>

// variaveis do tipo int
 int main () {
    int a = 10;
    int b = 5;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);


    return 0;
} 


// variaveis do tipo float
int main () {
    float x = 5.5;
    float y = 5.5;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("Soma: %.2f\n", soma);
    printf("Diferenca: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);


    return 0;
}


/*  
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    float quociente = (float) a / b; // 'a' é explicitamente convertido para float

    printf("Quociente: %.2f\n", quociente);
    return 0;
}

*/

/* operadores relacionais 
Os operadores relacionais disponíveis na linguagem C são:

 

> (maior que)
< (menor que)
>= (maior ou igual a)
<= (menor ou igual a)
== (igual a)
!= (diferente de)

/*