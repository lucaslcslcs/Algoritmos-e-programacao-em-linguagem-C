#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que apresente um menu de opções para a 
escolha do time de futebol de alguem*/

int main() {
	
	int time;
	
	printf("_________________________________________\n");
	printf("\tEscolha um Time de Futebol:  \n");
	printf("_________________________________________\n\n");
	printf(" Time 1\n Time 2\n Time 3\n Time 4\n\n Digite um Numero: ");
	scanf("%d",&time);
	
	switch(time){
		case 1:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Time 1  \n");
			printf("_________________________________________\n");
			break;
			
		case 2:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Time 2  \n");
			printf("_________________________________________\n");
			break;
			
		case 3:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Time 3  \n");
			printf("_________________________________________\n");
			break;
			
		case 4:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Time 4  \n");
			printf("_________________________________________\n");
			break;
			default:
					system("cls");
					printf("_________________________________________\n");
					printf("\t   NUMERO INVALIDO  \n");
					printf("_________________________________________\n");
	}
	system("pause");
	
	return 0;
}
