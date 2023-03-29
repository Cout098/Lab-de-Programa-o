#include<stdio.h>
#include<stdlib.h>


int main(){

	float salario,gastos,sobra,meta;
	float meses,anos;
	
	printf("Informe seu salario:");
	scanf("%f",&salario);
	printf("Informe o valor de suas despesas mensais:");
	scanf("%f",&gastos);
	printf("Informe quanto voce pretende juntar:");
	scanf("%f",&meta);
	
	sobra=salario-gastos;
	meses=meta/sobra;
	anos=meses/12;
	
printf("Voce precisa de %.2f meses ou %.2f anos para juntar essa quantia\n",meses,anos);



	system("pause");
	return 0;
}


