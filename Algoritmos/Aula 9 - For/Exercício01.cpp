#include <stdio.h>
#include <locale.h>
main(){

	int c, n, tot=0, qv=0;
	
	setlocale(LC_ALL,"");
	
	for(c=1;c<=8;c++){
		printf("Valor %i: ",c);
		scanf("%i",&n);
		if(n>=10 && n<=70){
			tot+=n;
			qv++;
		}
	}
	printf("\nMédia: %.2f\n",(float)tot/qv);
	

}


