#include <stdio.h>
#include <locale.h>

main(){
	
	int n,qp=0,qi=0,sp=0;
	setlocale(LC_ALL,"");
	do{
		printf("Valor: ");
		scanf("%i",&n);
		if(n%2==0){
			sp+=n;
			qp++;
		} else
		qi++;
	}while(n!=0);
	
	printf("\nQuantidade de pares: %i",--qp);
	printf("\nQuantidade de ímpares: %i",qi);
	printf("\nMédia dos pares: %.2f\n",(float)sp/qp);
}
