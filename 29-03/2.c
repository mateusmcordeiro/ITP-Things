#include <stdio.h>

#include <math.h>


int mdc(int maior , int num[] , int n){
    int resto[n],i;
    for(i=0;i<n-1;i++){
            resto[i] = num[i]%maior;
    }

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

int tiraMaior(int num[],int n,int maior){
    int newNum[n-1];
    bool achou = false;
    for(i=0;i<n;i++){
        if ((maior != num[i])&&(achou == false)){
            newNum[i] = num[i];
            achou = false;
        }else{
            newNum[i-1] = num[i];
            achou = true;
        }
    }
    return newNum;
}

int dist(int n){
    int i,num[n];
    for(i=0;i<n;i++){
        printf("Digite o %iº numero",i+1);
        scanf("%i",&num[i]);
    }
 return num;
}

int main(void){
    int n;
    printf("quantos numeros você vai usar no mdc?");
    scanf("%i",&n);
    int num = dist(n);
    int maior = bigger(num,n);
    int newNum = tiraMaior(num,n,maior);
    int mdc = mdc(maior,newNum,n);
    printf("maior = %d",maior);
return 0;

}
