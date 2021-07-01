#include <stdio.h>
#include <locale.h>
main(){
	
	int n=1, tot=0;
	setlocale(LC_ALL,"");
	while(n<=100){
		
		tot=tot+n;
		n=n+1;
		
	}
	printf("Resultado: %i",tot);

}
