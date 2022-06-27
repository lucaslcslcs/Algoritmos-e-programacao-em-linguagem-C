#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1,soma;
	
	printf("-----------------\n");
	printf(" Dobro do Numero\n");
	printf("-----------------\n");
	
	printf("Informe o Numero: \n");
	scanf("%d",&n1);
	
	soma=(n1*2);
	
	system("cls");
	printf("-----------------\n");
	printf("Dobro = %d\n",soma);
	printf("-----------------\n");

	system("pause");

	return 0;
}
