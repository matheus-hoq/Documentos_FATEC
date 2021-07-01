#include <stdio.h>
#include <locale.h>

main (){
	int n;
	setlocale(LC_ALL,"Portuguese");
	printf("Número: ");
	scanf("%i",&n);
	if(n>0)
		printf("\nPositivo\n");
	else if(n==0)
	    printf("\nZero\n");
	else 
	    printf("\nNegativo\n");	 
		
		
	}



