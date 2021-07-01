#include <stdio.h>
#include <locale.h>
main(){

	int np, tp, tpa, ta=0, i;

	setlocale(LC_ALL,"Portuguese");

	printf("Número de pessoas: ");
	scanf("%i",&np);
	for(i=1;i<=np;i++){
		printf("Tempo %i: ",i);
		scanf("%i",&tp);
		if(i==1 || tpa+10<tp)
			ta+=10;
		else
			ta+=(tp-tpa);
		tpa=tp;
	}
	printf("\n\nTempo ativo: %i\n",ta);
	
}



