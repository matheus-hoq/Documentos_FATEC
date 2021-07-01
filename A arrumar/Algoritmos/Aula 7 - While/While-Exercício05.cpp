#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	int exp=5;	
	setlocale(LC_ALL,"");
	while(exp>=5 && exp<=20){
		printf("Quad.= 2 ^ %i = %.f\n",exp,pow(2,exp));
		exp++;
	}
}
