#include <stdio.h>
#include <locale.h>

main(){
	
    float pesopeixe;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Insira o peso: ");
	scanf("%f",&pesopeixe);
	
	
	if(pesopeixe<=50){
	   printf("Peso dentro do regulamentado");
}
    else{
    	printf("\n\nLimite excedido em %.0f quilos\n\n",pesopeixe-50);
    	printf("\n\nMulta a ser paga: %.2f\n\n",(pesopeixe-50)*4);
	}
	   
	   
		
	
}

