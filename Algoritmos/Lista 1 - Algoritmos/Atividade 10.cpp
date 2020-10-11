#include <stdio.h>
#include <stdlib.h>

main(){
	float a,b,c,d,e;
	printf("Digite o numero do vendedor: ");
	scanf("%f", &a);
	printf("Digite o total de vendas do mes: ");
	scanf("%f", &b);
	printf("Digite o salario fixo: ");
	scanf("%f", &c);
	
	d=b*c;
	e=d*1.05;
	
	printf("Vendedor: %.0f",a);
	
	printf("\nSalario a ser pago: %.2f\n\n",e);
	
}
