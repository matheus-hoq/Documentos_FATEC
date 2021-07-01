#include <stdio.h>
#include <locale.h>
main(){

	int c,n,qd=0,qf=0;

	setlocale(LC_ALL,"");
	for(c=1;c<=10;c++){
		printf("Valor %i: ",c);
		scanf("%i",&n);
		if(n>=10 && n<=20)
		qd++;
		else
		qf++;
	}
	printf("\n Quantidade dentro do intervalo: %i\n",qd);
	printf("\n Quantidade fora do intervalo: %i\n",qf);
}


