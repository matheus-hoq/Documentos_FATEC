#include <stdio.h>
#include <locale.h>

main(){

    char tf;
    float peso;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira 'a' para abacaxi ou 'g' para goiaba");
	printf("\n\nInsira o tipo da fruta: ");
	scanf(" %c",&tf);
	printf("Insira o peso: ");
	scanf("%f",&peso);
	
	switch(tf){
		
		case 'a':
	   	case 'A':
		
		if(peso<=2){
				printf("Valor a ser pago: %.2f",peso*1.90);
				break;
			}
			else if(peso>2 && peso<=5){
				printf("Valor a ser pago: %.2f",peso*1.80);
				break;
			}
			else if(peso>5 && peso<=8){
				printf("Valor a ser pago: %.2f",peso*1.60);
				break;
			}
			else if(peso>8){
				printf("Valor a ser pago: %.2f",(peso*1.60)*0.90);
				break;
			}
			
        case 'g':
	   	case 'G':
			
			if(peso<=2){
				printf("Valor a ser pago: %.2f",peso*2.50);
				break;
			}
			else if(peso>2 && peso<=5){
				printf("Valor a ser pago: %.2f",peso*2.40);
				break;
			}
			else if(peso>5 && peso<=8){
				printf("Valor a ser pago: %.2f",peso*2.20);
				break;
			}
			else if(peso>8){
				printf("Valor a ser pago: %.2f",(peso*2.20)*0.90);
				break;
	     	}
	
}
}
