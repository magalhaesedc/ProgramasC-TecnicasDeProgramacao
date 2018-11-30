#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%f", & base);
    printf("Digite o valor da altura: ");
    scanf("%f", & altura);

    area = (base * altura);

    printf("\nÁrea: %.2f\n", area);
}
