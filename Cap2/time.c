#include <stdio.h>
#include <stdlib.h>


int main() {
	int numero;
	char op;
	
	op='s';
	while(op =='s'){

			
	printf("-------------------------------\n");
	printf(" Escolha o numero do seu Time. \n");
	printf("-------------------------------\n\n");
	printf(" 1 Flamengo\n 2 Fluminense\n 3 Corinthias\n 4 Sao Paulo\n 5 Vasco\n 6 Palmeiras\n\n");
	printf("-------------------------------\n");
	printf("Insira o Numero: \n");
	printf("-------------------------------\n");
	
	scanf("%d",&numero);
	
	switch(numero){
		case 1:
			system("cls");
			printf("-------------------------------\n");
			printf("Parabens voce escolheu o Flamengo !");
			break;
			
		case 2:
			system("cls");
			printf("-------------------------------\n");
			printf("Voce escolheu o Fluminese !");
			break;
			
		case 3:
			system("cls");
			printf("-------------------------------\n");
			printf("Voce escolheu o Corinthias !");
			break;
		
		case 4:
			system("cls");
			printf("-------------------------------\n");
			printf("Voce escolheu o Sao Paulo !");
			break;
			
		case 5:
			system("cls");
			printf("-------------------------------\n");
			printf("Voce escolheu o Vasco !\nQue mal gosto !");
			break;
			
		case 6:
			system("cls");
			printf("-------------------------------\n");
			printf("Voce escolheu o Palmeiras !");
			break;
			
		
		default:
			system("cls");
			printf("-------------------------------\n");
			printf("\nNumero Invalido.\n");
	}
	
		
		printf("\n-------------------------------\n");
		printf("Deseja continuar(S ou N): \n");
		printf("-------------------------------\n");
		scanf(" %c",&op);
		system("cls");
		
		
		
	}
	return 0;
}
