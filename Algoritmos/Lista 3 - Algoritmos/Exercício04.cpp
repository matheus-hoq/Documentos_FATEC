#include <stdio.h>
#include <locale.h>
main(){
	
	int n=1,sn=0;
	setlocale(LC_ALL,"Portuguese");
	while(n!=0){
		
		printf("Valor: ");
		scanf("%i",&n);	
		if(n<0){
			sn+=n;
			
		}
  	}
  	printf("Soma negativos: %i\n",sn);
}
	

