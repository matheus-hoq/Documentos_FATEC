#include <stdio.h>
#include <locale.h>

main(){
	
	int n=1, c=1, f=1;	
	setlocale(LC_ALL,"Portuguese");

	while(c<=10){
		c=1;
		f=1;
		while(c<=n){
			f*=c;
			c++;
	}
	printf("\nFatorial %i = %i\n",n,f);
	n+=2;
}
}
