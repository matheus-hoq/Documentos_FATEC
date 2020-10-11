#include <stdio.h>
#include <locale.h>
main(){
	
	int c=1,n;
	setlocale(LC_ALL,"");
	printf("Quantidade de repetições: ");
	scanf("%i",&n);	
	while(c<=n){
		printf("%i Parabéns\n",c);
		c++;// c+=1 c=c+1
	}	
}
