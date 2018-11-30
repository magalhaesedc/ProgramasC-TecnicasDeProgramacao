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
		printf("Escolha uma opção para continuar\n");
		printf("1 - Primeira\n");
		printf("2 - Segunda\n");
		printf("3 - Terceira\n");
		printf("4 - sair\n");
		
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1 :
				system("cls");
				printf("Você escolheu a PRIMEIRA opção!\n\n");
				break;
			case 2 :
				system("cls");
				printf("Você escolheu a SEGUNDA opção!\n\n");
				break;
			case 3 :
				system("cls");
				printf("Você escolheu a TERCEIRA opção!\n\n");
				break;
			case 4 :
				sair = 1;
				break;
			default:
				system("cls");
				printf("Opção Inválida!\n\n");
				break;
		}
		
		if(sair == 1){
			break;
		}
		
		printf("Deseja Voltar? (S-sim | N-não) ");
		fflush(stdin);
		resposta = getchar();
		
	}while (resposta == 's' || resposta == 'S');
	
	system("cls");
	printf("**PROGRAMA FINALIZADO**\n");
	system("pause");
	
}
