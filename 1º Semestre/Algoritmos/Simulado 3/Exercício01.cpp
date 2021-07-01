#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	int c;
	float p, mp=0, qma=0, qme=0;
	setlocale(LC_ALL,"");
	for(c=1;c<=5;c++){
		printf("Peso %i: ",c);
		scanf("%f",&p);
		if(p>mp)
			mp=p;
		if(p>=80)
			qma++;
		else
			qme++;
	}
	printf("\n>= 80kg: %.2f%%",qma/--c*100);
	printf("\n < 80kg: %.2f%%\n",qme/c*100);
	printf("\nMaior peso: %.1fkg\n",mp);
}

