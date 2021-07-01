#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d,e;
	printf("Digite o valor do 1º produto: ");
	scanf("%i",&a);
	printf("Digite o valor do 2º produto: ");
	scanf("%i",&b);
	printf("Digite o valor do 3º produto: ");
	scanf("%i",&c);
	d=(a+b+c);
	e=(a+b+c)/5;
	printf("\nValor total da compra: %i\n\n",d);
	printf("\nValor de cada prestacao: %i\n\n",e);
	
}

