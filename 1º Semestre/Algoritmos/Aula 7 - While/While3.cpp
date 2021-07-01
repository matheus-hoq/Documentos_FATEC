#include <stdio.h>
#include <locale.h>
main(){
	
	int n=1, tot=0, c=0;
	setlocale(LC_ALL,"");
	while(n>0){
		printf("Número: ");
		scanf("%i",&n);
		tot=tot+n; // tot+=n
		c++;
	}
	printf("\nTot.: %i\n",tot);
	printf("Quantidade de repetições: %i\n",c);
}
