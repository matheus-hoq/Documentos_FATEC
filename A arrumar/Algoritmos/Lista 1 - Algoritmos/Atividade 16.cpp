#include <stdio.h>
#include <locale.h>

main(){
	float a,b,c,d,e;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do salário mínimo: ");
	scanf("%f",&a);
	printf("\nQuantidade de quilowatts consumida: ");
	scanf("%f",&b);
	c=a*0.005;
	printf("\n===================================================");
	printf("\n\nValor de cada quilowatt (em R$): %.2f\n\n",c);
	d=b*c;
	printf("\nValor a ser pago por essa residência: %.2f\n\n",d);
	printf("\nValor a ser pago com o desconto: %.2f\n\n",d*0.85);
	printf("\n===================================================");
}
