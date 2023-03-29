#include<stdio.h>
#include<stdlib.h>


int main(){

	int num;
	
	printf("Informe o numero\n");
	scanf("%d",&num);

	printf("A sequencia e: ");
	printf("%d/",num-2);
	printf("%d/",num-1);
	printf("%d/",num-0);
	printf("%d/",num+1);
	printf("%d\n",num+2);


	system("pause");
	return 0;
}


