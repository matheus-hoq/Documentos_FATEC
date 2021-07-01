#include <stdio.h>
#include <locale.h>

main(){

    char op;
    float raio;

	setlocale(LC_ALL,"Portuguese");
	printf("1 - para calcular a área da circunferência");
	printf("\n\n2 - para calcular o perímetro da circunferência");
	printf("\n\nInsira o indicador da operação: ");
	scanf(" %c",&op);
	printf("Insira o raio da circunferência: ");
	scanf("%f",&raio);
	
	switch(op){
		
		case '1':
			printf("\nA área da circunferência é: %.2f",(raio*raio)*3.14159);
			break;
			
		case '2':
			printf("\nO perímetro da circunferência é: %.2f",2*3.14159*raio);
			break;
			
	    default:
	    	printf("o indicador de operação foi mal fornecido");
	    	break;
	
	}


}


