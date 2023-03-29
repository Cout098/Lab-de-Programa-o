#include<stdio.h>
#include<stdlib.h>


int main(){

	float celsius, fahrenheit;
	printf("Informe uma temperatura em celsius\n");
	scanf("%f",&celsius);
	
	fahrenheit = celsius*1.8+32;
	
	printf("%.2f celsius e igual a %.2f fahrenheit\n",celsius, fahrenheit);




	system("pause");
	return 0;
}


