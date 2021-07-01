#include <stdio.h>
#include <locale.h>


main(){
	
	float a,b,c;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o comprimento do lado A: ");
	scanf("%f",&a);
	printf("Insira o comprimento do lado B: ");
	scanf("%f",&b);
	printf("Insira o comprimento do lado C: ");
	scanf("%f",&c);
	
	if(a==b && b==c){
		printf("\nTriângulo equilátero");
	}
	
	else if(a/=b && b==c){
		printf("\nTriângulo isóscele");
	}
	
	else
		printf("\nTriângulo escaleno");
	}




