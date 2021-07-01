#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	float f,c;
	
	printf("Digite a temperatura em Fahrenheit: ");
	setlocale(LC_ALL,"Portuguese");
	scanf("%f", &f);
	c=(f-32)/1.8;
	
	printf("\nA temperatura em celsius é: %.2f\n\n",c);
	
	
	
}
