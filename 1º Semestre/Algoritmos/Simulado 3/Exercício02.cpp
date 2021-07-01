#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	srand(time(NULL));
	int i, qd=0;
	float t[100], st=0, m;
	setlocale(LC_ALL,"");
	for(i=0;i<100;i++){
		t[i]=rand()%26+15;
		printf("Temperatura dia %i: %.f\n",i+1,t[i]);
		st+=t[i];
	}
	m=st/100; 
	printf("\nMédia %.2f\n",m);
	for(i=0;i<100;i++){
		if(t[i]<m)
		qd++;
	}
	printf("Quantidade de dias < média: %i\n",qd);
}

