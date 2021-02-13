#include <stdio.h>

#define MAX 100
int main(void) {
    char maria[MAX+1];
    int i,minus,maius,dig,esp,simbols;
    minus=0;
    maius=0;
    dig=0;
    esp=0;
    simbols=0;
    fgets(maria, sizeof(maria),stdin);
    dig = strlen(maria);
    for(i = 0; i < dig-1; i++) {
        if(islower(maria[i])) {
            minus++;
        } else if(isupper(maria[i])) {
            maius++;
        } else if(isspace(maria[i])) {
            esp++;
        } else if(ispunct(maria[i])) {
            simbols++;
        }
    }
    printf("\nMinusculos: %i , Maiusculos: %i,espacos: %i,simbolos:%i,digitos: %i\n",minus,maius,esp,simbols,dig-1);
    return 0;
}
