#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int A, B, aux;

    A = 10;
    B = 20;

    aux = A;
    A = B;
    B = aux;

    printf("Variável A: %d\n", A);
    printf("Variável B: %d\n", B);
}
