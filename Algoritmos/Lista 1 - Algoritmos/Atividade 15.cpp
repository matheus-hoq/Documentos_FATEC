#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	float a,b,c,d;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Número de cigarros por dia: ");
	scanf("%f",&a);
	printf("Número de anos que fuma: ");
	scanf("%f",&b);
	printf("Preço da carteira: ");
	scanf("%f",&c);
	
	d=b*365*a/20*c;
	printf("\nDinheiro gasto: %.2f\n\n",d);
}
