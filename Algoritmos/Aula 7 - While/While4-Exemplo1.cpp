#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	int exp=0;	
	setlocale(LC_ALL,"");
	while(exp<=12){
		printf("2 ^ %i = %.f\n",exp,pow(2,exp));
		exp++;
	}
}
