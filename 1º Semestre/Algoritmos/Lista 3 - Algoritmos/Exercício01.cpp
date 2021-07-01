#include <stdio.h>
#include <locale.h>
main(){
	
	int n,c=1,qn=0;
	setlocale(LC_ALL,"Portuguese");

	while(c<=5){
			printf("Digite o valor: ",c);
	        scanf("%i",&n);
	        if(n<0)
	        qn++;
	        c++;
	    }
	    printf("\nQuantidade de negativos: %i\n",qn);
  	}
	

