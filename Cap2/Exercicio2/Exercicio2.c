#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que desenhe uma tela de abertura com a logomarca
da empresa ACME (usar caracteres da Tabela ASCII)e, depois, as opções de 
operações administrativas que o usuario pode realizar.*/

int main() {
	
	int op;
	
	printf("________________________________\n");
	printf("\t %c %c %c %c%c\n",0101,0103,0115,0105,0251);
	printf("________________________________\n");
	
	printf(" Qual seu personagem Favorito ?\n");
	printf("\n 1 - Papa-Leguas  \n 2 - Coiote \n 3 - Pernalonga \n 4 - Patolino\n\n Digite um Numero: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Papa-Leguas  \n");
			printf("_________________________________________\n");
			break;
			
		case 2:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Coiote  \n");
			printf("_________________________________________\n");
			break;
			
		case 3:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Pernalonga  \n");
			printf("_________________________________________\n");
			break;
			
		case 4:
			system("cls");
			printf("_________________________________________\n");
			printf("\t\t Patolino  \n");
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
