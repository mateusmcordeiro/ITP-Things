#include <stdio.h>
#define MAX 100
int main(void){
char cadeia1[MAX+1];
char cadeia2[MAX+1];
fgets(cadeia1, sizeof(cadeia1),stdin);
fgets(cadeia2, sizeof(cadeia2),stdin);

strcat(cadeia1, cadeia2);
puts(cadeia1);

return 0;
}
