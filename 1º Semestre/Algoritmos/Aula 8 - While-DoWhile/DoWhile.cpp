#include <stdio.h>
#include <locale.h>

main(){
	
	int n,sn=0;
	setlocale(LC_ALL,"");
	do{
		printf("Número: ");
		scanf("%i",&n);
		if(n>0)
			sn+=n;
	}while (n!=0);
	printf("Soma positivos: %i\n",sn);
	
}
