#include <stdio.h>
#include <locale.h>

main(){

	float cf, cd, imp, vcc;

	setlocale(LC_ALL,"Portuguese");
	printf("Custo de fábrica: ");
	scanf("%f",&cf);
	
	cd=cf*0.30;
	imp=cf*0.23;
	
	printf("==================================");
	printf("\n\nCusto do distribuidor: %.2f\n",cd);
	printf("\nValor dos impostos: %.2f\n",imp);
	printf("\nValor total do carro: %.2f\n",cf+cd+imp);

}


