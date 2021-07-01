#include <stdio.h>
#include <locale.h>

main(){

	int x[5]={0,0,0,0,0},i;
	setlocale(LC_ALL,"");
	for(i=0;i<5;i++){
		printf("Valor posição %i: ",i);
		scanf("%i",&x[i]);
	}
	printf("\nVetor armazenado\n");
	for(i=0;i<5;i++){
		printf("X[%i] = %i\n",i,x[i]);
	}
}

