#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salario, percentual, novoSalario;

    printf("Digite o valor do salário atual: ");
    scanf("%f", & salario);
    printf("Digite o valor do percentual de reajuste: ");
    scanf("%f", & percentual);

    novoSalario = (salario + (salario * (percentual / 100)));

    printf("\nSalário Reajustado: %.2f R$\n", novoSalario);
}
