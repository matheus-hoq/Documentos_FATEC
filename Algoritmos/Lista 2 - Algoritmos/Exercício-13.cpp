#include <stdio.h>
#include <locale.h>

main(){

    char tc;
    float lts;
    
	setlocale(LC_ALL,"Portuguese");
    printf("Quantos litros foram vendidos: ");
    scanf("%f",&lts);
    printf("Insira o tipo do combustível: ");
    scanf(" %c",&tc);
    
    
    switch(tc){
    	
    	case 'a':
        case 'A':
        	
        	if(lts<=15){
        		printf("\nValor a ser pago: %.2f",lts*2);
        		break;
			}
			
			else if(lts>15 && lts <=30){
        		printf("\nValor a ser pago: %.2f",lts*1.95);
        		break;
			}
			
			else if(lts>30){
        		printf("\nValor a ser pago: %.2f",lts*1.80);
        		break;
			}
			
			
		case 'g':
		case 'G':
			
			if(lts<=15){
        		printf("\nValor a ser pago: %.2f",lts*2.90);
        		break;
			}
			
			else if(lts>15 && lts <=30){
        		printf("\nValor a ser pago: %.2f",lts*2.85);
        		break;
			}
			
			else if(lts>30){
        		printf("\nValor a ser pago: %.2f",lts*2.75);
        		break;
			}
			
			default: 
			printf("\nTipo inválido.");
			break;
	}
	}
