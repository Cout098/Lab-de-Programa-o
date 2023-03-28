#include<stdio.h>
#include<math.h>
int main (){
	float hipotenusa, cateto1, cateto2;
	
	printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);
    
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
    
    printf("A hipotenusa do triangulo retangulo e: %.2f\n", hipotenusa);

    
    return 0;
}
