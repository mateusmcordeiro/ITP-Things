#include <stdio.h>
#include <math.h>

int soma_primo(int primos[],int isP[],int n){
    int i;
    int soma = 0 ;
    for(i=0;i<n;i++){
        if(isP[i] == 1){
            soma = soma +primos[i];
        }
    }
    return soma;
}
int verifica_primo(int n,int p[]){
    int isPrimo[n];
    int i;
    for(i=0;i<n;i++){
        isPrimo[i] = 1;
    }
    for(i=0;i<n;i++){
    double num = sqrt(p[i]);
    int x  = ceil(num);
    for(i=2;i<=x;i++){
        if(p[i]%i == 0){
            isPrimo[i] = 0;
        }
    }
}
    return isPrimo;
}

int preenche(int n){
    int primos[n],i;
    for(i=0;i<n;i++){
        printf("Digite o %i numero\n",i+1);
        scanf("%i",&primos[i]);
    }
    return primos;
}


int main(){
int n;
    printf("Quantos numeros deseja verificar?");
    scanf("%i",&n);
int p = preenche(n);
int isP = verifica_primo(n,p);
int s = soma_primo(p,isP,n);
    printf("soma = %i",s);
}
