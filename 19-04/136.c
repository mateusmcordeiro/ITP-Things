#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char *frase = "Maria é linda, linda linda.";
    char *subfrase = "linda";

    int subfrase_len = strlen(subfrase);
    int count = 0;

    char *onde = frase;

    if(subfrase_len) {
        while ((onde = strstr(onde, subfrase))) {
            onde += subfrase_len;
            count++;
        }
    }

    printf("%i",count);
    return 0;
}
