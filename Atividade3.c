#include <stdio.h>

int main(){
	float peso_total;
	
	printf("Qual o peso do bolo em quilos: \n");
	scanf("%f",&peso_total);
	
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.1)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.3)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.1)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.2)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.15)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.1)*1000);
	printf("A quantidade de acucar, em gramas, sera: %.2f\n", (peso_total*0.05)*1000);
		
	return 0;

}
