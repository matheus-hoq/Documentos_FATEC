#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d;
	printf("Ano de nascimento: ");
	scanf("%i",&a);
	printf("Ano atual: ");
	scanf("%i",&b);
	c=b-a;
	printf("\nA idade da pessoa sera: %i\n\n",c);
	d=2028-a;
	printf("\nEm 2028 a idade sera: %i\n\n",d);
	
}

