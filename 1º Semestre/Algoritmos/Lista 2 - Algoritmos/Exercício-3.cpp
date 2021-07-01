#include <stdio.h>
#include <locale.h>

main(){
	
	float sb,vp,res;
	
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o salário bruto: ");
	scanf("%f",&sb);
	printf("Digite o valor da prestação: ");
	scanf("%f",&vp);
	
	res=30*sb/100;

	
	if(vp>=res){
		printf("\nO empréstimo não pode ser concedido");
		}
	else
	    printf("\nO empréstimo pode ser concedido");	}


