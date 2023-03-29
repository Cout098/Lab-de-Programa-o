#include<stdio.h>
#include<stdlib.h>


int main(){

	float milimetro, polegada;
	printf("Informe a quantidade de chuva em polegadas\n");
	scanf("%f",&polegada);

	milimetro=polegada*25.4;
	
	printf("Em milimetros: %f\n",milimetro);


	system("pause");
	return 0;
}


