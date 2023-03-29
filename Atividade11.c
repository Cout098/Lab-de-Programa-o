#include<stdio.h>
#include<stdlib.h>


int main(){

	float custoFinal, custoFabrica, precoDistribuidor, precoImposto;
	
	printf("Informe custo de fabrica\n");
	scanf("%f",&custoFabrica);

	precoImposto = (custoFabrica*45)/100;
	precoDistribuidor = (custoFabrica*12)/100;
	custoFinal = custoFabrica+precoImposto+precoDistribuidor;

	printf("O preco do carro para o consumidor e %.2f\n",custoFinal);


	system("pause");
	return 0;
}


