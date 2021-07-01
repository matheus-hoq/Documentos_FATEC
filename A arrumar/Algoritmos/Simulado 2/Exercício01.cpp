#include <stdio.h>
#include <locale.h>
main(){
	
	float saldo,a,b;
	int c=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Saldo: ");
	scanf("%f",&saldo);
	
	a=saldo;
	b=saldo;
	
	while(b - a <= 1000){
		
		a+=a*0.0065;
		b+=b*0.0088;
		
	c++;
	
	}
	printf("Quantidade de meses: %i",c);
}
