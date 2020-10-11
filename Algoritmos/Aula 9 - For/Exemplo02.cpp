#include <stdio.h>
#include <locale.h>
main(){

	int n, c, qd=0;
	
	setlocale(LC_ALL,"");
	
	printf("Número: ");
	scanf("%i",&n);
	for(c=1;c<=n;c++){
		if(n%c==0)
		qd++;
	}
	printf("Quantidade de divisores %i = %i\n",n,qd);
}


