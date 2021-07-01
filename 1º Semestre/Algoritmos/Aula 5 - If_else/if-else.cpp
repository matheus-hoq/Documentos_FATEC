#include <stdio.h>

main (){
	float n1,n2,m;
	printf("Nota 1: ");
	scanf("%f",&n1);
	printf("\nNota 2: ");
	scanf("%f",&n2);
	m=(n1+n2)/2;
	printf("\nMédia: %.1f\n",m);
	if(m>=6){
		printf("\nAluno aprovado\n");
	} else {
		printf("\nAluno reprovado\n");
	}
}


