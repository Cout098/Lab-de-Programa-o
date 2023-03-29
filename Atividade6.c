#include<stdio.h>
#include<stdlib.h>

int main(){

	int larguraC1, comprimentoC1, areaC1;
	int larguraC2, comprimentoC2, areaC2;
	int larguraC3, comprimentoC3, areaC3;
	int larguraC4, comprimentoC4, areaC4;
	int area_total;

	printf("Informe a largura do comodo 1\n");
	scanf("%d",&larguraC1);
	printf("Informe o comprimento do comodo 1\n");
	scanf("%d",&comprimentoC1);
	
	printf("Informe a largura do comodo 2\n");
	scanf("%d",&larguraC2);
	printf("Informe o comprimento do comodo 2\n");
	scanf("%d",&comprimentoC2);
	
	printf("Informe a largura do comodo 3\n");
	scanf("%d",&larguraC3);
	printf("Informe o comprimento do comodo 3\n");
	scanf("%d",&comprimentoC3);
	
	printf("Informe a largura do comodo 4\n");
	scanf("%d",&larguraC4);
	printf("Informe o comprimento do comodo 4\n");
	scanf("%d",&comprimentoC4);
	
	areaC1=larguraC1*comprimentoC1;
	areaC2=larguraC2*comprimentoC2;
	areaC3=larguraC3*comprimentoC3;
	areaC4=larguraC4*comprimentoC4;

	area_total= areaC1+areaC2+areaC3+areaC4;
	
	printf("A area total da casa e:%d\n",area_total);


	system("pause");
	return 0;
}


