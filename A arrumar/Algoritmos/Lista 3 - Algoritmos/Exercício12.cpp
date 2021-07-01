#include <stdio.h>
#include <locale.h>

main(){
	
	int n=1, c=1, f=1, qc;	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Quantidade de cálculos: ");
	scanf("%i",&qc);
	while(qc>0){
		printf("Valor: ");
		scanf("%i",&n);
		c=1;
		f=1;
		while(c<=n){
			f*=c;
			c++;
	}
	printf("\nFatorial %i = %i\n",n,f);
	qc--;
}
}
