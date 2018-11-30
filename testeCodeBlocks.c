#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[2];
    //fgets(nome,40,stdin);
    scanf("%s",nome);
    fflush(stdin);
    printf("\n%s\n", nome);
    return 0;

}
