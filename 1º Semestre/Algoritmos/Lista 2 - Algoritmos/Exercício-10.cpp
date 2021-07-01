#include <stdio.h>
#include <locale.h>

main(){
 
    float peso;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o peso da peça: ");
	scanf("%f",&peso);
	
	if(peso>50){
		printf("\nSerá aproveitado %.1f kg da peça.",peso*0.85);
	}
	else if(peso<=50 && peso>20){
		printf("\nSerá aproveitado %.1f kg da peça.",peso*0.60);
	}
	else if(peso<=20 && peso>10){
		printf("\nSerá aproveitado %.1f kg da peça.",peso*0.30);
	}
	else if(peso<=10){
		printf("\nA peça não será aproveitada.");
	}

}


