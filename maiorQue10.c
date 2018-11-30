#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n;

    printf("Digite um número: ");
    scanf("%f", & n);

    if(n > 10){
        printf("\nÉ MAIOR QUE 10!\n");
    }else{
        printf("\nNÃO É MAIOR QUE 10!\n");
    }

}
