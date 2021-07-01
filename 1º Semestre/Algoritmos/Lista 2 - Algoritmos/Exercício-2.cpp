#include <stdio.h>
#include <locale.h>

main(){
	
	int n;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o número: ");
	scanf("%i",&n);
	
	
	
	if(n%10==0){
	        printf("\nDivisível por 10");}
	else if(n%5==0){
	        printf("\nDivisível por 5");}
	else if(n%2==0){
	        printf("\nDivisível por 2");}
	else{
			printf("\nNão é divisível por nenhum deles.");     
	}
		}   
