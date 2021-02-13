#include <stdio.h>

#include <math.h>


int mdc(int a,int b) {
    int r = a%b;
    while(r!=0) {
        a = b;
        b = r;
        r = a%b;
    }
    return b;
}
int mdcmult(int n) {
    int num[n],i;
    for(i=0; i<n; i++) {
        printf("Digite o %i numero\n",i+1);
        scanf("%i",&num[i]);
    }
    int x = num[0];
    for(i=1; i<n; i++) {
        x = mdc(x,num[i]);
    }
    return x;
}
int main() {
    int n;
    printf("quantos numeros você vai usar no mdc?\n");
    scanf("%i",&n);
    int mdc = mdcmult(n);
    printf("mdc = %i",mdc);
    return 0;

}
