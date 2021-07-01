#include <stdio.h>
#include <locale.h>
main(){

	
	int exp=10;	
	setlocale(LC_ALL,"");
	while(exp>=1){
		printf("\n%i",exp);
		exp--;
	}
}
