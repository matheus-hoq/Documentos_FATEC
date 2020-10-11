#include <stdio.h>
#include <locale.h>

main(){
	int i,c,n,op,f;
	setlocale(LC_ALL,"");
	for(i=1;i<=20;i++){
		printf("\n\n--- Sequência %i ---\n",i);
		printf("\nNúmero: ");
		scanf("%i",&n);
		printf("Operação: ");
		scanf("%i",&op);
		if(op==1){
			if(n%2==0)
				printf("\nPar");
			else
				printf("\nÍmpar");
		}
		if(op==2){
			for(c=1;c<n;c++){
				if(n%c==0)
				printf("%i,",c);
			}
		}
		if(op==3){
			f=1;
			for(c=1;c<=n;c++)
				f*=c;
			printf("Fatorial %i = %i",n,f);
		}
	}
}
