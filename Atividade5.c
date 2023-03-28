#include <stdio.h>

int main(){
	float km_inicial, km_final,combustivel,media;
	
	printf("Digite a quilometragem inicial: \n");
	scanf("%f", &km_inicial);
	
	printf("Digite a quilometragem final: \n");
	scanf("%f", &km_final);
	
	printf("Informe a quantidade de combustiuvel gasto: \n");
	scanf( "%f", &combustivel);
	
	media = (km_final - km_inicial) /combustivel;
	
	printf("Seu consumo medio, em quilometros por litro, e: %.2f\n", media);
	
	return 0;
}
