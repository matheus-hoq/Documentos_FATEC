#include <stdio.h>
main(){
	int s,d,h,m;
	
	printf("Total de segundos: ");
	scanf("%i",&s);
	d=s/86400;
	h=s%86400/3600; // % serve para indicar o resto da operação
	m=s%86400%3600/60;
	printf("\n%i dia(s)",d);
	printf("\n%i hora(s)",h);
	printf("\n%i minuto(s)",m);
	}
