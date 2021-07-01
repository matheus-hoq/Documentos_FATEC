#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	
	float preco,codpag;


	setlocale(LC_ALL,"Portuguese");
	printf("Insira o preço da etiqueta: ");
	scanf("%f",&preco);
	printf("Insira o código de pagamento (1,2,3,4): ");
	scanf("%f",&codpag);
	
	if(codpag==1){
		printf("\n\nPreço a ser pago: %.2f: \n\n",preco*0.90);
	}
		
	else if(codpag==2){
		printf("\n\nPreço a ser pago: %.2f: \n\n",preco*0.95);
	}
		
	else if(codpag==3){
		printf("\n\nPreço a ser pago: %.2f: \n\n",preco);
	}
		
	else if(codpag==4){
		printf("\n\nPreço a ser pago: %.2f: \n\n",preco*1.10);
	}
	
	
	
	
	
}

