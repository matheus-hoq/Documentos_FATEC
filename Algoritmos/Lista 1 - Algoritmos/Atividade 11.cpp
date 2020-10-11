#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a,b,c;
	
	printf("Digite a distancia: ");
	scanf("%f", &a);
	printf("Digite a velocidade: ");
	scanf("%f", &b);
	
	c=a/b;
	
	printf("\nO tempo medio em horas: %.2f\n\n",c);
}
