#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"");
	int sair = 0;
	char resposta;
	int opcao;
	
	do{
		system("cls");
		printf("Bem Vindo ao Sistema BSI\n\n");
		printf("Escolha uma op��o para continuar\n");
		printf("1 - Primeira\n");
		printf("2 - Segunda\n");
		printf("3 - Terceira\n");
		printf("4 - sair\n");
		
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1 :
				system("cls");
				printf("Voc� escolheu a PRIMEIRA op��o!\n\n");
				break;
			case 2 :
				system("cls");
				printf("Voc� escolheu a SEGUNDA op��o!\n\n");
				break;
			case 3 :
				system("cls");
				printf("Voc� escolheu a TERCEIRA op��o!\n\n");
				break;
			case 4 :
				sair = 1;
				break;
			default:
				system("cls");
				printf("Op��o Inv�lida!\n\n");
				break;
		}
		
		if(sair == 1){
			break;
		}
		
		printf("Deseja Voltar? (S-sim | N-n�o) ");
		fflush(stdin);
		resposta = getchar();
		
	}while (resposta == 's' || resposta == 'S');
	
	system("cls");
	printf("**PROGRAMA FINALIZADO**\n");
	system("pause");
	
}
