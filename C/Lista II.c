#include <stdio.h>

//1. Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.

void Primo();

int main(void){
    int n, flag=1;
    printf("Digite 0 para sair\n\n");

    while(flag != 0){
        printf("Numero: \n");
        scanf("%d", &n);

        if(n == 0){
            flag = 0;
            break;
        }
        else if (n == 2){
            printf("%d eh primo!\n", n);
        }


        primo(n);
    }
}

void primo(int n){
    if(n % 2 != 0)
        printf("%d eh primo!\n", n);
    else
        printf("%d nao eh primo!\n", n);

}

//2. Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.

void somaPrimos();

int main(void){
    int n, flag =1 ;

    printf("0 para sair do programa\n\n");

    while(flag != 0)
{

    printf("\nNumero: \n");
    scanf("%d", &n);
    printf("\n");

    if (n == 0)
        flag = 0;

    somaPrimos(n);
}

}

// Ex: n = 3;
// 2 + 3 + 5 = 10

void somaPrimos(int n){
    int cont=0,max = 100,i,aux=0;

    for(i = 2; i < max; i++){

        if ((i == 2) || (i % 2 != 0)){
            aux = aux + i;
            printf("%d ", i);
            cont++;
        }

        else if (cont == n){
            break;
        }
        else if (n == 0)
            break;
    }

    printf("= %d ", aux);
}

//3. Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.

void divisore();

int main(void){
    int n;

    printf("Insira um numero: \n");
    scanf("%d", &n);

    divisore(n);

}

void divisore(int n){
    int i, cont=0;

    for(i = 1; i<=n; i++){
        if (n % i == 0)
            cont++;

    }

    printf("%d tem %d divisores\n", n, cont);


}

//4. Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
//	o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//	o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//	o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

void triangulo();

int main(void){

    int x,y,z, flag=1;

    printf("0 0 0 sai do programa\n\n");

    while(flag != 0){
    printf("Digite as 3 medidas do triangulo: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x == 0) && (y == 0) && (z == 0))
        flag = 0;

    triangulo(x, y, z);
    }

}

void triangulo(int x, int y, int z){

    if ((x<y+z)||(y<x+z)||(z<x+y)){

        if(x == y == z)
            printf("EQUILATERO");

        else if ((x != y) && (y != z) && (x != z)){
            printf("ESCALENO");
        }

        else
            printf("ISOSCELES");
    }


}

//5. Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
//    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
//    Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.

	
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

//6. Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna XZ. (sem utilizar funções prontas)

int Quadrado();

int main(void){
    int a, b, flag=1;

    printf("0 0 para sair do programa\n\n");

    while(flag != 0){
    printf("Digite o numero e o valor a ser elevado\n");
    scanf("%d %d", &a, &b);

    if((a == 0) && (b == 0))
        flag = 0;

    printf("%d elevado a %d eh igual a: %d\n", a, b, Quadrado(a, b));

    }
}

int Quadrado(int a, int b){

    while(b>1){
        return a * Quadrado(a, b-1);
    }
}

//7. Faça 3 funções:
//•	ler: - uma função que receba dois número inteiro positivo n;
//•	multiplicar: - que multiplique os números recebidos na função ler;
//•	imprimir: - que imprima o resultado da função multiplicar.

void ler();
void multiplicar();
void imprimir();

int main(void){
    int a,b,r;

    ler(&a, &b);

    multiplicar(a,b, &r);

    imprimir(a, b, r);




}
void ler(int *a, int *b){
    int x,y;
    printf("Escreva dois numeros:\n");
    scanf("%d %d", &x, &y);
    *a = x;
    *b = y;

}

void multiplicar(int a, int b, int *r){
    *r = a * b;
}

void imprimir(int a, int b, int r){
    printf("%d x %d = %d", a, b, r);

}

//8.	Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é par e 0 se n é impar.

void parImpar();

int main(void){
    int n, flag=1;

    printf("0 para sair do programa\n\n");

    while(flag != 0){
    printf("Digite o numero: \n");
    scanf("%d", &n);

    if (n == 0 )
        flag = 0;
        break;

    parImpar(n);
    }


}

void parImpar(int n){
    if(n % 2 == 0)
        printf("E par\n");
    else
        printf("E impar\n");

}
























