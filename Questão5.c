#include <stdio.h>
    #include <string.h>

     int main(){

    char palavra[10];
    char palavra2[10];
    int i;
    int k;
    int len;

    printf("Introduza uma string: \n");
    scanf("%[^\n]", palavra);
    len = strlen(palavra);

    for( i = 0, k = len - 1 ; i <= len; i++, k--)
    {
        palavra2[k] = palavra[i];
    }
    palavra2[len]= '\0';
    printf("\nString invertida: %s", palavra2);

}