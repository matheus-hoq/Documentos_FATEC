#include <stdio.h>
#include <locale.h>
main(){
	
	int n,c=1,qn=0,d;
	setlocale(LC_ALL,"Portuguese");

	while(c<=5){
			printf("Digite o valor: ",c);
	        scanf("%i",&n);
	        if(n%3==0)
	        qn++;
	        c++;
	    }
	    printf("\nQuantidade de valores divisíveis por três: %i\n",qn);
  	}
	

