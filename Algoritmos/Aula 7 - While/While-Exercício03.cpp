#include <stdio.h>
#include <locale.h>
main(){

	
	int exp=0;	
	setlocale(LC_ALL,"");
	while(exp<=15){
		printf("\n%i",exp);
		exp+=2;
	}
}
