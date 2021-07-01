#include <stdio.h>
#include <locale.h>
main(){

	
	int exp=1;	
	setlocale(LC_ALL,"");
	while(exp<=10){
		printf("\n%i",exp);
		exp++;
	}
}
