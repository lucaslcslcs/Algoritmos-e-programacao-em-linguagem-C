#include <stdio.h>
#include <stdlib.h>


int main() {
	float larg,comp,soma;
	
	printf("-------------------\n");
	printf(" Medida de Area\n");
	printf("-------------------\n\n");
	
	printf("Informe a Largura: ");
	scanf("%f",&larg);
	
	printf("Informe o Comprimento: ");
	scanf("%f",&comp);
	
	soma=(larg*comp);
	
	system("cls");
	printf("-------------------\n");
	printf("Area = %2.f m2\n",soma);
	printf("-------------------\n");
	system("pause");
	
	
	return 0;
}
