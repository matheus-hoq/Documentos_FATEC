#include <stdio.h>
#include <locale.h>
main(){
	
	int n, c=1;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Número: ");
	scanf("%i",&n);
	while(c<=10){
		printf("\n%2i x %2i = %2i",n,c,n*c);
		c++;
	}
	printf("\n\n");
	
}
	

