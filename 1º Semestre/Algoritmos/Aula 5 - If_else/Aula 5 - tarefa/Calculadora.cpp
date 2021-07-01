#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	float n1,n2,res;
	char op;
	
	setlocale(LC_ALL,"Portuguese");	
	printf("Digite o primeiro valor: ");
	scanf("%f",&n1);
	printf("\nOperador: ");
	scanf(" %c",&op);
	printf("\nDigite o segundo valor: ");
	scanf("%f",&n2);
	
	if (op=='+'){
		printf("\nResultado: %.2f\n\n",n1+n2);
	}
	else if(op=='-'){
		printf("\nResultado: %.2f\n\n",n1-n2);
	}
	else if(op=='*'|| op=='x'){
		printf("\nResultado: %.2f\n\n",n1*n2);
	}
	else if(op=='/'){
		printf("\nResultado: %.2f\n\n",n1/n2);
	}	
	else{
		printf("\nOperador inválido\n");
	}
}

