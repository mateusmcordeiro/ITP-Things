#include <stdio.h>

#include <math.h>


int mdc(int maior , int num[] ){
    
}

int bigger(int num[],int n){
    int i,maior;
    maior = 0;
    for(i=0;i<n;i++){
        if ((num[i]>maior)){
            maior = num[i];
        }
    }
 return maior;
}
int dist(int n){
    int i,num[n];
    for(i=0;i<n;i++){
        printf("Digite o %i numero",i+1);
        scanf("%i",&num[i]);
    }
 return num;
}

int main(void){
    int n;
    printf("quantos numeros voce vai usar no mdc?");
    scanf("%i",&n);
    int num = dist(n);
    int maior = bigger(num,n);
    printf("maior = %d",maior);
return 0;

}
