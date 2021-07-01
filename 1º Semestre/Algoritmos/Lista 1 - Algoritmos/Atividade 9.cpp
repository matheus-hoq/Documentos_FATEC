#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a,b,c,d;
	printf("Digite o peso da pessoa: ");
	scanf("%f", &a);
	printf("Digite a altura da pessoa: ");
	scanf("%f", &b);	
	c=(b*b);
	d=a/c;
	printf("\nO IMC da pessoa e: %f\n\n", d);
	
}

