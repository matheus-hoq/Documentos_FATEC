#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d;
	printf("Lado do quadrado: ");
	scanf("%i", &a);
	b=a*4;
	printf("\nPerimetro: %i\n\n", b);
	c=a*a;
	printf("\nArea: %i\n\n", c);
	d=a*(2^1/2);
	printf("\nDiagonal: %i\n\n", d);
	
}

