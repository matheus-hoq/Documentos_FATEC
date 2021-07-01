#include <stdio.h>
#include <locale.h>

main(){
	
	
	
	float cdf,pd,imp,vdv;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira o valor do carro (em reais): ");
	scanf("%f",&cdf);
	
	pd=(cdf*0.30);
	
	printf("\n\n=========================================");
	
	printf("\n\nPorcentagem do distribuidor: %.2f\n",pd);
	
	imp=(cdf*0.23);
	printf("\n\nImpostos: %.2f\n\n",imp);
	
	vdv=(cdf+pd+imp);
	
	printf("\nO valor total do veículo: %.2f\n\n",vdv);
	
	printf("\n=========================================");
	

}
