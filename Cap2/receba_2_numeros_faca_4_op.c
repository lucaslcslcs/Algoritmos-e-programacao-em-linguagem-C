#include <stdio.h>
#include <stdlib.h>


int main() {
	float n1,n2,adc,sub,mul;
	double div;
	
	printf("-----------------\n");
	printf("4 Op Aritmetica \n");
	printf("-----------------\n");
	
	printf("Informe N1: ");
	scanf("%f",&n1);
	
	printf("Informe N2: ");
	scanf("%f",&n2);
	system("cls");
	
	adc=(n1+n2);
	sub=(n1-n2);
	mul=(n1*n2);
	div=(n1/n2);
	
	printf("--------------------\n");
	printf("Valor Adicao: %2.f \nValor Subtracao: %2.f \nValor Multiplicacao: %2.f \nValor Divisao: %.3lf \n",adc,sub,mul,div);
	printf("--------------------\n");
	
	return 0;
}
