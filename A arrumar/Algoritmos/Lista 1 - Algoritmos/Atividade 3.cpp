#include <stdio.h>
#include <stdlib.h>
main(){
	float a,b,c;
	printf("Digite o saldo da aplicacao: ");
	scanf("%f",&a);
	b=a*1.075;
	printf("\nSaldo reajustado: %.2f\n\n",b);
}

