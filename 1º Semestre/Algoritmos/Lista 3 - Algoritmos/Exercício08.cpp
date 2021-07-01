#include <stdio.h>
#include <locale.h>
main(){
	
	int c=1, n, ma, me, tot=0;
	
	setlocale(LC_ALL,"Portuguese");
	while(c<=5){
		printf("Valor %i: ",c);
		scanf("%i",&n);
		tot+=n; 
		if(c==1){
			ma=n;
			me=n;
		}		
		if(n>ma)
			ma=n;
		if(n<me)
			me=n;	
		c++;
	}
	printf("\nMédia: %.1f\n",(float)tot/--c);
	printf("Maior: %i\n",ma);
	printf("Menor: %i\n",me);
}
	

