#include <stdio.h>
#include <math.h>

int mult(int a, int b) {

    int vezes = 0;

    while(a > 1) {
        a = a/2;
        vezes++;
    }


    int elevado = pow(2,vezes);
    return (b + b*(elevado));
}

int main(void) {
    int n;
    printf("Digite quantas vezes deseja fazer a operação:");
    scanf("%d",&n);
    while(n<=0) {
        printf("Digite um numero acima de \n");
    }
    while(n>0) {
        int x,y;
        printf("Digite o primeiro numero:");
        scanf("%d",&x);
        printf("Digite o segundo numero:");
        scanf("%d",&y);
        printf("Produto dos numeros %i e %i(segundo a questao): %i\n",x,y,mult(x, y));
        n--;
    }
    return 0;
}
