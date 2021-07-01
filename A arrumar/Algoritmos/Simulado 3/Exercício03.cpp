#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	srand(time(NULL));
	int i, j, a[15], b[15], qd;
	setlocale(LC_ALL,"");
	printf("Vet. A  -  Vet. B\n\n");
	for(i=0;i<15;i++){
		a[i]=rand()%50+1;
		qd=0;
		for(j=1;j<=a[i];j++){
			if(a[i]%j==0)
				qd++;
		}
	b[i]=qd;
	printf("%5i %8i \n",a[i],b[i]);
	}	
}

