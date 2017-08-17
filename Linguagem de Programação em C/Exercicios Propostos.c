#include <stdio.h>

/*

Exercicio 1
int main(void){
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("A soma dos numeros eh: %d", num1 + num2);
}

Exercicio 2
int main(void){
    int num;

    scanf("%d", &num);

    if (num > 0)
        printf("%d", num);
}

Exercicio 3

int main(void){
    int n;

    scanf("%d", &n);

    printf("%d", n*n);
}


Exercicio 4



int main(void){
    int ano, idade;

    printf("Insira seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("Sua idade eh: %d", 2017-ano);

}

Exercicio 5


int main(void){
    int num;

    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d eh par", num);
    else
        printf("%d eh impar", num);

}

Exercicio 6

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
 Exercicio 7


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

 Exercicio 8;

 int main(void){
    int n,i=10;

    printf("Entre com o valor: ");
    scanf("%d", &n);

    do{

        printf("%d x %d = %d\n", n, i, n*i);
        i--;
    }while(i > 0);


 }


 //Exercicio 9



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

// Exercicio 10




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

 Exercicio 11
 soma dos primeiros numeros naturais

 Exercicio 12
 Dado um numero imprimir os n primeiros numeros impares

 Exercicio 13
 Calcular x elevado a n
*/
















































