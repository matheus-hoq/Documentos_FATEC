#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int v[10], i, x, qma=0, qme=0;
	for (i=0;i<=9;i++){
		v[i]=rand()%100+1;
		printf("V[%i] = %i\n",i,v[i]);
	}
	printf("\nValor x: ");
	scanf("%i",&x);
	for(i=0;i<=9;i++){
		if(v[i]==x)
			printf("X na posição %i\n",i);
		if(v[i]>x)
			qma++;
		if(v[i]<x)
			qme++;
	}
	printf("\nQuantidade > x: %i",qma);
	printf("\nQuantidade < x: %i\n",qme);
}
