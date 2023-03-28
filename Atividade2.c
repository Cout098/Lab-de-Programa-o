#include<stdio.h>

int main (){
	float salario_fixo,valor_vendas, salario_total;
	
	printf("Digite o valor do salario fixo: ");
	scanf("%f", &salario_fixo);
	printf("Digite o valor de todas as vendas: ");
	scanf("%f", &valor_vendas);
	
	salario_total= salario_fixo + (valor_vendas * 0.07);
	
	printf("O salario liquido do colaborador e: %.2f\n", salario_total);
	
	return 0;
}
