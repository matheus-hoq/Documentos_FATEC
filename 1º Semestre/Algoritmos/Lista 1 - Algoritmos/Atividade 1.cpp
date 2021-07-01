#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c;
	printf("Digite a base  : ");
	scanf("%i",&a);
	printf("Digite a altura: ");
	scanf("%i",&b);
	c=(a*b)/2;
	printf("\nArea do triangulo: %i\n\n",c);
	printf("\nRes. (%i * %i)/2 = %i\n\n",a,b,c);
}

