#include <stdio.h>
#define MAX 100

int main(void){

char cadeia[MAX+1];
int index;
fgets(cadeia, sizeof(cadeia),stdin);
char c = 'f';
char *ptr = strchr(cadeia,c);
index=ptr-cadeia;
printf("Primeira ocorrencia de '%c' esta na posicao %i",c,index);

}
