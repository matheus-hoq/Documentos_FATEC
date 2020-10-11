#include <stdio.h>
#include <locale.h>
main(){
	
	char resp='s';
	setlocale(LC_ALL,"");
	while(resp=='s'||resp=='S'){
		//jogo da velha
		printf("Continuar? (s/n)");
		scanf(" %c",&resp);	
	}
}
