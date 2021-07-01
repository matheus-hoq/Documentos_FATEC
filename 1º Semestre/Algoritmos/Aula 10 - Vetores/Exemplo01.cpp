#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main(){
	srand(time(NULL));
	int v[10], i;	
	setlocale(LC_ALL,"");
	for(i=0;i<10;i++){
		v[i]=rand()%100;
		printf("V[%i]=%i\n",i,v[i]);
	}
	printf("\n\nExibir índices pares\n\n");
	for(i=0;i<10;i+=2){
		printf("V[%i]=%i\n",i,v[i]);
	}
	printf("\n\nNúmeros pares\n\n");
	for(i=0;i<10;i++){
		if(v[i]%2==0)
		printf("V[%i]=%i\n",i,v[i]);
	}
}

