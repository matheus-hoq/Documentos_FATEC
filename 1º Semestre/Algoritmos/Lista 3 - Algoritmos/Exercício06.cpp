#include <stdio.h>
#include <locale.h>

main(){
	
	int c=1000;
	
	setlocale(LC_ALL,"Portuguese");
	while(c<2000){
	if(c%11==5)
	printf("%i\n",c);
	c++;
	
}
}
