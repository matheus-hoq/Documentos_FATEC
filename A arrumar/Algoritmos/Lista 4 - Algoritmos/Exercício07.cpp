#include <stdio.h>
#include <locale.h>

main(){

	int num;
	
	setlocale(LC_ALL,"");

	for(num=1;num<=10;num++){
		printf("Insira um número: ");
		scanf("%i",&num);		
		
		printf("%i",num*num);
	}
	
	

}


