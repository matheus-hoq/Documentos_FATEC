#include <stdio.h>
#include <locale.h>

main(){

    char imp;
    float preco;

	setlocale(LC_ALL,"Portuguese");
	printf("Limpeza - L, Alimentação - A, Vestuário - v");
	printf("\n\nTipo do produto: ");
	scanf(" %c",&imp);
	printf("Valor do produto: ");
	scanf("%f",&preco);
	
	switch(imp){
		
		case 'l':
		case 'L':
		
		if(preco<100){
			printf("\nO imposto do produto é: %.2f",preco*0.05);
			break;
		}
		else if(preco>=100 && preco<=500){
			printf("\nO imposto do produto é: %.2f",preco*0.04);
			break;
		}
		else if(preco>500){
			printf("\nO imposto do produto é: %.2f",preco*0.02);
			break;
		}
		
		case 'a':
		case 'A':
		
		if(preco<100){
			printf("\nO imposto do produto é: %.2f",preco*0.03);
			break;
		}
		else if(preco>=100 && preco<=500){
			printf("\nO imposto do produto é: %.2f",preco*0.02);
			break;
		}
		else if(preco>500){
			printf("\nO imposto do produto é: %.2f",preco*0.01);
			break;
		}
		
		case 'V':
		case 'v':
		
		if(preco<100){
			printf("\nO imposto do produto é: %.2f",preco*0.07);
			break;
		}
		else if(preco>=100 && preco<=500){
			printf("\nO imposto do produto é: %.2f",preco*0.06);
			break;
		}
		else if(preco>500){
			printf("\nO imposto do produto é: %.2f",preco*0.04);
			break;
		}
		default:
			printf("\nTipo inválido");
			break;
	}

}


