#include <stdio.h>

// Dado dois número inteiro positivo n, calcular e imprimir a sua soma.

int main(void){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("A soma dos numeros eh: %d", num1 + num2);
}

//Faça um programa que solicite um número (inteiro/positivo) e imprima-o.

int main(void){
    int num;

    scanf("%d", &num);

    if (num > 0)
        printf("%d", num);
}

// Dado um número positivo n, imprimir seu quadrado.

int main(void){
    int n;

    scanf("%d", &n);

    printf("%d", n*n);
}

// Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.

int main(void){
    int ano, idade;

    printf("Insira seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Sua idade eh: %d", 2017-ano);

}

// Dado um número inteiro positivo n verificar se é par ou ímpar. Apresente uma mensagem na tela informando o número e o resultado. OBS:% utilizado para calcular o resto.

int main(void){
    int num;

    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d eh par", num);
    else
        printf("%d eh impar", num);

}

// Dados três números, imprimi-los em ordem crescente.

int main(void){
   int num1, num2, num3;

   scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 < num2) && (num1 < num3)){

        if (num2 < num3)
            printf("%d, %d, %d", num1, num2, num3);
        else
            printf("%d, %d, %d", num1, num3, num2);
    }

    else if ((num2 < num1) && (num2 < num3)){

        if (num1 < num3)
            printf("%d, %d, %d", num2, num1, num3);
        else
            printf("%d, %d, %d", num2, num3, num1);
    }

    else if ((num3 < num1) && (num3 < num2)){

        if (num1 < num2)
            printf("%d, %d, %d", num3, num1, num2);
        else
            printf("%d, %d, %d", num3, num2, num1);
    }

}

// Calcular o fatorial de um número fornecido pelo usuário.
// A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
// Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.

int fatorial();

 int main(void){

     int num;
     scanf("%d", &num);
    printf("o fatorial de %d eh: %d", num, fatorial(num));
 }

 int fatorial(int n){
    while(n > 1){
        return n* fatorial(n-1);
    }

 }
 
 // Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12.
 
 int main(void){
    int n,i=10;

    printf("Entre com o valor: ");
    scanf("%d", &n);

    do{

        printf("%d x %d = %d\n", n, i, n*i);
        i--;
    }while(i > 0);
 }
 
 // Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação.
 
 int main(void){
    int num1, num2, escolha, calculator=1;




        printf("Bem Vindo a Calculator2000, uma calculadora basica mas eficiente.\n");
        printf("Voce deseja:\n");
        printf("(1)...Divisao\n(2)...Resto da Divisao\n(3)...Adicao\n(4)...Multiplicacao\n(5)...Sair\n\n");


        while(calculator != 0){

            scanf("%d", &escolha);

            if(escolha == 1){
                printf("Digite os valores desejados para a Divisao: \n");
                scanf("%d %d", &num1, &num2);

                printf("Resultado: %d\n", num1 / num2);
            }

            else if (escolha == 2){
                printf("Digite os valores desejados para o Resto da Divisao: \n");
                scanf("%d %d", &num1, &num2);

                printf("Resultado: %d\n", num1 % num2);
            }

            else if (escolha == 3){
                printf("Digite os valores desejados para a Adicao: \n");
                scanf("%d %d", &num1, &num2);

                printf("Resultado: %d\n", num1 + num2);
            }

            else if (escolha == 4){
                printf("Digite os valores desejados para a Multiplicacao: \n");
                scanf("%d %d", &num1, &num2);

                printf("Resultado: %d\n", num1 * num2);
            }

            else if (escolha == 5){
                calculator = 0;
            }
    }
 }
 
 // Dada uma sequência de números inteiros não-nulos, começando por 1,imprimir seus quadrados. 
 
int main(void){
    int num,n,flag=1;

    printf("Digite 0 para sair do programa\n\n\n");

    while(flag != 0){
        printf("Digite um numero: \n");
        scanf("%d", &n);
        printf("%d\n", n*n);

        if (n ==0){
            flag=0;
        }
    }
 }

 // Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.
 
 int main(void){
    int n,aux=0,i=0;

    scanf("%d", &n);

    do{
        aux = aux + i;
        i++;

    }while(i<=n);

    printf("%d", aux);

}

// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

int main(void){
    int n,i=0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        if(i%2 != 0)
            printf("%d", i);
    }
}

//  Dados um inteiro x e um inteiro não-negativo n, calcular x n.

int main(void){
    int x,n,r,i=1;

    printf("Digite primeiro o valor de X e depois o valor a ser elevado: \n");
    scanf("%d %d", &x, &n);

    int aux=x;

    do{
        aux = aux * x;
        i++;
    }while(i<n);

    printf("%d elevado a %d eh igual a: %d\n", x, n, aux);
}
