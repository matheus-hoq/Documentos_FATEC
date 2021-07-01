#include <stdio.h>
#include <locale.h>

main(){

	int n1,n2;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o primeiro número: ");
	scanf("%i",&n1);
	printf("\nInsira o segundo número: ");
	scanf("%i",&n2);
	
	if(n1==n2){
		printf("\nNúmeros iguais");
	}
	else if(n1<n2){
		printf("\nNúmeros diferentes: %i %i",n1,n2);
	}
	else
		printf("\nNúmeros diferentes: %i %i",n2,n1);
		


}


