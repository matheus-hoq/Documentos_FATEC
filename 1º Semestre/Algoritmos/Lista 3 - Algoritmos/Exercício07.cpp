#include <stdio.h>
#include <locale.h>

main(){
	
	int v, c1=0, c2=0, vn=0, vb=0, tv;
	
	setlocale(LC_ALL,"Portuguese");
	do{
		printf("Voto: ");
		scanf("%i",&v);
		switch(v){
			
			case 1:
				c1++;
				break;
			
			case 2:
				c2++;
				break;
			
			case 3:
				vn++;
				break;
				
			case 4:
				vb++;
				break;
		}
	}while(v!=0);
	tv=c1+c2+vn+vb;
	printf("\nCandidato 1: %.2f%%",c1*100.0/tv);
	printf("\nCandidato 2: %.2f%%",c2*100.0/tv);
	printf("\nNulo:        %.2f%%",vn*100.0/tv);
	printf("\nBranco:      %.2f%%\n",vb*100.0/tv);

}
