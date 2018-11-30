#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define PI 3.14159
    float baseRet, altRet, raio, bMaiorTrap, bMenorTrap, altTrap;
    float areaRet, areaTrap, areaCirc;

    printf("Digite a base e a altura do retângulo: ");
    scanf("%f",&baseRet);
    scanf("%f",&altRet);
    printf("\n");

    printf("Digite a base maior, a base menor e a altura do trapézio: ");
    scanf("%f",&bMaiorTrap);
    scanf("%f",&bMenorTrap);
    scanf("%f",&altTrap);
    printf("\n");

    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);
    printf("\n");

        areaRet = (baseRet * altRet);
        areaTrap = (((bMaiorTrap+bMenorTrap)*altTrap)/2);
        areaCirc = (PI * pow(raio,2));

    printf("Área do retângulo: %.2f\n",areaRet);
    printf("Área do trapézio: %.2f\n",areaTrap);
    printf("Área do círculo: %.2f\n",areaCirc);
    printf("\n");
    printf("Área total: %.2f\n",areaCirc+areaRet+areaTrap);
}
