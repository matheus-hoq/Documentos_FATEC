#include <stdio.h>
#include <locale.h>

main(){
	
	int n, c=1, f=1;	
	setlocale(LC_ALL,"Portuguese");
	printf("Valor: ");
	scanf("%i",&n);
	while(c<=n){
		f*=c;
		c++;
	}
	printf("\nFatorial %i = %i\n",n,f);
}
