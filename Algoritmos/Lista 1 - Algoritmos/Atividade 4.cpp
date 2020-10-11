#include <stdio.h>
#include <stdlib.h>
main(){
	float a,b,c;
	printf("Digite o valor guardado no cofre: ");
	scanf("%f",&a);
	printf("Digite a cotacao do dolar: ");
	scanf("%f",&b);
	c=(a*b);
	printf("\nValor em reais: %.2f\n\n",c);
	printf("\nRes. %.2f * %.2f = %.2f\n\n",a,b,c);
}
